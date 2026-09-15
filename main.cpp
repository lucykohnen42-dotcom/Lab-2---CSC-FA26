/*******************************************
Lucy Kohnen 
kohnen2@tritons.iowacentral.edu
Computer Science Fall 2026
September 10, 2026
Calculating volume and surface area of a right circular cylinder.  
*******************************************/


#include <iostream>
#include <numbers>

/* 
Equations to calculate volume and surface area
volume of a cylinder: v= (pi)r^2h
Surface area of a cylinder: A=2(pi)r(r+h) 
*/

// prototype of functions

// Prints the volume of the cylinder
float volume_of_cylinder(float radius, float height);
// Prints the surface area of the cylinder 
float surface_area_of_cylinder(float radius, float height);

int main()
{
	
	//call of functions
	
	//radius of cylinder
	float r = 5.00f; 
	// output for function r
	std::cout << "the radius is : " << r <<std::endl; 
	// height of cylinder
	float h = 7.00f; 
	// output for function h
	std::cout << "the height is : " << h << std::endl; 
	// volume of cylinder
	float v = volume_of_cylinder(r, h); 
	// output for v
	std::cout << "the volume is : " << v << std::endl; 
	// surface area of cylinder
	float A = surface_area_of_cylinder(r, h); 
	// output for function A
	std::cout << "the surface area is : " << A << std::endl; 



	return 0;
}

// definition of functions 

//definition of function v
float volume_of_cylinder(float radius, float height)
{
	return std::numbers::pi * pow(radius, 2) * height;
}
//definition of function A
float surface_area_of_cylinder(float radius, float height)
{
	return  2 * std::numbers::pi * radius * (radius + height);

}
