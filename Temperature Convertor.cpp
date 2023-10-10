#include <iostream>
using namespace std;
int main (void)
{
	
cout << "\t \t Welcome To temperature Convertor \n" << endl;
float Temp;
cout << "Enter The Temperaure You Want To Convert \n" << endl;
cin >> Temp;
cout << "\n" << endl;
cout << "In Which Unit You Want To Change This Temerature \n" << endl;
char convert;
cout << "Enter 'C'  for Celcius and 'F' For Farenheit \n" << endl ;
cin >> convert;
float result;

if(convert == 'C' || convert == 'c')
{
	
	result = 5/9 * (Temp - 32);
	cout << "-----------------------------------" << endl;
	cout << "\n" << endl;
	cout << "Your Answer is \n" << endl;
	cout << "Temperature in Celcius = " << result << endl ;
}
else if(convert == 'F' || convert == 'f')
{
	result = (Temp* 9/5) + 32;
	cout << "-----------------------------------" << endl;
	cout << "\n" << endl;
	cout << "Your Answer is \n" << endl;
	cout << "Temperature in Farenheit = " << result << endl ;
}
else
{
	cout << "\n" << endl;
	cout << "Invalid Input" << endl ;
}

return 0;
}

