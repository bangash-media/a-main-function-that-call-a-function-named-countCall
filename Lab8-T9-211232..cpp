#include <iostream>
/*a main function that call a function named countCall. 
Every time this function is called you should display a message 
“I have been called 1 time” etc. If the function is called 3
times the output should be by Using pass by Reference*/
using namespace std;

void countCall(int &num); //function declaration

int main() 
{
	int roll,num;
	cout<<"Enter your Roll no: "; cin>>roll;
	num=roll%10;
	cout<<endl;
	countCall(num); //function call
	
	
	
	return 0;
}
void countCall(int &num) //function defination
{
	if (num<=2&&num>=0) //if condition for for number 0 to 2.
	for (int i=1; i<=3; i++)
	{
		cout<<"I have been called "<<i<<" time."<<endl;
	}
	else if(num>=3) //if condition for for number greater than 3.
	for (int i=1; i<=num; i++)
	{
		cout<<"I have been called "<<i<<" time."<<endl;
	}
	
}
