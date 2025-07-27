#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

#define ll long long
#define print printf

struct bi{
	char code[20];
	char name[102];
	ll q, p, d, t;
};

int cmp(const void *a, const void *b){
	struct bi *x = (struct bi *)a;
	struct bi *y = (struct bi *)b;
	if(x->t < y->t) return 1;
	else if(x->t > y->t) return -1;
	return 0;
}

int main() {
	int n;
	scanf("%d", &n);
	struct bi b[n];
	getchar();
	for(int i=0; i<n; i++){
		gets(b[i].code);
		gets(b[i].name);
		scanf("%lld %lld %lld", &b[i].q, &b[i].p, &b[i].d);
		getchar();
		b[i].t = b[i].q * b[i].p - b[i].d;
	}
	qsort(b, n, sizeof(struct bi), cmp);
	for(int i=0; i<n; i++){
		print("%s %s %lld %lld %lld %lld\n", b[i].code, b[i].name, b[i].q, b[i].p, b[i].d, b[i].t);
	}
}
