// Filename : approx.cpp 
// Description : This source file contains the implementation of the // function to approximate the value of PI. 
// Author : Juanabell F. Abiada
// Honor Code : I have not asked nor given any aunthorized help 
// in completing this exercise. 
#include "approx.h" 
#include <iostream>
#include <iomanip>
#include <cmath>

long double approx_pi(int n){

	double pi = 0;
    int x = 1;
			
    	 while (x <= n) {
         pi += 4 * (pow(-1, x + 1))/((2 * x) - 1);
		 x++; 
		}
		
	    std::cout << std::fixed << std::setprecision(15) << pi << std::endl;
		pi = 0;
	
    
return 0;

}