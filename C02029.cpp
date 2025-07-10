#include<stdio.h>

#define print printf

int main(){
	int n, k, m;
	scanf("%d", &n);
	char a = 'A', c;
	a--;
	for(int i=1; i<=n; i++){
		k = i;
		m = n - 1;
		for(int j=1; j<=i; j++){
			c = a + k;
			print("%c ", c);
			k += m;
			m--;
		}
		print("\n");
	}
}
