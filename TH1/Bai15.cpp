#include<stdio.h>
#include<stdlib.h>

#define print printf

int cmp(const void *a, const void *b){
	int *x = (int*) a;
	int *y = (int*) b;
	return *x - *y;
}

int main(){
	int t, n, m, k;
	scanf("%d", &t);
	while(t--){
		scanf("%d%d%d", &n, &m, &k);
		int a[n][m], b[n];
		k--;
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				scanf("%d", &a[i][j]);
				if(j == k) b[i] = a[i][j];
			}
		}
		qsort(b, n, sizeof(int), cmp);
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				if(j == k) print("%d ", b[i]);
				else print("%d ", a[i][j]);
			}
			print("\n");
		}
	}
}

