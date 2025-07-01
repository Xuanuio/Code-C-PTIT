#include<stdio.h>

#define print printf

int dp[1000006];

void seive(){
	dp[0] = dp[1] = 1;
	for(int i=2; i<=1000; i++){
		if(!dp[i]){
			for(int j=i*i; j<=1000000; j+=i){
				dp[j] = 1;
			}
		}
	}
}

int ck(int n){
	int r;
	while(n){
		r = n % 10;
		n /= 10;
		if(r != 2 && r != 3 && r != 5 && r != 7) return 1;
	}
	return 0;
}

void solve(){
	for(int i=2; i<=1000000; i++){
		if(!dp[i]){
			dp[i] = ck(i);
		}
	}
}

int main(){
	seive();
	solve();
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b;
		scanf("%d%d", &a, &b);
		int sum = b - a + 1;
		for(int i=a; i<=b; i++){
			sum -= dp[i];
		}
		print("%d\n", sum);
	}
}
