#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

#define ll long long
#define print printf

struct sv{
	int ma;
	char ten[100];
	char ns[100];
	double t, l, h;
};

#define sv struct sv

int main() {
	int n;
	scanf("%d", &n);
	sv a[n];
	double Max = 0.0;
	for(int i=0; i<n; i++){
		a[i].ma = i+1;
		getchar();
		gets(a[i].ten);
		gets(a[i].ns);
		scanf("%lf%lf%lf", &a[i].t, &a[i].l, &a[i].h);
		Max = fmax(a[i].t + a[i].l + a[i].h, Max);
	}
	for(int i=0; i<n; i++){
		if(a[i].t + a[i].l + a[i].h == Max){
			print("%d %s %s %.1lf\n", a[i].ma, a[i].ten, a[i].ns, a[i].t + a[i].l + a[i].h);
		}
	}
}
