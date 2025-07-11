#include<stdio.h>
#include<math.h>
#include<string.h>

#define ll long long
#define print printf

int cnt[1000006];

int main() {
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
		if(!cnt[a[i]]) print("%d ", a[i]);
		cnt[a[i]]++;
	}
}

