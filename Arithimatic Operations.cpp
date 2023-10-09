#include <iostream>
using namespace std;
int main (void)
{
	
int value1;
cout << "Please Enter first value" << endl;
cin >> value1;

int value2;
cout << "Please Enter second value" << endl;
cin >> value2;

int op ;
cout << "Press 1 for Sum , 2 for Sub , 3 for Multiply and 4 for Divide" << endl;
cin >> op;

int result;

float res ;

switch(op)
{
	case 1 :
		{
		result = value1 + value2;
		cout << "By Adding These Two Nummbers Your Answer is \n" << endl;
		cout << result ;
		break; 
	   }
	   case 2 :
		{
		result = value1 - value2;
		cout << "By Subtracting These Two Nummbers Your Answer is \n" << endl;
		cout << result ;
		break; 
	   }
	   case 3 :
		{
		result = value1 * value2;
		cout << "By Multiplying These Two Nummbers Your Answer is \n" << endl;
		cout << result ;
		break; 
	   }
	   case 4 :
		{
		float value3  = value1;
		float value4  = value2;
		res = value3 / value4;
		cout << "By Dividing These Two Nummbers Your Answer is \n" << endl;
		cout << res ;
		break; 
	   }
	   default :
	   	cout << "Invalid Character !!!";
}

return 0;
}

