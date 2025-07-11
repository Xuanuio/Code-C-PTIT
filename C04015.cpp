#include<stdio.h>
#include<math.h>
#include<string.h>

#define ll long long
#define print printf

int cnt[100005];

int main() {
	int t, n;
	scanf("%d", &t);
	for(int k=1; k <= t; k++){
		scanf("%d", &n);
		int a[n];
		for(int i=0; i<n; i++){
			scanf("%d", &a[i]);
			cnt[a[i]]++;
		}
		
		print("Test %d:\n", k);
		for(int i=0; i<n; i++){
			if(cnt[a[i]]){
				print("%d xuat hien %d lan\n", a[i], cnt[a[i]]);
				cnt[a[i]] = 0;
			}
		}
	}
}

