#include<stdio.h>
#include<math.h>
#include<string.h>

#define ll long long
#define print printf

int main() {
	int t, n, m;
	scanf("%d", &t);
	for(int k=1; k<=t; k++){
		scanf("%d%d", &n, &m);
		int a[n][m];
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				scanf("%d", &a[i][j]);
			}
		}
		print("Test %d:\n", k);
		for(int i=1; i<n; i++){
			for(int j=1; j<m; j++){
				print("%d ", a[i][j]);
			}
			print("\n");
		}
	}
}

