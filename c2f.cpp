#include<iostream>
#include "c2f.h"

using namespace std;

c2f::c2f()                                               //constructor for celsius to fahrenheit
{
	x=0;
}

c2f::c2f(float inVal)                             
{
	cout<<" you have selected celsius to fahrenheit conversion"
	    << "\n please enter the temperature in celsius ";
	    
	cin>> inVal;
	x=inVal;
	    
}

void c2f::print_c2f() const                         //function definition
{
	cout<<" \n The answer is "<<ans_c2f<<" fahrenheit"<<endl;
	
}

void c2f:: conv_c2f()                              //function definition
{
	ans_c2f=(x*9/5)+32;                           //conversion formula
}
