#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

#define ll long long
#define print printf

struct t{
	int h, m, s;
};

void swap(struct t *a, struct t *b){
	struct t tmp = *a;
	*a = *b;
	*b = tmp;
}

int cmp(struct t a, struct t b){
	if(a.h != b.h) return a.h - b.h;
	if(a.m != b.m) return a.m - b.m;
	return a.s - b.s;
}

int main() {
	int n;
	scanf("%d", &n);
	struct t a[n];
	for(int i=0; i<n; i++){
		scanf("%d%d%d", &a[i].h, &a[i].m, &a[i].s);
	}
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(cmp(a[i], a[j]) > 0) swap(&a[i], &a[j]);
		}
	}
	for(int i=0; i<n; i++){
		print("%d %d %d\n", a[i].h, a[i].m, a[i].s);
	}
}

