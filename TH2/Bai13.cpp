#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

#define ll long long
#define print printf

struct p{
	char name[20];
	int d, m, y;
};


int cmp(struct p a, struct p b){
	if(a.y != b.y) return a.y > b.y;
	if(a.m != b.m) return a.m > b.m;
	return a.d > b.d;
}

int main() {
	int n;
	scanf("%d", &n);
	struct p a[n];
	for(int i=0; i<n; i++){
		scanf("%s %d/%d/%d", a[i].name, &a[i].d, &a[i].m, &a[i].y);
	}
	int Min = 0, Max = 0;
	for(int i=1; i<n; i++){
		if(cmp(a[i], a[Min])) Min = i;
		if(cmp(a[Max], a[i])) Max = i;
	}
	print("%s\n", a[Min].name);
	print("%s", a[Max].name);
}
