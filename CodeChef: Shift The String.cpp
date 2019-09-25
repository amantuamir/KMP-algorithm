///**Bismillahir Rahmanir Rahim.**
///Amantu Amir, University of Barishal, Bangladesh
#include <bits/stdc++.h>
using namespace std;
#define clr(a, v)             memset(a, v, sizeof a)
#define all(v)                v.begin(), v.end()
#define ast(v)                sort(v.begin(),v.end())
#define dst(v)                sort(v.begin(),v.end(), greater <int> ())
#define fast ios_base::       sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ass(cur, v)           cur.assign(v.begin(), v.end())
#define int                   long long int
#define rep(i, l, r)          for (int i = l; i < r; i++)
#define rep2(i, l, r)         for (int i = l-1; i >= r; i--)
#define sfs(s)                scanf("%s", s)
#define sfl(n)                scanf("%lld", &n)
#define sffl(n, m)            scanf("%lld %lld",&n,&m)
#define sfffl(n, m, o)        scanf("%d %d %d",&n,&m, &o)
#define pf(n)                 printf("%d", n)
#define debug                 cout << " debug\n"
#define yes                   cout << "YES\n"
#define no                    cout << "NO\n"
#define sp                    cout << " "
#define nl                    cout << "\n"
#define prln(n)               printf("%d\n", n)
#define pfl(n)                printf("%lld\n", n)
#define I(n)                  cin >> n
#define II(n, m)              cin >> n >> m
#define III(a, b, c)          cin >> a >> b >> c
#define small(a, b, c)        min(a, min(b, c))
#define big(a, b, c)          max(a, max(b, c))
#define P(n)                  cout << n
#define PP(n, m)              cout << n << " " << m << "\n"
#define PPP(a, b, c)          cout << a << " " << b << " " << c << "\n"
#define rt(n)                 return n
#define mid(b, e)             (b+e)/2
#define left(node)            node*2
#define right(node)           node*2+1
#define pii                   pair<int,int>
#define mp                    make_pair
#define pb                    push_back
#define S                     second
#define F                     first
#define PI                    3.1415926

struct greaters{
    bool operator()(const long& a, const long& b) const{
        return a > b;
    }
};

int x_move[] = {2, 1, -1, -2, -2, -1, 1, 2};
int y_move[] = {1, 2, 2, 1, -1, -2, -2, -1};

string toString(int n){
    stringstream ss; ss << n;
    string s; ss >> s;
    return s;
}

int toInt(string s){
    stringstream ss; ss << s;
    int n; ss >> n;
    return n;
}


//Template end
//-------------------******Alhamdulillah******--------------------//

const int N = 2e5+5;
const int mod = 1e9+7;

void reset(){
 
}

vector <int> calc(string pat){
    int idx = 0, j = 1, l = pat.length();
    vector <int> lps(l,0);
    while(j < l){
        if(pat[idx] == pat[j]){
            lps[j] = idx+1;
            ++idx; ++j;
        }
        else{
            if(idx != 0){
                idx = lps[idx-1];
            }
            else{
                ++j;
            }
        }
    }
    return lps;
}

void solve(string pat, string text){
    vector <int> lps = calc(pat);
    int idx = 0, j = 0, l = text.length();
    int cnt = 0, mx = -1, ans;
    while(j < l){
        if(text[j] == pat[idx]){
            ++j; idx++;
            cnt++;
        }
        else{
            if(idx != 0){
                idx = lps[idx-1];
            }
            else{
                ++j;
            }
            cnt = 0;
        }
        if(mx < cnt){
            mx = cnt; ans = j - cnt;
        }
    }
    P(ans); nl;
}
 
int32_t main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    fast;
    int tc = 1, cas = 0;
    while(tc--){
        //reset();
        int n; I(n);
        string pat, text;
        II(pat, text); text += text;
        solve(pat, text);
    }
    return 0;
 
}
 
//--------------------******Alhamdulillah******-------------------//
