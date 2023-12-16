#include<bits/stdc++.h>
using namespace std;

void Solution(long long int o)
{
    long long int a[o];
    a[0]=o-1;
    a[o/2]=o;


   // a[o-1]=1;
    for(int i=1;i<=(o-2)/2;i++)
    {
        a[i]=a[i-1]-2;
    }
    for(int j=(o/2)+1;j<o;j++)
    {
        a[j]=a[j-1]-2;
    }
    for(int z=0;z<o;z++)
        cout<<a[z]<<" ";
}

signed main()
{
   int n;
   cin>>n;
   if (n>3)
    Solution(n);
    else if(n==1)
        cout<<1;
    else
        cout<<"NO SOLUTION";
}
