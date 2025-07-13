#include<stdio.h>
#include<stdlib.h>

#define print printf

int sum(int n){
	int ans = 0, r;
	while(n){
		r = n % 10;
		ans += r;
		n /= 10;
	}
	return ans;
}

int cmp(const void *a, const void *b){
	int x = *(int*) a;
	int y = *(int*) b;
	
	int sx = sum(x);
	int sy = sum(y);
	
	if(sx == sy) return x - y;
	else return sx - sy;
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
		for(int i=0; i<n; i++){
			print("%d ", a[i]);
		}
		print("\n");
	}
}

