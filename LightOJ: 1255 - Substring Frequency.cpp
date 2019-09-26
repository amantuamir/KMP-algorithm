///**Bismillahir Rahmanir Rahim.**
///Amantu Amir, University of Barishal, Bangladesh
///Accepted
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
    int l = pat.length();
    vector <int> lps(l,0);
    int idx = 0, j = 1;
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

int solve(string text, string pat){
    vector <int> lps = calc(pat);
    int idx = 0, j = 0, l = text.length();
    int ans = 0;
    while(j < l){
        if(text[j] == pat[idx]){
            ++j; idx++;
        }
        else{
            if(idx != 0){
                idx = lps[idx-1];
            }
            else{
                ++j;
            }
        }
        if(idx == pat.length()){
            ans++; idx = lps[idx-1];
        }
    }
    return ans;
}
 
int32_t main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    //fast;
    int tc = 1, cas = 0; I(tc);
    while(tc--){
        //reset();
        string text, pat; II(text, pat);
        printf("Case %lld: %lld\n", ++cas, solve(text, pat));
    }
    return 0;
 
}
 
//--------------------******Alhamdulillah******-------------------//
