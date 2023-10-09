#include <iostream>
using namespace std;
int main (void)
{
	int BirthYear;
	cout << "Please Enter Your Birth Year \n";
	cin >> BirthYear ;
	
	int CurrentYear;
	cout << "Please Enter The Current Year 'i.e 2020' \n";
	cin >> CurrentYear ;
	
	int HasBithdayPassThisYear;
	cout << "Have Your Birthday passed This year , Press '0' for 'No' and '1' for 'Yes' \n";
	cin >> HasBithdayPassThisYear ;
	int result ;
	
	if(HasBithdayPassThisYear == 1)
	{
		result = CurrentYear - BirthYear ;
		cout << "\n";
		cout << "Your Are  " << result << " Years Old" << endl ;
		
	}
	else if (HasBithdayPassThisYear == 0)
	{
		result = CurrentYear - BirthYear -1 ;
		cout << "\n";
		cout << "Your Are  " << result << " Years Old" << endl ;
	}
	else 
	{
		cout << "Wrong Input " << endl;
	}
}
