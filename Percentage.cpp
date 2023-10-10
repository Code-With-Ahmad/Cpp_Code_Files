#include <iostream>
using namespace std;
int main (void)
{

	cout << "Welcome to percentage calculator \n" << endl; 
float value1;
cout << "Enter Obtain Marks \n " << endl;
cin >> value1;

float value2;
cout << "\n" << endl;
cout << "Enter Total Marks \n " << endl;
cin >> value2;

float result = (value1 / value2) * 100 ;

cout << "------------------------- \n " << endl ;
cout << "\n" << endl ;
cout << "Your Answer is \n "<< endl;
cout << "\n" << endl ;
cout << result << endl;

return 0;
}

