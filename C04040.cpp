#include<stdio.h>

#define int long long
#define print printf

main() {
	int t, n;
	scanf("%lld", &t);
	while(t--){
		scanf("%lld", &n);
		int a[n];
		int sum = 0, Max = -1e9 - 7, m=-1e9;
		for(int i=0; i<n; i++) {
			scanf("%lld", &a[i]);
			sum += a[i];
			if(sum > Max) Max = sum;
			if(sum < 0) sum = 0;
			if(a[i] > m) m = a[i];
		}
		if(m < 0) print("%lld\n", m);
		else print("%lld\n", Max);
	}
}
