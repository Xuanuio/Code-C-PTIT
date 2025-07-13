#include<stdio.h>
#include<stdlib.h>

#define print printf

int cmp(const void *a, const void *b){
	int *x = (int*) a;
	int *y = (int*) b;
	return *x - *y;
}

int cnt[1003];

int main() {
	int n, m;
	scanf("%d%d", &n, &m);
	n += m;
	int a[n];
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
		cnt[a[i]]++;
	}
	qsort(a, n, sizeof(int), cmp);
	for(int i=0; i<n; i++){
		if(cnt[a[i]]){
			print("%d ", a[i]);
			cnt[a[i]] = 0;
		}
	}
}

