#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

#define ll long long
#define print printf

struct sv{
	int id;
	char ten[100], ns[100];
	double t, l, h;
};

#define sv struct sv

int cmp(const void *a, const void *b){
	sv *x = (sv*)a;
	sv *y = (sv*)b;
	if(x->t != y->t){
		if(x->t > y->t) return -1;
		else return 1;
	}
	else return x->id - y->id;
}

int main() {
	int n;
	scanf("%d", &n);
	sv a[1000];
	for(int i=0; i<n; i++){
		a[i].id = i+1;
		getchar();
		gets(a[i].ten);
		gets(a[i].ns);
		scanf("%lf%lf%lf", &a[i].t, &a[i].l, &a[i].h);
		a[i].t += a[i].l + a[i].h;
	}
	qsort(a, n, sizeof(sv), cmp);
	for(int i=0; i<n; i++){
		print("%d %s %s %.1lf\n", a[i].id, a[i].ten, a[i].ns, a[i].t);
	}
}
