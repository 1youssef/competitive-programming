#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define sz(x) (int) x.size()
#define sf(n) scanf(" %d", &n)
#define pf(n) printf("%d", n)
#define all(v) ((v).begin(), (v).end())
#define pb(n) push_back(n)

const double eps = 1e-6;

int main() {
  string s;
  cin >> s;
  int l = 0, r = sz(s) - 1;
  while (l <= r) {
    if (s[l] != s[r]) return cout << "NO", 0;
    l++;
    r--;
    while (s[l] == s[l - 1]) l++;
    while (s[r] == s[r + 1]) r--;
  }
  cout << "YES";
  return 0;
}
