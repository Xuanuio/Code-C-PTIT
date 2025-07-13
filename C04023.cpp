#include<stdio.h>
#include<stdlib.h>

#define ll long long
#define print printf

int cmp(const void *a, const void *b){
	int x = *(const int*)a;
	int y = *(const int*)b;
	if(x < y) return -1;
	if(x > y) return 1;
	return 0;
}

int main() {
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0; i<n; i++) scanf("%d", &a[i]);
	qsort(a, n, sizeof(int), cmp);
	for(int i=0; i<n; i++){
		print("%d ", a[i]);
	}
}
