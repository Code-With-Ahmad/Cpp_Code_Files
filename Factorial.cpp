#include <iostream>
using namespace std;
int main (void)
{
	
int value ;
cout << "Please Enter any Value to Find The Factorial of That Value \n";
cin >> value ;
int result = 1;
for(int i = value ; i > 0 ; i--)
{
	result = result * i;
}
cout << "\n";
cout << "Your Answer is \n";
cout << result;

return 0;
}

