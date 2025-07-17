#include<stdio.h>
#include<math.h>
#include<string.h>

#define ll long long
#define print printf

int main() {
	int n, m, l, r;
	scanf("%d%d", &n, &m);
	int a[n+1][m+1];
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			scanf("%d", &a[i][j]);
		}
	}
	scanf("%d%d", &l, &r);
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			if(i == l) print("%d ", a[r][j]);
			else if(i == r) print("%d ", a[l][j]);
			else print("%d ", a[i][j]);
		}
		print("\n");
	}
}

