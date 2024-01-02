#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        map<string,int> mpp;
        string ans="NO";
        for (int i = 0; i < n-1; i++)
        {
            string str=s.substr(i,2);
            if(mpp.find(str)==mpp.end())
            {
                mpp[str]=i;
            }
            else
            {
                if(mpp[str]!=i-1)
                {
                    ans="YES";
                    break;
                }
            }
        }

        cout<<ans<<endl;
        
    }
}