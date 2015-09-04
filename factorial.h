//
//  factorial.h
//  Audio_Library
//
//  Created by Alexander zywicki on 7/9/15.
//  Copyright (c) 2015 Alexander zywicki. All rights reserved.
//

#ifndef Audio_Library_factorial_h
#define Audio_Library_factorial_h

constexpr unsigned long long factorial (unsigned long long n){
    return n > 0 ? n * factorial( n - 1 ) : 1;
}

#endif
