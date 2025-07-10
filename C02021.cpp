#include<stdio.h>

#define print printf

int main(){
	int n, k, m;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		k = i;
		m = n-1;
		for(int j=1; j<=n; j++){
			if(j <= i){
				print("%d ", k);
				k += m;
				m--;
			}
		}
		print("\n");
	}
}
