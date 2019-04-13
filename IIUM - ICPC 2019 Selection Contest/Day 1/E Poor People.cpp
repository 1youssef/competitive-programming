#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define sz(x) (int) x.size()
#define sf(n) scanf(" %d", &n)
#define pf(n) printf("%d", n)
#define all(v) ((v).begin(), (v).end())
#define pb(n) push_back(n)

const double eps = 1e-6;

ll pw(ll b, ll p){ if (!p) return 1; ll sq = pw(b, p / 2); sq *= sq; if (p % 2) sq *= b; return sq; }

int n;

bool ok(int x)
{
    ll ans = (x * 1LL * (x + 1) / 2);
    return (ans <= n);
}

int main()
{
    int t;
    ll ans = 0;
    cin >> t;
    while (t--) {
        cin >> n;
        int l = 0, mid, r = n;
        while (l < r) {
            mid = l + (r - l + 1) / 2;
            if (ok(mid))
                l = mid;
            else
                r = mid - 1;
        }
        ans += l;
    }
    cout << ans;
    return 0;
}

