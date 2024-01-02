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

// string  fun(string s,int n)
// {
//     string ans="";
//     if(n==0) return ans;
//     char V='a',V='e';
//     char C='b',C='c',C='d';
//     if(s[n-1]==)

// }

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
        if (n == 1)
            cout<< s[0]<<endl;
        if (n == 2)
            cout<< (s[0] + '.' + s[1])<<endl;

        if (n >= 3)
        {
            while (i >= 0)
            {

                if ( s[i] == 'b' || s[i] == 'c' || s[i] == 'd')
                {
                    string m = s.substr(i, i - 3);
                    ans += m + '.';
                    i = i - 3;
                }
                else if (s[i] == 'a' || s[i] == 'e')
                {
                    string m = s.substr(i, i - 2);
                    ans += m + '.';
                    i = i - 2;
                }
            }
            string t="";
            if(ans.length()>0)
            t= ans.erase(ans.back());
            reverse(t.begin(),t.end());
            cout<<t<<endl;

        }
    }
}