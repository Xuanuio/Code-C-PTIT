#include<stdio.h>

#define print printf

int tn(int n){
	int tmp = n, rev = 0;
	while(n){
		rev = rev * 10 + n % 10;
		n /= 10;
	}
	return rev == tmp;
}

int sum(int n){
	int s = 0, r;
	while(n){
		r = n % 10;
		if(r == 4) return 0;
		s += r;
		n /= 10;
	}
	return (s % 10 == 0);
}

int main() {
	int t, n, start, end;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		start = 1;
		for(int i=1; i<n; i++) start *= 10;
		end = start * 10 - 1;
		for(int i=start; i<=end; i++){
			if(tn(i) && sum(i)) print("%d ", i);
		}
		print("\n");
	}
}
