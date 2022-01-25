#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;


//defines...
#define ll           long long
#define boost        ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb           push_back
#define mp           make_pair
#define in           insert
#define pi           2*acos(0.0)
#define srt(s)       sort(s.begin(),s.end())
#define rsrt(s)      sort(s.rbegin(),s.rend())
#define all(x)       x.begin(),x.end()
#define mem(a, b)    memset(a, b, sizeof(a))
#define c_test       printf("Case %lld: ",t)

const ll mod=1e9+7;
const ll MX=2e5+5;


inline void norm(ll &a) {a%=mod; (a<0) && (a+=mod) ;}                            //positive mod value
inline ll modAdd(ll a,ll b) {a%=mod, b%=mod; norm(a),norm(b); return (a+b)%mod;} //modular addition
inline ll modSub(ll a,ll b) {a%=mod, b%=mod; norm(a),norm(b); return (a-b)%mod;} //modular subtraction
inline ll modMul(ll a,ll b) {a%=mod, b%=mod; norm(a),norm(b); return (a*b)%mod;} //modular multiplication

inline ll bigMod(ll b,ll p)  {ll r=1; while(p) {if(p & 1LL) r=modMul(r,b) ;b=modMul(b,b) ; p>>=1LL ; } return r; }
inline ll modInverse(ll a) {return bigMod(a,mod-2); }
inline ll modDiv(ll a ,ll b) { return modMul(a,modInverse(b)) ;}


typedef tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>ordered_set;

int dRow[] = { -1, 0, 1, 0 };
int dCol[] = { 0, 1, 0, -1 };

ll ext_gcd(ll a, ll b, ll& x, ll& y) {
    if (b == 0) {x = 1;y = 0;return a;}
    ll x1, y1, d = ext_gcd(b, a % b, x1, y1);
    x = y1;y = x1 - y1 * (a / b);
    return d;
}

//code goes from here...



int main()
{
//#ifndef ONLINE_JUDGE
    freopen("billboard.in", "r", stdin);
    
    freopen("billboard.out", "w", stdout);
//#endif

    boost
    //---------------------------------
    ll b1[4];
    ll b2[4];
    ll c[4];
    cin >> b1[0] >> b1[1] >> b1[2] >> b1[3];
    cin >> b2[0] >> b2[1] >> b2[2] >> b2[3];
    cin >> c[0] >> c[1] >> c[2] >> c[3];
    ll area=(b1[2]-b1[0])*(b1[3]-b1[1])+(b2[2]-b2[0])*(b2[3]-b2[1]);
    ll x=min(b1[2],c[2])-max(b1[0],c[0]);
    ll y=min(b1[3],c[3])-max(b1[1],c[1]);
    area-=(max(x,0ll)*max(y,0ll));
    x=min(b2[2],c[2])-max(b2[0],c[0]);
    y=min(b2[3],c[3])-max(b2[1],c[1]);
    area-=(max(x,0ll)*max(y,0ll));
    cout << area << endl;
    //---------------------------------
    
    return 0;
}