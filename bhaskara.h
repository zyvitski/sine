#ifndef __BHASKARA_H__
#define __BHASKARA_H__ value
#include "power.h"
#include "pi.h"
#include "constrain.h"
#include <iostream>
namespace bhaskara{
	 inline double sine(double const& x){
	 	//input mapping
		double _x = constrain(x,0.0,two_pi);
		double sign=0.0;
		if(_x>=pi){
			sign = 1.0;
			_x-=pi;
		}else{
			sign = -1.0;
		}
		//calculations
	 	constexpr double _5pi2 = 5 * power(pi,2);
		double numerator = (16 * _x) * (_x - pi);
		double denominator = _5pi2 - (4 * _x) * (pi - _x);
		return sign * (numerator / denominator);
	}
}

#endif
