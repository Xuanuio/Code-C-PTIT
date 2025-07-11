#include<stdio.h>
#include<math.h>
#include<string.h>

#define ll long long
#define print printf

int main() {
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0; i<n; i++) scanf("%d", &a[i]);
	for(int i=0; i<n; i++){
		if(a[i] % 2 == 0) print("%d ", a[i]);
	}
	print("\n");
	for(int i=0; i<n; i++){
		if(a[i] % 2) print("%d ", a[i]);
	}
}

