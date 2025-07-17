#include<stdio.h>
#include<math.h>
#include<string.h>

#define ll long long
#define print printf

int a[1003];
int b[1003];

int main() {
	int n, m, x;
	scanf("%d%d", &n, &m);
	for(int i=0; i<n; i++){
		scanf("%d", &x);
		a[x] = 1;
	}
	for(int i=0; i<m; i++){
		scanf("%d", &x);
		b[x] = 1;
	}
	for(int i=1; i<1000; i++){
		if(a[i] && b[i]) print("%d ", i);
	}
	print("\n");
	for(int i=1; i<1000; i++){
		if(a[i] && !b[i]) print("%d ", i);
	}
	print("\n");
	for(int i=1; i<1000; i++){
		if(b[i] && !a[i]) print("%d ", i);
	}
}

