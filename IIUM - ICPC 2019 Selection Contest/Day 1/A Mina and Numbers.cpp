#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define sz(x) (int)x.size()
#define sf(n) scanf(" %d",&n)
#define pf(n)  printf("%d", n)
#define all(v) ((v).begin(), (v).end())
#define pb(n)  push_back(n)

const double eps = 1e-6;

ll pw(ll b, ll p){ if (!p) return 1; ll sq = pw(b, p / 2); sq *= sq; if (p % 2) sq *= b; return sq; }


 int main()
{
   ll x,y,z;
   ll a,b,c;
   cin >> x >> y >> z;
   a = ( x + 0LL + y - z) / 2;
   c = y - a;
   b =  z - c;
   cout << a <<" " << b << " "<<c;

   return 0;
}
