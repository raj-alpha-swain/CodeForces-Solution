#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
	long int t,a,b,c,time1,time;
	 cin>>t;
	while(t!=0)
	{


		cin>>a;
		cin>>b;
		cin>>c;

	    if((a-1)<abs(c-b)+(c-1))
            cout<<"1"<<endl;
        else if((a-1)>abs(c-b)+(c-1))
            cout<<"2"<<endl;
        else
            cout<<"3"<<endl;
		t--;

	}
	return 0;
}
