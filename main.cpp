
#include "math.h"
#include <iostream>
#include <fstream>
#include <cmath>


int main(int argc, char** argv){
	double step = two_pi / 1000.0;
	double phs = 0;
	for(int i=0; i <1000; ++i){
        std::cout<<sine(phs)<<std::endl;
		phs+=step;
	}
	return 1;
}