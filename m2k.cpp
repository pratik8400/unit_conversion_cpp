#include<iostream>
#include "m2k.h"

using namespace std;

m2k::m2k()                                               //constructor for miles to kilometers conversion
{
	w=0;
}

m2k::m2k(float inVal)                             
{
	cout<<" you have selected miles to kilometers conversion" << "\n please enter the distance in miles ";
	    
	cin>> inVal;
	w=inVal;
	    
}

void m2k::print_m2k() const                         //function definition
{
	cout<<" \n The answer is "<<ans_m2k<<" kilometer"<<endl;
	
}

void m2k:: conv_m2k()                              //function definition
{
	ans_m2k=w*1.6;                                 //conversion formula
}
