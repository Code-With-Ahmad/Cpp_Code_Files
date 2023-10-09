#include<iostream>
using namespace std;
int main (void)
{
	int value ;
	cout << "Please Enter any value to print the table of that value" << endl ;
	cin >> value ;
	cout << "\n Here is the table of your input :- \n";
	cout << " \n" ;
	for(int i = 1 ; i <= 10 ; i++)
	{
		cout << "\t" << value << " * " <<  i << " = "  <<  value * i << endl;
	}
}

