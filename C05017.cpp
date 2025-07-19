#include<stdio.h>

#define print printf

int main() {
	int t, n, m, h1, h2, c1, c2;
	scanf("%d", &t);
	while(t--){
		scanf("%d%d", &n, &m);
		int a[n][m];
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				scanf("%d", &a[i][j]);
			}
		}
		h1 = 0, h2 = n - 1;
		c1 = 0, c2 = m - 1;
		while(h1 <= h2 && c1 <= c2){
			//Hang tren
			for(int i=c1; i<=c2; i++){
				print("%d ", a[h1][i]);
			}
			h1++;
			//Cot fai
			for(int i=h1; i<=h2; i++){
				print("%d ", a[i][c2]);
			}
			c2--;
			
			if(h1 <= h2){
				for(int i=c2; i>=c1; i--){
					print("%d ", a[h2][i]);
				}
				h2--;
			}
			if(c1 <= c2){
				for(int i=h2; i>=h1; i--){
					print("%d ", a[i][c1]);
				}
				c1++;
			}
		}
		print("\n");
	}
}
