#include<stdio.h>

#define print printf

int main(){
	int n, k;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		k = i % 2;
		if(k) k-= 2;
		for(int j=1; j<=n; j++){
			if(j <= i) print("%d", k + 2 * j);
		}
		print("\n");
	}
}
