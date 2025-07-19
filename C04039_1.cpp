#include<stdio.h>
#include<math.h>

#define ll long long
#define print printf

ll a[1000006];

void solve(){
	a[0] = 0;
	ll cnt = 0;
	for(int i=1; i<=1e6; i++){
		if(i % 2) cnt++;
		a[i] = a[i-1] + cnt;
	}
}

int upper_bound(ll x){
	int l = 0, r = 1e6, res = 0;
	while(l <= r){
		int m = (l + r) / 2;
		if(a[m] >= x) {
			res = m;
			r = m - 1;
		}
		else l = m + 1;
	}
	return res;
}

int main() {
	solve();
	ll x, y;
	while(scanf("%lld%lld", &x, &y) != EOF){
		int idx = upper_bound(1ll * fabs(y - x));
		print("%d\n", idx);
	}
}
