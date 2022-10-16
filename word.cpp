#include <iostream>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;

    int len = str.length();
    int i,u=0,l=0;
    for(i=0;i<len;i++)
    {
        if(str[i] >= 65 && str[i] <=90)
            u++;
        else
            l++;
    }
    // cout<<u<<" "<<l;
    if(u>l)
    {
         transform(str.begin(), str.end(), str.begin(), ::toupper);
        cout<<str;
    }
    else
    {
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        cout<<str;
    }

}