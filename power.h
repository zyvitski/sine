//
//  power.h
//  Audio_Library
//
//  Created by Alexander zywicki on 7/20/15.
//  Copyright (c) 2015 Alexander zywicki. All rights reserved.
//

#ifndef Audio_Library_power_h
#define Audio_Library_power_h

namespace implementation {
    constexpr inline double power_implementation(double const& base, unsigned const& pow){
        return (pow == 1 ? base : base * power_implementation(base,pow-1));
    }
}
constexpr inline double power(double const& base, unsigned const& pow){
    return pow == 0 ? 1 :implementation::power_implementation(base, pow);
}

#endif
