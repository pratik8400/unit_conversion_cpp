#include<iostream>
#include "k2m.h"

using namespace std;

k2m::k2m()                                               //constructor for kilometers to miles conversion
{
	b=0;
}

k2m::k2m(float inVal)                             
{
	cout<<" you have selected kilometers to miles conversion"
	    << "\n please enter the distance in kilometer ";
	    
	cin>> inVal;
	b=inVal;
	    
}

void k2m::print_k2m() const                         //function definition
{
	cout<<" \n The answer is "<<ans_k2m<<" miles"<<endl;
	
}

void k2m:: conv_k2m()                              //function definition
{
	ans_k2m=b/1.6;                                 //conversion formula
}
