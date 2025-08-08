#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

#define ll long long
#define print printf

struct Hang{
	int id;
	char ten[100], loai[100];
	double m, b;
};

#define Hang struct Hang

int cmp(const void *a, const void *b){
	Hang *x = (Hang *)a;
	Hang *y = (Hang *)b;
	if(x->b != y->b){
		if(x->b > y->b) return -1;
		else return 1;
	}
	else return x->id - y->id;
}

int main() {
	int n;
	scanf("%d", &n);
	Hang a[n];
	for(int i=0; i<n; i++){
		a[i].id = i + 1;
		getchar();
		gets(a[i].ten);
		gets(a[i].loai);
		scanf("%lf%lf", &a[i].m, &a[i].b);
		a[i].b -= a[i].m;
	}
	qsort(a, n, sizeof(Hang), cmp);
	for(int i=0; i<n; i++){
		print("%d %s %s %.2lf\n", a[i].id, a[i].ten, a[i].loai, a[i].b);
	}
}
