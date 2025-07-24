#include<stdio.h>

#define print printf

int sg(int n){
	int r = -1;
	while(n){
		if(r >= n % 10) return 0;
		r = n % 10;
		n /= 10;
	}
	return 1;
}

int main() {
	int t, a, b, cnt;
	scanf("%d", &t);
	while(t--){
		scanf("%d%d", &a, &b);
		cnt = 0;
		for(int i=a; i<=b; i++){
			if(sg(i)) cnt++;
		}
		print("%d\n", cnt);
	}
}
