#include <iostream> 
using namespace std; 


float func(float x, float y) // dy/dx=(x + y + xy) 
{ 
	return (x + y + x * y); 
} 

void euler(float x0, float y, float h, float x) 
{ 
	float temp = -0; 

	while (x0 < x)// Iterating till the point at which we need approximation 
	 
    { 
		temp = y; 
		y = y + h * func(x0, y); 
		x0 = x0 + h; 
	} 

	cout << "Approximate solution at x = "
		<< x << " i.e\n"<<" y("<<x<<") = " << y << endl; // Printing approximation  
} 


int main() 
{ 

	float x0 = 0; 
	float y0 = 1; 
	float h = 0.025; 
	float x = 0.1; // Value of x at which we need approximation 

	euler(x0, y0, h, x); 
	return 0; 
} 
