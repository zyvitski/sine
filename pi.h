//
//  pi.h
//  Audio_Library
//
//  Created by Alexander zywicki on 7/12/15.
//  Copyright (c) 2015 Alexander zywicki. All rights reserved.
//

#ifndef Audio_Library_pi_h
#define Audio_Library_pi_h

#if __cplusplus == 201402L

namespace implementation {
    template<typename T> constexpr T _pi = 3.14159265358979323846264338327;
    template<typename T> constexpr T _two_pi = 6.28318530717958647692528676656; 
    template<typename T> constexpr T _half_pi = _pi<double> * 0.5; 
}
	#define pi     implementation::_pi<double>
	#define two_pi implementation::_two_pi<double>
	#define half_pi implementation::_half_pi<double>
#else

	#define pi     3.14159265358979323846264338327
	#define two_pi 6.28318530717958647692528676656
	#define half_pi (pi * 0.5);

#endif


#endif
