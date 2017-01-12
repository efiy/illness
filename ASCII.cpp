#include <iostream>
using namespace std;

int main(){
 char ascii;
 int numeric;
 cout << "Give character: ";
 cin >> ascii;
for(int i=0;i<ascii;i++)
{
	cout<<"ascii["<<i<<"]is: "<<ascii['i'];
}
 cout << "Its ascii value is: " << (int) ascii << endl;

 cout << "Give a number to convert to ascii: ";
 cin >> numeric;
 cout << "The ascii value of " << numeric << " is " << (char) numeric;
 return 0;
}
