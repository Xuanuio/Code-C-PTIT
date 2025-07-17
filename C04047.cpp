#include<stdio.h>
#include<math.h>
#include<string.h>

#define ll long long
#define print printf

int main() {
	int n, e = 0;
	scanf("%d", &n);
	int a[n], b[n];
	for(int i=0; i<n; i++){
		scanf("%d%d", &a[i], &b[i]);
	}
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(a[i] > a[j]){
				a[i] ^= a[j];
				a[j] ^= a[i];
				a[i] ^= a[j];
				b[i] ^= b[j];
				b[j] ^= b[i];
				b[i] ^= b[j];
			}
		}
	}
	for(int i=0; i<n; i++){
		if(a[i] > e) e = a[i];
		e += b[i];
	}
	print("%d", e);
}
