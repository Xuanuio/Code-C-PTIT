#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define ll long long
#define print printf

int cmp(const void *a, const void *b){
	int x = *(const int *)a;
	int y = *(const int *)b;
	if(x < y) return -1;
	if(x > y) return 1;
	return 0;
}

int main() {
	int t, n;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		int a[n];
		for(int i=0; i<n; i++){
			scanf("%d", &a[i]);
		}
		qsort(a, n, sizeof(int), cmp);
		int Min = 1e9+7, cnt = 0, kc;
		for(int i=0; i<n; i++){
			if(i == 0) kc = a[i+1] - a[i];
			else if(i == n- 1) kc = a[i] - a[i-1];
			else kc = fmin(a[i] - a[i-1], a[i+1] - a[i]);
			Min = fmin(Min, kc);
		}
		for(int i=1; i<n; i++){
			kc = a[i] - a[i-1];
			if(kc == Min) cnt++;
		}
		print("%d %d\n", Min, cnt);
	}
}
