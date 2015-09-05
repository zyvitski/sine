//
//  taylor.h
//  Audio_Library
//
//  Created by Alexander zywicki on 7/9/15.
//  Copyright (c) 2015 Alexander zywicki. All rights reserved.
//

#ifndef Audio_Library_taylor_h
#define Audio_Library_taylor_h

#include "constrain.h"
#include "math.h"

 #if __cplusplus == 201402L
    namespace implementation{
        
            template<typename value_t>
            class sine_data{
            public:
                constexpr sine_data(value_t const& _x):x(_x),result(0),power(x),x2(x*x){}
                const value_t x;
                const value_t x2;
                value_t result;
                value_t power;
            };
            
            template<unsigned N>
            constexpr inline void sine_implementation(implementation::sine_data<double>& data){
                constexpr double _shaper = power(-1, N-1) * inverse(factorial((2 * N)-1));
                sine_implementation<N-1>(data);
                data.power*=data.x2;
                data.result+=(data.power * _shaper);
            }
            
            template<>
            constexpr inline void sine_implementation<1>(implementation::sine_data<double>& data){
                data.result+=data.x;
            }
        
            template<typename value_t>
            class cosine_data{
            public:
                constexpr cosine_data(value_t const& _x):x(_x),result(0),power(1),x2(x*x){}
                const value_t x;
                const value_t x2;
                value_t result;
                value_t power;
            };

            template<unsigned N>
            constexpr inline void cosine_implementation(implementation::cosine_data<double>& data){
                constexpr double _shaper = power(-1, N-1) * inverse(factorial(2 * (N-1)));
                cosine_implementation<N-1>(data);
                data.power*=data.x2;
                data.result+= (data.power * _shaper);
            }
            
            template<>
            constexpr inline void cosine_implementation<1>(implementation::cosine_data<double>& data){
                data.result+=1.0;
            }
       
            template<typename value_t>
            class sinc_data{
            public:
                constexpr sinc_data(value_t const& _x):x(_x),result(0),power(1),x2(x*x){}
                const value_t x;
                const value_t x2;
                value_t result;
                value_t power;
            };

            template<unsigned N>
            constexpr inline void sinc_implementation(implementation::sinc_data<double>& data){
                constexpr double _shaper = power(-1, N-1) * inverse(factorial((2 * N)-1));
                sinc_implementation<N-1>(data);
                data.power*=data.x2;
                data.result+=(data.power * _shaper);
            }

            template<>
            constexpr inline void sinc_implementation<1>(implementation::sinc_data<double>& data){
                data.result+=1.0;
            }
        
    }

namespace taylor{
    template <unsigned N>
    constexpr double sine(double const& x) {
        implementation::sine_data<double> data(constrain(x,0,two_pi));
        implementation::sine_implementation<N>(data);
        return data.result;
    }
    
    template <unsigned N>
    constexpr double cosine(double const& x) {
        implementation::cosine_data<double> data(constrain(x,0,two_pi));
        implementation::cosine_implementation<N>(data);
        return data.result;
    }
    
    template <unsigned N>
    constexpr double sinc(double const& x) {
        implementation::sinc_data<double> data(constrain(x,0,two_pi));
        implementation::sinc_implementation<N>(data);
        return data.result;
    }
}
#else
#endif

#endif
