#include<stdio.h>
#include<math.h>
#include<string.h>

#define ll long long
#define print printf

int pr[10004];
int cnt[10004];

void seive(){
	pr[0] = pr[1] = 1;
	for(int i=2; i<=sqrt(10000); i++){
		if(!pr[i]){
			for(int j=i*i; j<=10000; j+=i){
				pr[j] = 1;
			}
		}
	}
}

int main() {
	seive();
	int t, n;
	scanf("%d", &t);
	for(int k = 1; k <= t; k++){
		scanf("%d", &n);
		int a[n];
		for(int i=0; i<n; i++){
			scanf("%d", &a[i]);
			cnt[a[i]]++;
		}
		print("Test %d:\n", k);
		for(int i=2; i<=10000; i++){
			if(!pr[i] && cnt[i]){
				print("%d xuat hien %d lan\n", i, cnt[i]);
				cnt[i] = 0;
			}
		}
	}
}
