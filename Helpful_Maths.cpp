#include <bits/stdc++.h>
using namespace std;

int main()
{
   string s;cin>>s;
   int n=s.length();
   vector<int>r;
   string cnt=" ";
   for(int i=0;i<n;i+=2)
   {
     r.push_back(s[i]);
   }
   sort(r.begin(),r.end());
    for(int i=0;i<r.size();i++)
    {
        cnt+=r[i];
        cnt+='+';
    }
    cnt.erase(cnt.end()-1);
    cout<<cnt<<endl;
}