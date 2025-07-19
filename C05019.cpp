#include<stdio.h>
#include<math.h>

#define print printf

int pr[404];

int nt(int n){
	for(int i=2; i<=sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return n > 1;
}

// So nguyen to thu 404 la: 2777
void ktao(){
	pr[0] = 2;
	int j = 1;
	for(int i=3; i<=2777; i+=2){
		if(nt(i)){
			pr[j] = i;
			j++;
		} 
	}
}

int main() {
	ktao();
	int t, n, cnt, h1, h2, c1, c2;
	scanf("%d", &t);
	for(int k=1; k<=t; k++){
		scanf("%d", &n);
		int a[n][n];
		h1 = 0, h2 = n - 1;
		c1 = 0, c2 = n - 1;
		cnt = 0;
		while(h1 <= h2 && c1 <= c2){
			// Hang tren
			for(int i=c1; i<=c2; i++){
				a[h1][i] = pr[cnt];
				cnt++;
			}
			h1++;
			// Cot fai
			for(int i=h1; i<=h2; i++){
				a[i][c2] = pr[cnt];
				cnt++;
			}
			c2--;
			
			if(h1 <= h2){
				for(int i=c2; i>=c1; i--){
					a[h2][i] = pr[cnt];
					cnt++;
				}
				h2--;
			}
			if(c1 <= c2){
				for(int i=h2; i>=h1; i--){
					a[i][c1] = pr[cnt];
					cnt++;
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

