#include<stdio.h>

#define print printf

int a[1003];
int b[1003];

int main() {
	int n, m, x;
	scanf("%d%d", &n, &m);
	for(int i=0; i<n; i++){
		scanf("%d", &x);
		a[x]++;
	}
	for(int i=0; i<m; i++){
		scanf("%d", &x);
		b[x]++;
	}
	for(int i=1; i<1000; i++){
		if(a[i] || b[i]) print("%d ", i);
	}
}

