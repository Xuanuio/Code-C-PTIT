#include<stdio.h>

#define print printf

int main(){
	int n, cnt = 1;
	scanf("%d", &n);
	int a[15][15];
	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			if(i % 2) a[i][j] = cnt;
			else a[i][i-j+1] = cnt;
			cnt++;
		}
	}
	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			print("%d ", a[i][j]);
		}
		print("\n");
	}
}
