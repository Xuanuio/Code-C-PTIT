#include<stdio.h>
#include<math.h>
#include<string.h>

#define ll long long
#define print printf

int main() {
	int n, cnt = 1, h1, h2, c1, c2;
	scanf("%d", &n);
	int a[n][n];
	h1 = 0, h2 = n - 1;
	c1 = 0, c2 = n - 1;
	while(h1 <= h2 && c1 <= c2){
		// Xay dung dong tren cung
		for(int i=c1; i<=c2; i++){
			a[h1][i] = cnt;
			cnt++;
		}
		h1++;
		// Xay dung cot ben fai
		for(int i=h1; i<=h2; i++){
			a[i][c2] = cnt;
			cnt++;
		}
		c2--;
		
		if(c1 <= c2){
			for(int i=c2; i>=c1; i--){
				a[h2][i] = cnt;
				cnt++;
			}
			h2--;
		}
		if(h1 <= h2){
			for(int i=h2; i>=h1; i--){
				a[i][c1] = cnt;
				cnt++;
			}
			c1++;
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			print("%d ", a[i][j]);
		}
		print("\n");
	}
}

