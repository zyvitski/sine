#ifndef __constrain_h__
#define __constrain_h__

#include "sign.h"
#include "abs.h"
#include "pi.h"

namespace implementation{
	template<typename T>
	constexpr bool is_within(T const& value, T const& minimum, T const& maximum){
		return (value >= minimum && value <= maximum);
	}
}
constexpr inline double constrain(double const& value, double const& minimum, double const& maximum){
	return implementation::is_within(value,minimum,maximum) ? value : constrain(value - ((sign(value) * (maximum - minimum))), minimum,maximum);
}

#endif