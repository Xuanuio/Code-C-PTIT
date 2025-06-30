#include<stdio.h>
#include<string.h>
#include<math.h>

int dp[1000006];

void seive(){
	dp[0] = dp[1] = 1;
	for(int i=2; i<=sqrt(1000000); i++){
		if(!dp[i]){
			for(int j=i*i; j<=1000000; j+=i){
				dp[j] = 1;
			}
		}
	}
}

int ck(int n){
	int tmp=n, prev=0, r;
	while(n){
		r = n % 10;
		n /= 10;
		prev = prev * 10 + r;
	}
	if(tmp == prev) return 0;
	return 1;
}

void solve(){
	for(int i = 10; i<=1000000; i++){
		if(!dp[i]){
			dp[i] = ck(i);
		}
	}
}

int main(){
	int t;
	scanf("%d", &t);
	seive();
	solve();
	while(t--){
		int a, b, cnt=0;
		scanf("%d%d", &a, &b);
		for(int i=a; i<=b; i++){
			if(cnt > 0 && cnt % 10 == 0) cnt = 0, printf("\n");
			if(!dp[i]){
				printf("%d ", i);
				cnt++;
			}
		}
		printf("\n\n");
	}
}
