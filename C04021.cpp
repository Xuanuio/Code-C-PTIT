#include<stdio.h>
#include<math.h>
#include<string.h>

#define ll long long
#define print printf

int main() {
	int n, m;
	scanf("%d", &n);
	int a[n];
	for(int i=0; i<n; i++) scanf("%d", &a[i]);
	scanf("%d", &m);
	
	for(int i=n-m; i<n; i++) print("%d ", a[i]);
	for(int i=0; i<n-m; i++) print("%d ", a[i]);
}

