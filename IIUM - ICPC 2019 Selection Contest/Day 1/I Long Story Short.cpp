#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define sz(x) (int) x.size()
#define sf(n) scanf(" %d", &n)
#define pf(n) printf("%d", n)
#define all(v) ((v).begin(), (v).end())
#define pb(n) push_back(n)

const double eps = 1e-6;

int n;

bool ok(int x) {
  ll ans = (x * 1LL * (x + 1) / 2) * 1LL * 3 - x;
  return (ans <= n);
}

int main() {
  int t;
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
    cout << l << endl;
  }

  return 0;
}
