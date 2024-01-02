#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;cin>>s;
    int lower=0,higher=0;
    string ans="";
    for(int i=0;i<s.length();i++)
    {
        if(s[i]&' ') lower++;
        else higher++;
    }
    
    
     if(lower<higher){
        for(int i=0;i<s.length();i++)
        {
            if(s[i]&' ')ans+=(s[i]&'_');
            else ans+=s[i];
        }
        cout<<ans<<endl;
    }

    if(lower>higher || lower==higher){
        for(int i=0;i<s.length();i++)
        {
            if(s[i]&'_')ans+=(s[i]&' ');
            else ans+=s[i];
        } 
        cout<<ans<<endl;
    }
    return 0;
}