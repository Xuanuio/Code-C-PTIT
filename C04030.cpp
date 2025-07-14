#include<stdio.h>
#include<stdlib.h>

#define print printf

int cmp1(const void *a, const void *b){
	int x = *(const int*)a;
	int y = *(const int*)b;
	if(x < y) return -1;
	if(x > y) return 1;
	return 0;
}

int cmp2(const void *a, const void *b){
	int x = *(const int*)a;
	int y = *(const int*)b;
	if(x > y) return -1;
	if(x < y) return 1;
	return 0;
}

int main() {
	int t, n;
	scanf("%d", &t);
	for(int k=1; k<=t; k++){
		scanf("%d", &n);
		int a[n], b[n];
		for(int i=0; i<n; i++) scanf("%d", &a[i]);
		for(int i=0; i<n; i++) scanf("%d", &b[i]);
		qsort(a, n, sizeof(int), cmp1);
		qsort(b, n, sizeof(int), cmp2);
		print("Test %d:\n", k);
		for(int i=0; i<n; i++){
			print("%d ", a[i]);
			print("%d ", b[i]);
		}
		print("\n");
	}
}

