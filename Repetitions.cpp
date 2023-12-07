#include<bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
    int r=1;
    string a;
    cin>>a;
    int n= a.size()-1;
        int s[n];
        for(int i=0;i<n;i++)
    {
        if(a[i+1]==a[i]){
            r++;

        }
        else if(a[i+1]!=a[1])
            r=1;
                    s[i]=r;

    }
        sort(s,s+n);

        if(n>1)
        cout << s[n-1];
        else
            cout<<1;

    return 0;
}
