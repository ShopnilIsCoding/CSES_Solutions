#include<iostream>
using namespace std;
long long sum(long long int i)
{
    return ((i*i)*((i*i)-1)/2)-(4*(i-2)*(i-1));
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int k;
    cin>>k;
    for(int i=1 ;i<=k;i++)
    {
        cout<<sum(i)<<"\n";;
    }
}
