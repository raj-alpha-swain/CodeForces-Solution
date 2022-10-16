#include<iostream>
#include<cstring>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;

    long int len=str.length();
    for(long int i=0;i<len;i++)
        str[0]=toupper(str[0]);
    cout<<str;

    return 0;

}