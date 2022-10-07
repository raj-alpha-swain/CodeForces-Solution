#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin>>t;

    while(t!=0){
            int n,c=0;
            cin>>n;
            string first, second;
            cin>>first;
            cin>>second;
            for(int i=0;i<n;i++){
                if(first[i]!=second[i] && (first[i]=='R' || second[i]=='R')){
                    c=1;
                    break;
            }
        }
        if(c==1)
            cout<<"NO";
        else
            cout<<"YES";

            t--;
            cout<<endl;

    }


  return 0;
}

