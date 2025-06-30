#include<stdio.h>

#define ll long long

ll fb[33];

int main(){
	ll n;
	scanf("%lld", &n);
	fb[0] = 0, fb[1] = 1;
	for(int i=2; i<33; i++){
		fb[i] = fb[i-1] + fb[i-2];
	}
	for(int i=0; i<n; i++){
		printf("%lld ", fb[i]);
	}
}

