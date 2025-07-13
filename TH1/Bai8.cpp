#include<stdio.h>

#define print printf

int solve(int n){
	int cnt = 0, k = 2;
	while((k * (k - 1) / 2) < n){
		if ((n - (k * (k - 1) / 2)) % k == 0) cnt++;
        k++;
	}
	return cnt;
}

int main() {
	int t, n;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		print("%d\n", solve(n));
	}
}