#include<stdio.h>

#define print printf
#define int long long

int ck1(int n){
	int rev = 0, r, tmp = n;
	while(n){
		r = n % 10;
		rev = rev * 10 + r;
		n /= 10;
	}
	return rev == tmp;
}

int ck2(int n){
	int sum=0, r;
	while(n){
		r = n % 10;
		if(r % 2 == 0) return 0;
		sum += r;
		n /= 10;
	}
	return sum % 2;
}

main(){
	int t;
	scanf("%lld", &t);
	while(t--){
		int n;
		scanf("%lld", &n);
		if(ck1(n) && ck2(n)) print("YES\n");
		else print("NO\n");
	}
}
