#include<stdio.h>

#define ll long long
#define print printf

ll fibo[89];

void ktao(){
	fibo[0] = 0;
	fibo[1] = 1;
	for(int i=2; i<89; i++){
		fibo[i] = fibo[i-1] + fibo[i-2];
	}
}

int main() {
	ktao();
	int n, cnt, h1, h2, c1, c2;
	scanf("%d", &n);
	ll a[n][n];
	cnt = 0;
	h1 = 0, h2 = n - 1;
	c1 = 0, c2 = n - 1;
	while(h1 <= h2 && c1 <= c2){
		// Hang tren 
		for(int i=c1; i<=c2; i++){
			a[h1][i] = fibo[cnt++];
		}
		h1++;
		// Cot fai
		for(int i=h1; i<=h2; i++){
			a[i][c2] = fibo[cnt++];
		}
		c2--;
		if(h1 <= h2){
			for(int i=c2; i>=c1; i--){
				a[h2][i] = fibo[cnt++];
			}
			h2--;
		}
		if(c1 <= c2){
			for(int i=h2; i>=h1; i--){
				a[i][c1] = fibo[cnt++];
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

