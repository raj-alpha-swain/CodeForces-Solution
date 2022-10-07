#include <iostream>
using namespace std;

int main()
{
    long long int n,m;
    cin>>n;
    cin>>m;

    if (m!=1)
    {
        cout<<((m*n)-n);
    }
    else
        cout<<((m*n)-1);

}

