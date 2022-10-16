#include <iostream>
#include <string>
using namespace std;

string & removeDuplicate( string &s )
{
    const char *p = s.c_str();

    string::size_type pos = 0;

    for ( string::size_type i = 0, n = s.size(); i < n; i++ )
    {
        string::size_type j = 0;
        while ( j < pos && s[i] != s[j] ) j++;

        if ( j == pos )
        {
            if ( i != pos ) s[pos] = s[i];
            ++pos;
        }
    }

    return s.erase( pos );
}

int main()
{
    string s;
    cin>>s;



    removeDuplicate( s ) ;
    int len=s.length();

    if(len%2==0)
        cout<<"CHAT WITH HER!";
    else
        cout<<"IGNORE HIM";

    return 0;
}
