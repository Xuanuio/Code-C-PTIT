#include<stdio.h>
#include<math.h>
#include<string.h>

#define ll long long
#define print printf

int main() {
	int n;
	scanf("%d", &n);
	int a[n][n];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(j == i || j == n - i - 1) print("%d ", a[i][n-j-1]);
			else print("%d ", a[i][j]);
		}
		print("\n");
	}
}

