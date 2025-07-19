#include<stdio.h>
#include<math.h>
#include<string.h>

#define ll long long
#define print printf

int main() {
	int n, m, k, x, Min, Max;
	scanf("%d%d%d", &n, &m, &k);
	int a[n+1];
	for(int i=1; i<=n; i++) a[i] = 0;
	for(int i=0; i<m; i++){
		scanf("%d", &x);
		Min = fmax(x - k, 1);
		Max = fmin(x + k, n);
		for(int j=Min; j<=Max; j++){
			a[j] = 1;
		}
	}
	int ans = 0, cnt;
	for(int i=1; i<=n; i++){
		if(!a[i]){
			cnt = 0;
			for(int j=i; j<=n; j++){
				if(a[j]) break;
				cnt++;
			}
			ans += (cnt / (2 * k + 1) + (cnt % (2 * k + 1) != 0));
			i += cnt - 1;
		}
	}
	print("%d", ans);
}

