// Filename : main.cpp 
// Description : This program tests the implementation of the 
// function to approximate the value of PI. 
// Author : Juanabell F. Abiada
// Honor Code : I have not asked nor given any aunthorized help 
// in completing this exercise. 
#include <iostream>
#include "approx.h"
int main(){
	 
	int T;
	int n;
	
	std::cin >> T;
	int i=0;
	while (i<T){
	std::cin>>n;
	approx_pi(n);
	i++;
	}
return 0;
}