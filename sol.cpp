#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ar array

typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, k;
	cin >> n >> k;
	char a[n];
	for(int i=0; i<n; ++i)
		cin >> a[i];
	int f[26];
	memset(f, 0, sizeof(f));
	for(int i=0; i<n; ++i)
		f[a[i]-'A']++;
	int ans=INT_MAX;
	for(int i=0; i<k; ++i)
		ans=min(ans, f[i]);
	cout << ans*k << "\n";
}
