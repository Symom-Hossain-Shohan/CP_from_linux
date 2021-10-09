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
        string s;
        cin >> s;
        string s1=s,s2=s;
        for(int i=0;i<10;i++)
        {
            if(s1[i]=='?')
            {
                if(i%2==0) s1[i]='1';
                else s1[i]='0';
            }
        }
        for(int i=0;i<10;i++)
        {
            if(s2[i]=='?')
            {
                if(i%2==0) s2[i]='0';
                else s2[i]='1';
            }
        }

        ll ans1=10,ans2=10;
        ll sa=0,sb=0,ra=5,rb=5;
        for(int i=0;i<10;i++)
        {
            if(i%2==0)
            {
                if(s1[i]=='1') sa++;
                ra--;
                if(sa>sb)
                {
                    if(sa-sb>rb) 
                    {
                        ans1=i+1;
                        break;
                    }
                }
                else 
                {
                    if(sb-sa>ra)
                    {
                        ans1=i+1;
                        break;
                    }
                }
            }
            else
            {
                if(s1[i]=='1') sb++;
                rb--;
                if(sa>sb)
                {
                    if(sa-sb>rb)
                    {
                        ans1=i+1;
                        break;
                    }
                }
                else 
                {
                    if(sb-sa>ra)
                    {
                        ans1=i+1;
                        break;
                    }
                }
            }
        }
        sa=0,sb=0,ra=5,rb=5;

        for(int i=0;i<10;i++)
        {
            if(i%2==0)
            {
                if(s2[i]=='1') sa++;
                ra--;

                if(sa>sb)
                {
                    if(sa-sb>rb)
                    {
                        ans2=i+1;
                        break;
                    }
                }
                else 
                {
                    if(sb-sa>ra)
                    {
                        ans2=i+1;
                        break;
                    }
                }
            }
            else 
            {
                if(s2[i]=='1') sb++;
                rb--;

                if(sa>sb)
                {
                    if(sa-sb>rb)
                    {
                        ans2=i+1;
                        break;
                    }
                }
                else 
                {
                    if(sb-sa>ra)
                    {
                        ans2=i+1;
                        break;
                    }
                }
            }
        }

        cout << min(ans1,ans2) << endl;
    }
    
    //---------------------------------
    
    return 0;
}