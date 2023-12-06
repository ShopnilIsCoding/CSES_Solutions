#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;

    long long int a[n],r=0,s=(n*(n+1))/2;
    for(int j=1;j<n;j++)
    {
        cin>>a[j];
        r+=a[j];
    }
    cout<<s-r;
    return 0;
}
