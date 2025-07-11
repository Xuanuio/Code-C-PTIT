#include<stdio.h>
#include<math.h>
#include<string.h>

#define ll long long
#define print printf

int main() {
	int n, m, p;
	scanf("%d%d", &n, &m);
	int a[n], b[m];
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(int i=0; i<m; i++){
		scanf("%d", &b[i]);
	}
	scanf("%d", &p);
	for(int i=0; i<p; i++){
		print("%d ", a[i]);
	}
	for(int i=0; i<m; i++){
		print("%d ", b[i]);
	}
	for(int i=p; i<n; i++){
		print("%d ", a[i]);
	}
}

