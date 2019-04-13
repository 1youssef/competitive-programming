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
   int arr[100100];
   bool ch = 1;
   for (int i = 0; i < n; ++i)cin >> arr[i];
   for (int i = 0; i < n-1; ++i){
    if (ch){
        if(arr[i] < arr[i+1])ch = 0;
    }else{
        if(arr[i] > arr[i+1]){return cout << "NO", 0; }
    }
   }
    cout << "YES";
    return 0;
}
