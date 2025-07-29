#include<stdio.h>

#define ll long long
#define print printf

int main() {
	ll x, Max = -1;
	while(scanf("%lld", &x) != EOF){
		if(x > Max) Max = x;
	}
	print("%lld", Max);
}
