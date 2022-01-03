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
    //freopen("input.txt", "r", stdin);
    
    //freopen("output.txt", "w", stdout);
//#endif

    boost
    //---------------------------------
    ll tc;
    cin >> tc;
    while(tc--)
    {
        ll n,k,x;
        cin >> n >> k >> x;
        string s;
        cin>> s;
        ll ans=1,pos=0,cnt=0;

        //Finiding the smallest position from where we have to print b
        vector<ll> v;

        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='*')cnt++;
            else 
            {
                if(cnt!=0)
                {
                    if(ans>x/(cnt*k+1))
                    {
                        pos=i;
                        cnt=0;
                        v.pb(0);
                        break;
                    }
                    ans=ans*(cnt*k+1);
                    v.pb(cnt*k);
                }
                
                cnt=0;
                
            } 
        }

        if(cnt!=0)
        {
            v.pb(cnt*k);
            ans=ans*(cnt*k+1);
        }

        reverse(all(v));

        //priniting all 'a' before pos
        for(int i=0;i<pos;i++) if(s[i]=='a') cout << 'a';
        
        int check=0;
        for(int i=pos,j=0;i<(int)s.size();i++)
        {
            if(s[i]=='a') 
            {
                cout << 'a';
                check=0;
                continue;
            }
            if(check ) continue;
            check=1;
            ans/=(v[j]+1);
            ll t=x/ans;
            if(x%ans==0) t--;
            j++;
            for(ll j=1;j<=t;j++) cout << 'b';
            x-=ans*t;

        }
        cout << endl;


    }
    
    //---------------------------------
    
    return 0;
}