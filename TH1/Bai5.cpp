#include<stdio.h>
#include<math.h>

#define print printf

int rev(int n){
	int ans = 0, r;
	while(n){
		r = n % 10;
		ans = ans * 10 + r;
		n /= 10;
	}
	return ans;
}

int gcd(int a, int b){
	if(b == 0) return a;
	return gcd(b, a % b);
}

int main() {
	int t, n;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		print(gcd(n, rev(n)) == 1 ? "YES\n" : "NO\n");
	}
}

