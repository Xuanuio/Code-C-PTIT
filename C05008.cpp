#include<stdio.h>
#include<math.h>
#include<string.h>

#define ll long long
#define print printf

int main() {
	int t, n, m, h, c, sum, Max;
	scanf("%d", &t);
	for(int k=1; k<=t; k++){
		scanf("%d%d", &n, &m);
		int a[n+1][m+1];
		Max = -1;
		for(int i=0; i<n; i++){
			sum = 0;
			for(int j=0; j<m; j++){
				scanf("%d", &a[i][j]);
				sum += a[i][j];
			}
			a[i][m] = sum;
			if(sum > Max){
				Max = sum;
				h = i;
			}
		}
		Max = -1;
		for(int j=0; j<m; j++){
			sum = 0;
			for(int i=0; i<n; i++){
				if(i != h) sum += a[i][j];
			}
			a[n][j] = sum;
			if(sum > Max){
				Max = sum;
				c = j;
			}
		}
		print("Test %d:\n", k);
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				if(i != h && j != c) print("%d ", a[i][j]);
			}
			print("\n");
		}
	}
}

