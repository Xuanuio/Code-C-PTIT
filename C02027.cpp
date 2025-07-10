#include<stdio.h>

#define print printf

int main(){
	int n, k;
	scanf("%d", &n);
	char s[22][22], c = 'a';
	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			if(i % 2) s[i][j] = c;
			else s[i][i-j+1] = c;
			c++;
		}
	}
	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			print("%c ", s[i][j]);
		}
		print("\n");
	}
}
