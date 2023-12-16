#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,r=0,s=0;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int j=0;j<n-1;j++)
    {
        if(a[j]>a[j+1])
        {
            r=a[j]-a[j+1];
            a[j+1]=a[j];
        }
        else
            r=0;

        s+=r;
    }
    cout<<s<<endl;
    return 0;
}
