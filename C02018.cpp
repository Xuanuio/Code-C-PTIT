#include<stdio.h>

#define print printf

int main(){
	int n, k, m;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		m = n-i;
		while(m-->0){
			print("~");
		}
		k = -1;
		for(int j=1; j<=2*n; j++){
			if(j <= i) k += 2;
			else k -= 2;
			if(j < 2 * i) print("%d", k);
		}
		print("\n");
	}
}
