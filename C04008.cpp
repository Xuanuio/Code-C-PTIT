#include<stdio.h>
#include<math.h>
#include<string.h>

#define ll long long
#define print printf

int main() {
	int t, n, m, p;
	scanf("%d", &t);
	for(int k=1; k<=t; k++){
		scanf("%d%d%d", &n, &m, &p);
		int a[n], b[m];
		for(int i=0; i<n; i++) scanf("%d", &a[i]);
		for(int i=0; i<m; i++) scanf("%d", &b[i]);
		
		print("Test %d:\n", k);
		for(int i=0; i<p; i++) print("%d ", a[i]);
		for(int i=0; i<m; i++) print("%d ", b[i]);
		for(int i=p; i<n; i++) print("%d ", a[i]);
		print("\n");
	}
}

