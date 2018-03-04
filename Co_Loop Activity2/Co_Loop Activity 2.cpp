#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{ 
int r, c, sum;
for ( r = 1; r<= 10; r++)
{ 
	for( c =1; c <= 5; c++)
		{
		sum = r + c;
		cout<<"\nr = "<< r;
		cout<<"\nc = "<< c;
		cout<<"\nsum = "<<sum<<endl; 
		} 
}
getch ();
return 0; }
