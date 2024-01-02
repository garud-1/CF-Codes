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

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int i = n - 1;
        string ans = "";
         
        
        
            while (i >= 0)
            {
                if (i >= 2 && (s[i] == 'b' || s[i] == 'c' || s[i] == 'd'))
                {
                    string m = s.substr(i - 2, 3);
                    reverse(m.begin(), m.end());
                    ans += m + '.';
                    i = i - 3;
                }
                else if (i >= 1 && (s[i] == 'a' || s[i] == 'e'))
                {
                    string m = s.substr(i - 1, 2);
                    reverse(m.begin(), m.end());
                    ans += m + '.';
                    i = i - 2;
                }
                else
                {
                    ans += s.substr(0, i + 1);
                    break;
                }
            }
            reverse(ans.begin(), ans.end());
            ans.erase(ans.begin());
            cout << ans << endl;
        
    }
}
