#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,cnt=0;cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;cin>>s;
        if(s=="++X" || s=="X++") cnt+=1;
        else if(s=="--X" || s=="X--") cnt-=1;
    }
  cout<<cnt<<endl;
    return 0;

}