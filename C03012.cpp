#include<stdio.h>

#define ll long long

ll fb[89];

int main(){
	ll n;
	scanf("%lld", &n);
	fb[0] = fb[1] = 1;
	for(int i=2; i<89; i++){
		fb[i] = fb[i-1] + fb[i-2];
	}
	int ck = 0;
	for(int i=0; i<89; i++){
		if(n == fb[i]) ck = 1;
	}
	printf("%d", ck);
}

