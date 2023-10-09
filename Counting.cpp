#include <iostream>
using namespace std;
int main (void)
{
	
int startingIndex ;
cout << "Please Enter The Value From Where To Start Printing The Counting \n";
cin >> startingIndex ;

int endingIndex ;
cout << "Please Enter The Value From Where To End Printing The Counting \n";
cin >> endingIndex ;
cout << "\n So Here is Your Answer :- \n" ;
cout << "\n";
for(int i = startingIndex ; i <= endingIndex ; i++)
{
	cout << "\t" << i << endl;
cout << "\n";
}

}
