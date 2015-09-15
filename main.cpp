
#include "math.h"
#include <iostream>
#include <fstream>
#include <cmath>


int main(int argc, char** argv){
	double step = two_pi / 100.0;
	double phs = 0;
	for(int i=0; i <100; ++i){
		std::cout<<std::sin(phs) - bhaskara::sine(phs)<<std::endl;
		phs+=step;
	}
	
		
	
	return 1;
}