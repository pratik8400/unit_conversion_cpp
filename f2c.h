/* header file for conversion of Temperature from  Fahrenheit to Celsius (f2c)*/

#ifndef f2c_h
#define f2c_h

class f2c                              // Creation of class as f2c
{
	public :
		void print_f2c() const;
		void conv_f2c();
	    f2c();                         // default constructor
		f2c(float);                    //  parameterized constructor
	
	private:
	float ans_f2c;
	float y;
	float inVal;
	
};
#endif

