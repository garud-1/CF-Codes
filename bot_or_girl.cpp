#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;cin>>s;
    int n=s.length();
    set<int>p;
    for(int i=0;i<n;i++)
    {
        p.insert(s[i]);
    }
    int q=p.size();
    if((q&1)!=0) cout<< "IGNORE HIM!"<<endl;
    else  cout<<"CHAT WITH HER!"<<endl;
    return 0;
}