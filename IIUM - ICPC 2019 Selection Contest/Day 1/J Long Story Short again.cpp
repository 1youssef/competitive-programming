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
  int n, arr[100100];
  map<int, pair<int, int> > pos;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    if (i % 2 == 0)  // even ocrrences at first element
      pos[arr[i]].first++;
    else
      pos[arr[i]].second++;
  }
  sort(arr, arr + n);
  for (int i = 0; i < n; ++i) {
    if (i % 2 == 0) {  // even ocrrences at first element
      if (pos[arr[i]].first > 0)
        pos[arr[i]].first--;
      else
        return cout << "NO", 0;
    } else {
      if (pos[arr[i]].second > 0)
        pos[arr[i]].second--;
      else
        return cout << "NO", 0;
    }
  }
  cout << "YES";
  return 0;
}
