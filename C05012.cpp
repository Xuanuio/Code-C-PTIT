#include<stdio.h>
#include<math.h>
#include<string.h>

#define ll long long
#define print printf

int main() {
	int t, n;
	scanf("%d", &t);
	for(int te=1; te<=t; te++){
		scanf("%d", &n);
		int a[n][n], c[n][n];
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				if(j <= i){
					a[i][j] = j+1;
				}
				else a[i][j] = 0;
			}
		}
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				c[i][j] = 0;
				for(int k=0; k<n; k++){
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

