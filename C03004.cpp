#include<stdio.h>

int gcd(int a, int b){
	if(b == 0) return a;
	return gcd(b, a % b);
}

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d\n", gcd(a, b));
	long long lcm = 1ll * a / (1ll * gcd(a, b)) * b;
	printf("%lld", lcm);
}

