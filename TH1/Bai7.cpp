#include<stdio.h>

#define ll long long
#define print printf

int main() {
	ll n;
	scanf("%lld", &n);
	int r, cnt = 0;
	while(n){
		r = n % 10;
		if(r == 4 || r == 7) cnt++;
		n /= 10;
	}
	if(cnt == 4 || cnt == 7) print("YES");
	else print("NO");
}

