#include<stdio.h>

#define print printf
#define ll long long

ll a[12];

void ktao(){
	a[0] = a[1] = 1;
	for(ll i=2; i<11; i++){
		a[i] = a[i-1] * i;
	}
}

ll nCk(ll n, ll k){
	return a[n] / (a[k] * a[n-k]);
}

int main(){
	ll n;
	scanf("%lld", &n);
	ktao();
	for(ll i=0; i<n; i++){
		for(ll j=0; j<=i; j++){
			print("%lld ", nCk(i, j));
		}
		print("\n");
	}
}
