#include<stdio.h>

#define print printf

int main() {
	int n, m, Min, Max, k, ok = 1;
	scanf("%d%d", &n, &m);
	int a[n][m];
	Min = 1e9 + 7;
	Max = -1e9;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			scanf("%d", &a[i][j]);
			if(a[i][j] > Max) Max = a[i][j];
			if(a[i][j] < Min) Min = a[i][j];
		}
	}
	k = Max - Min;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(a[i][j] == k){
				ok = 0;
			}
		}
	}
	if(ok) print("NOT FOUND");
	else{
		print("%d\n", k);
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				if(a[i][j] == k) print("Vi tri [%d][%d]\n", i, j);
			}
		}
	}
}

