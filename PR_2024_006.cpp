#include<stdio.h>
#include<stdlib.h>

#define ll long long
#define print printf

int cmp(const void *a, const void *b){
	int x = *(const int*)a;
	int y = *(const int*)b;
	if(x < y) return -1;
	if(x > y) return 1;
	return 0;
}

int main() {
	int t, n, m, x;
	scanf("%d", &t);
	while(t--){
		scanf("%d%d", &n, &m);
		char c;
		scanf(" %c", &c);
		int a[n], b[n + m];
		if(c == 'F'){
			for(int i=0; i<n; i++){
				scanf("%d", &x);
				print("%d ", x);
			}
			for(int i=0; i<m; i++){
				scanf("%d", &x);
				print("%d ", x);
			}
		}
		else if(c == 'A'){
			for(int i=0; i<n; i++){
				scanf("%d", &a[i]);
			}
			for(int i=0; i<m; i++){
				scanf("%d", &x);
				print("%d ", x);
			}
			for(int i=0; i<n; i++){
				print("%d ", a[i]);
			}
		}
		else{
			n += m;
			for(int i=0; i<n; i++) scanf("%d", &b[i]);
			qsort(b, n, sizeof(int), cmp);
			if(c == 'T'){
				for(int i=0; i<n; i++){
					print("%d ", b[i]);
				}
			}
			else {
				for(int i=n-1; i>=0; i--){
					print("%d ", b[i]);
				}
			}
		}
		print("\n");
	}
}

