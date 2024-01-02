#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    vector<int>r,even,odd;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        int a;cin>>a;
        r.push_back(a);
        if(a%2==0) even.push_back(a);
        else odd.push_back(a);
        
    }
    if(r.size()==1)
    {
        if(r[0]%2==0) cout<<"0"<<endl;
        else cout<<r[0]<<endl;
    }
    sort(even.begin(),even.end());
    sort(odd.begin(),odd.end());
    int p=even.size(),q=odd.size();
    if(p%2==0 && q%2==0 || p%2!=0 && q%2==0)
    {
        cnt+=accumulate(even.begin(),even.end(),0)+accumulate(odd.begin(),odd.end(),0)-odd.front();

        cout<<cnt<<endl;
    }
    if(p%2!=0 && q%2!=0)
    {
        cnt+=accumulate(even.begin(),even.end(),0)+accumulate(odd.begin(),odd.end(),0);

        cout<<cnt<<endl;
    }
    return 0;
}