#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	int a,b,c;
	cin>>a>>b>>c;
	if (a<b+c && b<a+c && c<b+a){
		if (a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b)
		   cout<<"VUONG";
		else if (a==b && a==c)
		   cout<<"DEU";
		else if (a==b || b==c || c==a)
		   cout<<"CAN";
		else if (a*a>b*b+c*c || b*b>a*a+c*c || c*c>a*a+b*b)
		   cout<<"TU";
		else 
		   cout<<"NHON";
	}
	else 
	    cout<<"KHONG";
	    return 0;
 } 
