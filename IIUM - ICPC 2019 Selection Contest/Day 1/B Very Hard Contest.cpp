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
    int n;
    cin >> n;
    ll sum = 0;
    while (n){
        sum += n%10;
        n/=10;
    }

    if (sum % 7 == 0)cout << "trick\n";
    else if (sum %2==0) cout << "easy\n";
    else cout << "hard\n";

    return 0;
}
