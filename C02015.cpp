#include<stdio.h>

#define print printf

int main(){
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		for(int j=1; j<=2*n; j++){
			if(j < 2 * i) print("%d", j);
		}
		print("\n");
	}
}
