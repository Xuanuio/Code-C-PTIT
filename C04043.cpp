#include <stdio.h>
#include <stdlib.h>

#define ll long long
#define print printf

int cmp(const void *a, const void *b) {
	int x = *(const int *)a;
	int y = *(const int *)b;
	if (x < y) return -1;
	if (x > y) return 1;
	return 0;
}

int bin_search(ll b[], int n, ll x) {
	int l = 0, r = n - 1;
	while (l <= r) {
		int m = (l + r) / 2;
		if (b[m] == x) return 1;
		else if (b[m] > x) r = m - 1;
		else l = m + 1;
	}
	return 0;
}

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		int a[n];
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
		}
		qsort(a, n, sizeof(int), cmp);

		ll b[n];
		for (int i = 0; i < n; i++) {
			b[i] = 1LL * a[i] * a[i];
		}

		int ok = 0;
		for (int i = 0; i < n - 2 && !ok; i++) {
			if (bin_search(b, n, b[i] + b[i+1])) {
				ok = 1;
			}
		}

		print(ok ? "YES\n" : "NO\n");
	}
}

