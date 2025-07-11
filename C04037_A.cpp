#include<stdio.h>
#include<math.h>
#include<string.h>

#define ll long long
#define print printf

int cnt[1000006];
int ck[1000006];

int main() {
	int n, dem = 0;
	scanf("%d", &n);
	int a[n];
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
		cnt[a[i]]++;
	}
	
	for(int i=0; i<n ;i++){
		if(cnt[a[i]] > 1 && !ck[a[i]]){
			dem++;
			ck[a[i]] = 1;
		}
	}
	
	print("%d\n", dem);
	for(int i=0; i<n; i++){
//		print("%d  ", cnt[a[i]]);
		if(cnt[a[i]] > 1){
			print("%d ", a[i]);
			cnt[a[i]] = 0;
		}
	}
}

