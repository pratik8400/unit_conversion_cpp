/* header file for conversion of Temperature from miles to kilometers (m2k)*/

#ifndef m2k_h
#define m2k_h

class m2k          //class creation
{
	public :
		void print_m2k() const;
		void conv_m2k();
		m2k();                   // default constructor
		m2k(float);              //  parameterized constructor
	
	private:
	float ans_m2k;
	float w;
	float inVal;
};
#endif
