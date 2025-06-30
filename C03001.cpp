#include<stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, sum=0;
		scanf("%d", &n);
		while(n){
			sum += n % 10;
			n /= 10;
		}
		printf(sum % 10 ? "NO\n" : "YES\n");
	}
}

