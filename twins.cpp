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
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;



void solve() {
    ll n;cin>>n;
    vector<int>ans(n,0);
    for(int i=0;i<n;i++) cin>>ans[i];
    ll sum = accumulate(all(ans),0ll);
    ll half;
    if(n%2==0) half=sum/2;
    else half = (sum+1)/2;
    sort(all(ans));
    ll cnt=0;

    for(int i=n-1;i>-0;i--)
    {
        if(sum-ans[i]<=half)
        {
            cnt++;
            sum-=ans[i];
        }
        else{
            cout<<cnt<<endl;
            break;
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