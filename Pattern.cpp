#include <iostream>
using namespace std;
int main (void)
{
	for(int i = 0 ; i <= 5 ; i++)  // Number of rows
	{
		for(int j = 5 ; j >= i ; j--) // Number of starics in a row (they will decrese one by one)
		{
			cout << "*";
		}
		cout << "\n";
	}
}
