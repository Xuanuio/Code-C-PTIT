#include<stdio.h>
#include<math.h>
#include<string.h>

#define ll long long
#define print printf

int cnt[1000006];

int main() {
	int k, n, ans = 0;
	scanf("%d", &n);
	int a[n];
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
		cnt[a[i]]++;
	}
	for(int i=0; i<n; i++){
		if(cnt[a[i]] == 1) ans++;
	}
	print("%d\n", ans);
	for(int i=0; i<n; i++){
		if(cnt[a[i]] == 1) print("%d ", a[i]);
	}
}

