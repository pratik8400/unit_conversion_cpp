/*

This program does the following conversions:
1. Celsius to Fahrenheit
2. Fahrenheit to Celsius
3. Kilometers to miles
4. Miles to kilometers

******************* program algorithm****************************
First, the user is asked to enter the character to select the type of conversion, one wants to perform.

-After entering the valid character, the program execution starts.
-After user enters the appropriate value, the conversion is performed using the conversion formula.
-After that the output is given and result is displayed.

Once the conversion is finished, user is asked whether he wants to continue or want to exit the program.

*/

#include <iostream>
#include<cctype>
#include "c2f.h"
#include "f2c.h"
#include "k2m.h"
#include "m2k.h"

using namespace std;

int main()
{
	char inChar1 ,inChar2;
	
	cout<<"\nUnit conversion starts:"<<endl;
	
		do																						// "Do-While"Loop entry
	{
		cout << "What type of conversion would you like to perform?\n\n"		
			 << "Press F to convert Celsius to Fahrenheit and Press enter.\n"
			 << "Press C to convert Fahrenheit to Celsius and Press enter.\n"
			 << "Press K to convert Mile to Kilometer and Press enter.\n"
			 << "Press M to convert Kilometer to Mile and Press enter.\n";
		cin >> inChar1;																		// Character input (F,f,C,c,K,k,M,m)
		cout << "\n";					
	
		if (toupper(inChar1)=='F')															// "nested if" loop	
		{
				c2f conv(0);															// on Call function of Fahrenheit
				conv.conv_c2f();
				conv.print_c2f();
		}
		
		else if (toupper(inChar1)=='C')
		{
				f2c conv(0);															// on Call function of Celsius 
				conv.conv_f2c();
				conv.print_f2c();													
		} 
		
		else if(toupper(inChar1)=='K')
		{
				m2k conv(0);															// on Call function of Kilometer
				conv.conv_m2k();
				conv.print_m2k();
		}
		
		else if (toupper(inChar1)=='M')
		{
				k2m conv(0);																// on Call function of Miles
				conv.conv_k2m();
				conv.print_k2m();
		}
		
		else																				//else statement
	 	{
			cout << "You have entered an invalid character."
				 << "Press any key and press enter to continue.\n\n"; 
			cin >> inChar1;
		}																					//End of "If-Else" loop
		
		cout << "\n";
		cout << "Do You want to continue the Program?\n"									//User's Choice to quit or continue
	 	 	 << "Press N to quit the program or Y to continue & then press enter\n";
	 	
		cin >> inChar2;
		cout << "\n";
	}

	while (toupper(inChar2)!='N');															
	cout << "\nThank you for using this program. Have a nice day!\n";

return 0;
}
