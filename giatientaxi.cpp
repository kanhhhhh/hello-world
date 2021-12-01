#include <iostream>
using namespace std;

int main()
{
	double a,c,d;
	bool b(true);
	cin>>a>>b>>c;
	int sum=0;
	int h=10000;
	if (c>=0){ 
	  if (!b){
		if (a<=1)
		  sum=h;
		else if ( a<=30 )
		  sum=h+13600*(a-1);
		else 
		  sum=h+13600*29+11000*(a-30);
	  }
	  else{
		d=20000*(c-2);
		if (c>=2){
		if (a<=1)
		  sum=h+h*0.6+d;
		else if (a<=30)
		  sum=h+13600*(a-1)+(h+13600*(a-1))*0.6+d;
		else 
		  sum=h+13600*29+11000*(a-30)+(h+13600*29+11000*(a-30))*0.6+d;
	            }
	    else {
	    	if (a<=1)
		  sum=h+h*0.6;
		else if (a<=30)
		  sum=h+13600*(a-1)+(h+13600*(a-1))*0.6;
		else 
		  sum=h+13600*29+11000*(a-30)+(h+13600*29+11000*(a-30))*0.6;
	            
		}
			
	}
	cout<<sum;
    }
	else 
	  cout<<"Gia tri khong hop le"; 
	
    return 0;
}

