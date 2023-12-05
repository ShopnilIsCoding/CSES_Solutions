#include<iostream>
using namespace std;
void solution(long long int x)
{
    if(x==1)
    {

    cout<< x<<" ";
    return ;

    }

    cout<< x<<" ";

    if(x%2==0)
     solution(x/2) ;
    else
         solution((x*3)+1);

}
int main()
{
    long long int a;
    cin>>a;
   solution(a);
    return 0;
}
