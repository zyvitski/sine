//
//  sin.h
//  Audio_Library
//
//  Created by Alexander zywicki on 7/12/15.
//  Copyright (c) 2015 Alexander zywicki. All rights reserved.
//

#ifndef Audio_Library_sin_h
#define Audio_Library_sin_h

#include "taylor.h"


#if __cplusplus == 201402L
constexpr inline double sine(double const& x){
    return taylor::sine<10>(x);
}
constexpr inline double cosine(double const& x){
    return taylor::cosine<10>(x);
}
constexpr inline double sinc(double const& x){
    return taylor::sinc<10>(x);
}

#else

#endif
#endif
