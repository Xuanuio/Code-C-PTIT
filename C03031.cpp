#include<stdio.h>

#define print printf

int gcd(int a, int b){
	if(b==0) return a;
	return gcd(b, a%b);
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b, c, d;
		scanf("%d%d%d%d", &a, &b, &c, &d);
		print(gcd(a, b) == gcd(c, d) ? "YES\n" : "NO\n");
	}
}
