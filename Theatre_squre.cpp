#include <bits/stdc++.h>
using namespace std;
// #define ll long long;

int main()
{
    // int t;
    // cin >> t;

    // while (t--)

    // {
       int n,m,a;
       cin>>n>>m>>a;
       long long int cnt=0,sum=0;
       if(n%a !=0)  cnt+=(n/a)+1;
       else  cnt+=(n/a);
       if(m%a !=0)  sum+=(m/a)+1;
       else  sum+=(m/a);
       cout<<cnt*sum<<endl;
    // }
    return 0;
}