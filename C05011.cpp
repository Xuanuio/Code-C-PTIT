#include<stdio.h>
#include<math.h>
#include<string.h>

#define ll long long
#define print printf

int main() {
	int t, n, m;
	scanf("%d", &t);
	for(int te=1; te<=t; te++){
		scanf("%d%d", &n, &m);
		int a[n][m], c[n][n];
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				scanf("%d", &a[i][j]);
			}
		}
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				c[i][j] = 0;
				for(int k=0; k<m; k++){
					c[i][j] += a[i][k] * a[j][k];
				}
			}
		}
		print("Test %d:\n", te);
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				print("%d ", c[i][j]);
			}
			print("\n");
		}
	}
}

