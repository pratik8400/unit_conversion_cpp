/* header file for conversion of Temperature from  kilometers to miles  (k2m)*/

#ifndef k2m_h
#define k2m_h

class k2m          //class creation
{
	public :
		void print_k2m() const;
		void conv_k2m();
		k2m();                   // default constructor
		k2m(float);              //  parameterized constructor
	
	private:
	float ans_k2m;
	float b;
	float inVal;		
};

#endif
