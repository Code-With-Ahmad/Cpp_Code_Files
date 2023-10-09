#include <iostream>
using namespace std ;
int main (void)
{
	int value ;
	cout << "Please Enter The Value of starting natural number you want to add" << endl;
	cin >> value ;
	
	int value1 ;
	cout << "Please Enter The Value of ending natural number you want to add" << endl;
	cin >> value1 ;
	
	int result ;
	
	for(int i = value ; i <= value1 ; i++)
	{
		result = result + i;
	}
	cout << '\n';
	cout << "Your Answer is : \n";
		cout << '\n';
	cout << result;
	
	


}
