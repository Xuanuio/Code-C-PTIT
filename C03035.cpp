#include<stdio.h>

#define print printf

int gcd(int a, int b){
	if(b==0) return a;
	return gcd(b, a % b);
}

int rev(int n){
	int prev = 0;
	while(n){
		prev = prev * 10 + n % 10;
		n /= 10;
	}
	return prev;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		if(gcd(n, rev(n)) == 1) print("YES\n");
		else print("NO\n");
	}
}
