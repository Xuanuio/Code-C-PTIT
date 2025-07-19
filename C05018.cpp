#include<stdio.h>
#include<math.h>
#include<string.h>

#define ll long long
#define print printf

int main() {
	int t, n, cnt, h1, h2, c1, c2;
	scanf("%d", &t);
	for(int k=1; k<=t; k++){
		scanf("%d", &n);
		int a[n][n];
		cnt = n * n;
		h1 = 0, h2 = n - 1;
		c1 = 0, c2 = n - 1;
		while(h1 <= h2 && c1 <= c2){
			// Hang tren
			for(int i=c1; i<=c2; i++){
				a[h1][i] = cnt;
				cnt--;
			}
			h1++;
			// Cot fai
			for(int i=h1; i<=h2; i++){
				a[i][c2] = cnt;
				cnt--;
			}
			c2--;
			
			if(h1 <= h2){
				for(int i=c2; i>=c1; i--){
					a[h2][i] = cnt;
					cnt--;
				}
				h2--;
			}
			if(c1 <= c2){
				for(int i=h2; i>=h1; i--){
					a[i][c1] = cnt;
					cnt--;
				}
				c1++;
			}
		}
		
		print("Test %d:\n", k);
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				print("%d ", a[i][j]);
			}
			print("\n");
		}
	}
}

