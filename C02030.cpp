#include<stdio.h>

#define print printf

int main(){
	int n, k;
	scanf("%d", &n);
	char a = 'A', c;
	for(int i=1; i <= n; i++){
		k = -1;
		for(int j=1; j < 2*i; j++){
			print("%c", a+k);
			if(j < i) k += 2;
			else k -= 2;
		}
		print("\n");
	}
}
