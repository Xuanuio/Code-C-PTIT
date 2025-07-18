#include<stdio.h>
#include<stdlib.h>

#define print printf

int cmp(const void *a, const void *b){
	int x = *(const int*)a;
	int y = *(const int*)b;
	if(x < y) return -1;
	if(x > y) return 1;
	return 0;
}

int bin_search(int b[], int n, int x){
	int l = 0, r = n - 1;
	while(l <= r){
		int m = (l + r) / 2;
		if(b[m] == x) return m;
		else if(b[m] > x) r = m - 1;
		else l = m + 1;
	}
	return -1;
}

int main() {
	int t, n;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		int a[n], b[n];
		for(int i=0; i<n; i++){
			scanf("%d", &a[i]);
			b[i] = a[i];
		}
		qsort(b, n, sizeof(int), cmp);
		int ok = 0;
		for(int i=0; i<n; i++){
			int idx = bin_search(b, n, a[i]);
			if(idx == 0){
				if(b[1] == a[i]){
					ok = 1;
					print("%d\n", a[i]);
					break;
				}
			}
			else if(idx == n - 1){
				if(b[n-2] == a[i]){
					ok = 1;
					print("%d\n", a[i]);
					break;
				}
			}
			else if(idx != -1){
				if(b[idx + 1] == b[idx] || b[idx - 1] == b[idx]){
					ok = 1;
					print("%d\n", a[i]);
					break;
				}
			}
		}
		if(!ok) print("NO\n");
	}
}

