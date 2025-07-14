#include<stdio.h>
#include<stdlib.h>

#define print printf

int cmp(const void *a, const void *b){
	int x = *(const int*)a;
	int y = *(const int*)b;
	if(x < y) return -1;
	if(x > y) return 1;
	return 0;
}

int main() {
	int n, i, jc=0, jl=0, x;
	scanf("%d", &n);
	int c[n], l[n];
	for(i=0; i<n; i++){
		scanf("%d", &x);
		if(x % 2){
			l[jl] = x;
			jl++;
		}
		else {
			c[jc] = x;
			jc++;
		}
	}
	qsort(c, jc, sizeof(int), cmp);
	qsort(l, jl, sizeof(int), cmp);
	for(int i=0; i<jc; i++){
		print("%d ", c[i]);
	}
	for(int i=0; i<jl; i++){
		print("%d ", l[i]);
	}
}

