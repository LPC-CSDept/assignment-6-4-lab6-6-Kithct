//		Make a program that find the prime numbers according to two user inputs [begin, end]
//		begin and end must be positive integers.
//			if begin == end, getListprime(int) function is called with default arguments [begin, 100]
//			if begin > end,  getListprime(  ) function is called with default arguments [0, 100]
//			if begin < end, getListprime(int, int) fuction is called with the range from begin to end.
//		example)
//			user input = 20, 20 , call getListprime( 20 ) // the second parameter is default.[20,100]
//			user input = 40, 20 , call getListprime(   ) // the both parameters are default. [0,100]
//			user input = 20, 50,  call getListprime(20, 50) // call the function with actual arguments

#include <iostream>
#include <iomanip>
using namespace std;

//----------
// Make a line for Function Prototype for getListprime Here
//----------
void getListprime(int begin,int end);
int getListprime();
void getListprime(int begin);
int cnt;

int main()
{
	int begin, end;
	cout << "Enter your input (two integer for range ) \n";
	cin >> begin >> end;
	if (begin < end)
		getListprime(begin, end);
	else if (begin > end)
		getListprime();
	else
		getListprime(begin);
}
void getListprime(int begin, int end)
{
	int i,p;
  	for (p=begin;p<=end; p++) 
	{
    	if(p == 0 || p == 1)
      		continue;
		cnt=1;
    	for(int i = 2; i <= (p / 2); i++)
      		if (p % i == 0)
			{
				cnt=0;
        		break;
			}
    	if(cnt==1)
      		cout << " Prime number : " << p <<endl;
	}
}
int getListprime()
{
	int i,p;
	for (p = 0; p<=100;p++)
	{
		if(p == 0 || p == 1)
      		continue;
		cnt=1;
    	for(int i = 2; i <= (p / 2); i++)
      		if (p % i == 0)
			{
				cnt=0;
        		break;
			}
    	if(cnt==1)
      		cout << " Prime number : " << p <<endl;
	}		
}
void getListprime(int begin)
{
	int i,p;
	for (p = begin; p<=100;p++)
	{
		if(p == 0 || p == 1)
      		continue;
		cnt=1;
    	for(int i = 2; i <= (p / 2); i++)
      		if (p % i == 0)
			{
				cnt=0;
        		break;
			}
    	if(cnt==1)
      		cout << " Prime number : " << p <<endl;
	}
}