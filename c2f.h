/* header file for conversion of Temperature from Celsius to Fahrenheit (c2f)*/

#ifndef c2f_h
#define c2f_h

class c2f                        // Creation of Class as c2f
{
	public :
		void print_c2f() const;
		void conv_c2f();
		c2f();                   //  Default constructor
		c2f(float);              //  Parameterized constructor
	
	private:
	float ans_c2f;
	float x;
	float inVal;		
};
#endif
