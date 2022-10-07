#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    long int t1,len;
    cin>>t1;
    while(t1!=0)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        len=s.size();
        if(n==len){

            string t="Timur";
            sort(s.begin(),s.end());
            sort(t.begin(),t.end());
        if(s==t)
            cout<<"YES";
        else
            cout<<"NO";
        }
        else
            cout<<"NO";
        t1--;
        cout<<endl;
    }
}
