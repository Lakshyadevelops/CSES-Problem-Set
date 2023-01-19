#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef long long ll;
typedef pair<int,int> pii;
typedef set<int> si;
typedef vector<pair<int,int>> vpii;
#define pb push_back
#define pob pop_back
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
    ll a,b,c1,d1;
    double c2,d2;
    cin>>a>>b;
    c2=(2*a*1.0-b*1.0)/3;
    c1=(2*a-b)/3;
    d1=(2*b-a)/3;
    d2=(2*b*1.0-a*1.0)/3;
    // cout<<c1<<" "<<c2<<" "<<d1<<" "<<d2<<"\n";
    if(c1==c2&&d1==d2&&c1>=0&&d1>=0){y();return;}
    n();

    

}