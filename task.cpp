#include<bits/stdc++.h>
using namespace std;
 
bool check(char ch)
{
    return (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='y');
}
 
 
int main()
{
    string s,ans;
    cin >> s;
 
    for(auto u:s)
    {
        char c=tolower(u);
        if(check(c)==0)
        {
           ans+='.';
           ans+=c;
        }
 
 
    }
    cout<<ans<<endl;
 
    return 0;
 
 
 
 
}