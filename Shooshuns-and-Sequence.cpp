#include<iostream>
using namespace std;

int main()
{	int n, k, a[100100], x, ans = 0;
	cin >> n >> k;
	for (int i = 1; i <= n; i++){
		cin >> a[i];
		if (i == k)x = a[i];
		if ((i>k) && a[i] != x)ans = -1;
	}
	for (int i = k - 1; i > 0 && (ans>-1); i--)
	if (a[i] != x){	ans = i; break;}
	cout << ans << endl;
	return 0;
}
