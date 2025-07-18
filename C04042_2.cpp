#include<stdio.h>
#include<stdlib.h>

#define print printf

int c[100005];

int cmp(const void *a, const void *b){
	int x = *(const int*)a;
	int y = *(const int*)b;
	if(x < y) return -1;
	if(x > y) return 1;
	return 0;
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
		int m = 0, ok = 1;
		for(int i=1; i<n; i++){
			if(b[i] == b[i-1]){
				c[m++] = b[i];
			}
		}
		if(m == 0){
			print("NO\n");
		}
		else{
			for(int i=0; i<n; i++){
				for(int j=0; j<m; j++){
					if(c[j] == a[i]){
						print("%d\n", a[i]); 
						ok = 0;
						break;
					}
				}
				if(!ok) break;
			}
		}
	}
}

