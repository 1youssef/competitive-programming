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
void reverse(int a[], int k)
{
    for (int i = 0; i < k/2; i++)
        swap(a[i], a[k-i-1]);
}

int main()
{
    int n, arr[100100], l[100100], r[100100];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    l[0] = arr[0]; r[0] = arr[n-1];
    for (int i = 1; i < n; i++)
        l[i] = max(arr[i],l[i-1]);
    for (int j = n - 2, i = 1; j>=0 ;j--,i++)
        r[i] = max(arr[j],r[i-1]);
         reverse(r, n);
    for (int i = 0; i < n; i++){
        if (arr[i] >= l[i] && arr[i] >= r[i])cout << "both\n";
        else if (arr[i] >= l[i]) cout << "left\n";
        else if (arr[i] >= r[i])cout << "right\n";
        else cout << "none\n";
    }

    return 0;
}
