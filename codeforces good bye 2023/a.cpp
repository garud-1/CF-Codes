#include <bits/stdc++.h>

using namespace std;

template <typename A, typename B>
ostream &operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template <typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type>
ostream &operator<<(ostream &os, const T_container &v)
{
    os << '{';
    string sep;
    for (const T &x : v)
        os << sep << x, sep = ", ";
    return os << '}';
}
void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail>
void dbg_out(Head H, Tail... T)
{
    cerr << ' ' << H;
    dbg_out(T...);
}
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
#define ci                      \
    for (int i = 0; i < n; i++) \
        cin >> v[i];

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<int> v(n, 0);
    ll pro = 1ll;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        pro *= v[i];
    }

    if (2023 % pro == 0)
    {
        cout << "YES" << endl;
        for(int j=0;j<k;j++)
        {
            if(j!=k-1) cout<<1<<" ";
            else cout<<(2023/pro);
        }
        cout<<endl;
    }
    else
        cout << "NO" << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        // cout << "Case #" << t << ": ";
        solve();
    }
}