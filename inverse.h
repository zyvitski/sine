//
//  inverse.h
//  Audio_Library
//
//  Created by Alexander zywicki on 7/20/15.
//  Copyright (c) 2015 Alexander zywicki. All rights reserved.
//

#ifndef Audio_Library_inverse_h
#define Audio_Library_inverse_h
template<typename T>
constexpr inline bool is_zero(T const& value){
	return value == 0.0;
}

constexpr inline double inverse(double const& value){
    return is_zero(value) ? 0.0 : 1.0 / value;
}

#endif
