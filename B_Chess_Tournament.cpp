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
    int tc;
    cin >> tc;
    while(tc--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;

        int k=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='2') k++;
        }
        if(k==0)
        {
            cout << "YES\n";
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    if(i==j) cout << 'X';
                    else cout << '=';
                }
                cout << endl;
            }
        }
        else if(k<=2) cout << "NO\n";
        else 
        {
            cout << "YES\n";
                char mtx[n+1][n+1];
                for(int i=0;i<=n;i++) for(int j=0;j<=n;j++) mtx[i][j]='#';
                for(int i=0;i<n;i++)
                {
                    if(s[i]=='1')
                    {
                        for(int j=1;j<=n;j++)
                        {
                            mtx[i+1][j]='=';
                            mtx[j][i+1]='=';
                        }
                    }
                }
                for(int i=0;i<n;i++)
                {
                    if(s[i]=='2')
                    {
                        for(int j=1;j<=n;j++)
                        {
                            if(mtx[i+1][j]!='=' and mtx[i+1][j]!='+' and mtx[i+1][j]!='-' and i+1!=j)
                            {
                                mtx[i+1][j]='+';
                                mtx[j][i+1]='-';
                                break;
                            }
                        }
                    }
                }
                for(int i=1;i<=n;i++)
                {
                    for(int j=1;j<=n;j++ )
                    {
                        if(i==j) cout << 'X';
                        else if(mtx[i][j]=='=' or mtx[i][j]=='+' or mtx[i][j]=='-') cout << mtx[i][j];
                        else cout << '=';
                    }
                    cout << endl;
                }
        }
    }
    
    //---------------------------------
    
    return 0;
}