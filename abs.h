//
//  abs.h
//  Audio_Library
//
//  Created by Alexander zywicki on 7/13/15.
//  Copyright (c) 2015 Alexander zywicki. All rights reserved.
//

#ifndef Audio_Library_abs_h
#define Audio_Library_abs_h

template <typename T>
constexpr inline T abs(T const& value) {
    return value < 0 ? value * -1 : value;
}

#endif
