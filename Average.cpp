#include <iostream>
using namespace std;
int main (void)
{
	cout << "Welcome to Average Calculator of 3 numbers \n" << endl;
	
float value1;
cout << "\n" << endl;
cout << "Enter First Number \n" << endl;
cin >> value1;

float value2;
cout << "\n" << endl;
cout << "Enter Second Number \n" << endl;
cin >> value2;

float value3;
cout << "\n" << endl;
cout << "Enter Third Number \n" << endl;
cin >> value3;

float result = (value1 + value2 + value3) / 3 ;

cout << "\n" << endl;
cout << "---------------------------------" << endl;
cout << "\n" << endl;
cout << "Your Answer is" << endl;
cout << "\n" << endl;
cout << "The Average is equal to " << result << endl;

return 0;
}

