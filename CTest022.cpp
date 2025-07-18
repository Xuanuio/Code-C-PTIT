#include<stdio.h>
#include<string.h>

#define ll long long
#define print printf

ll gcd(ll a, ll b){
	if(b == 0) return a;
	return gcd(b, a % b);
}

void solve(char s[]){
	int n = strlen(s);
	if(n % 2){
		print("INVALID\n");
		return;
	}
	ll l = 0, r = 0, ans;
	for(int i=0; i<n/2; i++){
		l = l * 10 + (s[i] - '0');
	}
	for(int i=n/2; i<n; i++){
		r = r * 10 + (s[i] - '0');
	}
	ans = l * r / gcd(l, r);
	print("%lld\n", ans);
}

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
		char s[20];
		scanf("%s", &s);
		solve(s);
	}
}
