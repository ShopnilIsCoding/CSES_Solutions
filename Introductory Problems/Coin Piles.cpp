/* #include<iostream>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
    ll a,b,c;
    cin>>a>>b;
    c=a;
    for(ll i=0;i<c;i++)
    {
        if(a>=b)
        {
            a-=2;
            b--;
        }
        else if(b>a)
        {
            b-=2;
            a--;
        }
        if(a==0 || b==0)
            break;
    }
    if(a==0 & b==0)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    }
    return 0;
}   i got TLE using this */
#include<iostream>
using namespace std;
typedef long long ll;

int main() {
    ll t;
    cin >> t;

    while (t--) {
        ll a, b;
        cin >> a >> b;

        if ((a + b) % 3 == 0 && 2 * min(a, b) >= max(a, b)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}

