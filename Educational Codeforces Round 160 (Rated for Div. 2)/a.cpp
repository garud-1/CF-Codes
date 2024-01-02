
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        int i = 0, cnt = 0;
        map<char,int>mp;
        for(auto i:s)
        {
            mp[i]++;
        }
        for(auto m:mp)
        {
            if(m.second>=int(m.first-'A'+1)) cnt++;
        }
        cout<<cnt<<endl;


        }    

       
    
    return 0;
}
