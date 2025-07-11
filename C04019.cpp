#include<stdio.h>
#include<math.h>
#include<string.h>

#define ll long long
#define print printf

int cnt[30004];

int main() {
	int t, n;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		int a[n], ck = 0;
		for(int i=0; i<n; i++){
			scanf("%d", &a[i]);
			cnt[a[i]]++;
			ck = fmax(cnt[a[i]], ck);
		}
		for(int i=0; i<n; i++){
			if(cnt[a[i]] == ck){
				print("%d ", a[i]);
			}
			cnt[a[i]] = 0;
		}
		print("\n");
	}
}

