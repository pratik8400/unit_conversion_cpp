#include<iostream>
#include "f2c.h"

using namespace std;

f2c::f2c()                                               //constructor for fahrenheit to celsius conversion
{
	y=0;
}

f2c::f2c(float inVal)                             
{
	cout<<" you have selected  fahrenheit to celsius conversion" << "\n please enter the temperature in fahrenheit ";
	    
	cin >> inVal;
	y = inVal;
	cout << y << endl;
	    
}

void f2c::print_f2c() const                         //function definition
{
	cout<<" \n The answer is "<<ans_f2c<<" celsius"<<endl;
	
}

void f2c:: conv_f2c()                              //function definition
{
	ans_f2c=(y - 32) * 5/9;                           //conversion formula
	 
}
