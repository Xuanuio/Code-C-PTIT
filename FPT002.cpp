#include<stdio.h>
#include<math.h>
#include<string.h>

#define ll long long
#define print printf

int main() {
	int n, m, p, q;
	scanf("%d%d%d%d", &m, &n, &p, &q);
	int a[m][n], b[n][p], c[p][q], d[m][q], ab[m][p];
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<p; j++){
			scanf("%d", &b[i][j]);
		}
	}
	for(int i=0; i<p; i++){
		for(int j=0; j<q; j++){
			scanf("%d", &c[i][j]);
		}
	}
	for(int i=0; i<m; i++){
		for(int j=0; j<p; j++){
			ab[i][j] = 0;
			for(int k=0; k<n; k++){
				ab[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	for(int i=0; i<m; i++){
		for(int j=0; j<q; j++){
			d[i][j] = 0;
			for(int k=0; k<p; k++){
				d[i][j] += ab[i][k] * c[k][j];
			}
		}
	}
	for(int i=0; i<m; i++){
		for(int j=0; j<q; j++){
			print("%d ", d[i][j]);
		}
		print("\n");
	}
}

