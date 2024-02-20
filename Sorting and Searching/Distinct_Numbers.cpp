#include <bits/stdc++.h>
#define Bulu                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr)
using namespace std;
using ll = long long;
ll test(ll n)
{
    ll a[n], c = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (ll i = 0; i < n; i++)
    {
        if (a[i] != a[i + 1])
        {
            c++;
            
        }
       
    }
    return c;
}
int main()
{
    Bulu ;
    ll n;
    cin>>n;
    cout<<test(n);
    
    
}