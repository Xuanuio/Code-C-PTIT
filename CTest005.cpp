#include<stdio.h>
#include<math.h>
#include<string.h>

#define ll long long
#define print printf

int main() {
	int n, m, p;
	scanf("%d%d%d", &n, &m, &p);
	int a[n][m], b[m][p], c[n][p];
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			scanf("%d", &a[i][j]);
		}
	}
	for(int i=0; i<m; i++){
		for(int j=0; j<p; j++){
			scanf("%d", &b[i][j]);
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<p; j++){
			c[i][j] = 0;
			for(int k=0; k<m; k++){
				c[i][j] += a[i][k] * b[k][j]; 
			}
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<p; j++){
			print("%d ", c[i][j]);
		}
		print("\n");
	}
}

