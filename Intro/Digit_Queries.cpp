#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef unsigned long long ll;
typedef pair<int,int> pii;
typedef set<int> si;
typedef vector<pair<int,int>> vpii;
#define pb push_back
#define pob pop_back
#define nl '\n'
#define mp make_pair
#define in insert
#define y() cout<<"YES"<<endl;
#define n() cout<<"NO"<<endl;
#define p1() b.pb(1);
#define p0() b.pb(0);
void precision(int x){cout << fixed << setprecision(x);}
#define vset(v,n) vi v(n); for(int i=0;i<n;i++) cin>>v[i];
#define repi(i,a,b) for(int i=a;i<=b;i++)
#define repd(i,a,b) for(int i=a;i>=b;i--)

#define dbg(x) cerr << #x<<" "; _print(x); cerr << endl;
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(double t) {cerr << t;}
 
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}



void solve(ll t);
int main(){
    precision(10);
     #ifndef ONLINE_JUDGE
     freopen("input.txt","r",stdin);
     freopen("output.txt","w",stdout);
     freopen("err.txt","w",stderr);
     #endif
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        solve(t);
        
        
        cout.flush();
    }
    return 0;
    }
void solve(ll t)
{
    // dbg(7-t);
    ll n;
    cin>>n;
    if(n<10){cout<<n<<nl;return;}

    ll prev=0,k=1,s,a,b;
    string str;
    ll temp=1;
    for(ll i=9;i<=LLONG_MAX;i+=(9*temp*k))
    {
        // dbg(i);
        if(n<=i){
            s=n-prev;
            // dbg(s);
            a=(s-1)%(k);
            // dbg(a);
            b=(s-1)/(k);
            // dbg(b);
            ll c=1;
            repi(j,1,k-1){c*=10;}
            c+=b;
            // dbg(c);
            str=to_string(c);
            // dbg(str);
            cout<<str[a]<<nl;
            return;
            }
        
        prev=i;

        k++;
        temp*=10;
    }
}