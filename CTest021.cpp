#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define ll long long
#define print printf

int pr[10004];
int cnt[10004];

void seive(){
	pr[0] = pr[1] = 1;
	for(int i=0; i<sqrt(10000); i++){
		if(!pr[i]){
			for(int j=i*i; j<10000; j+=i){
				pr[j] = 1;
			}
		}
	}
}

int cmp(const void *a, const void *b){
	int x = *(const int*)a;
	int y = *(const int*)b;
	if(x < y) return -1;
	if(x > y) return 1;
	return 0;
}

int main() {
	seive();
	int t, n;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		int a[n];
		for(int i=0; i<n; i++){
			scanf("%d", &a[i]);
			cnt[a[i]]++;
		}
		qsort(a, n, sizeof(int), cmp);
		for(int i=0; i<n; i++){
			if(!pr[a[i]] && cnt[a[i]]){
				print("%d ", a[i]);
				cnt[a[i]] = 0;
			}
		}
		print("\n");
	}
}

