#include <iostream>

using namespace std;

int main(){
   long int arr[4];
   long int i,t,c=0;

   cin>>t;
   while(t!=0){


     for(i=0;i<4;i++)
        cin>>arr[i];
     for(i=1;i<4;i++){
        if(arr[0]<arr[i])
            ++c;
     }
        cout<<c<<endl;
        c=0;

        t--;
    }

}
