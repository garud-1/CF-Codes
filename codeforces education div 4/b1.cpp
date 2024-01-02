#include <bits/stdc++.h>

using namespace std;

template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream &os, const T_container &v) { os << '{'; string sep; for (const T &x : v) os << sep << x, sep = ", "; return os << '}'; }
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#ifdef LOCAL
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;



void solve() {
    char a[3][3];
    for(int i=0;i<3;i++)
     for(int j=0;j<3;j++) 
       cin>>a[i][j];

    for(int i=0;i<3;i++)
    {
         for(int j=0;j<3;j++) 
         {
            if(a[i][j]=='?') 
            {
                
                
                if(j==0)
                {
                      if(a[i][1]=='A' && a[i][2]=='B') cout<<'C'<<endl;

                  if(a[i][1]=='B' && a[i][2]=='C') cout<<'A'<<endl;

                  if(a[i][1]=='A' && a[i][2]=='C') cout<<'B'<<endl;
                }
                else if(j==2)
                {
                      if(a[i][1]=='A' && a[i][0]=='B') cout<<'C'<<endl;

                  if(a[i][1]=='B' && a[i][0]=='C') cout<<'A'<<endl;

                  if(a[i][1]=='A' && a[i][0]=='C') cout<<'B'<<endl;
                }
                else 
                {
                     if(a[i][2]=='A' && a[i][0]=='B') cout<<'C'<<endl;

                  if(a[i][2]=='B' && a[i][0]=='C') cout<<'A'<<endl;

                  if(a[i][2]=='A' && a[i][0]=='C') cout<<'B'<<endl;

                }

                break;
                
                
            }
         }
    }
    

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    while(tc--){
        // cout << "Case #" << t << ": ";
        solve();
    }    
    
}