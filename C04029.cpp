#include<stdio.h>
#include<stdlib.h>

#define ll long long
#define print printf

int cmp(const void *a, const void *b){
	int x = *(const int*)a;
	int y = *(const int*)b;
	if(x < y) return -1;
	if(x > y) return 1;
	return 0;
}

int main() {
	int n;
	scanf("%d", &n);
	int a[n], b[n];
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
		b[i] = a[i];
	}
	qsort(b, n, sizeof(int), cmp);
	for(int i=0; i<n-1; i++){
		int ok = 0;
		for(int j=0; j<n; j++){
			if(a[j] != b[j]){
				ok = 1;
				break;
			}
		}
		if(!ok) break;
		for(int j=0; j<n-1; j++){
			if(a[j] > a[j+1]){
				a[j] ^= a[j+1];
				a[j+1] ^= a[j];
				a[j] ^= a[j+1];
			}
		}
		print("Buoc %d: ", i+1);
		for(int j=0; j<n; j++){
			print("%d ", a[j]);
		}
		print("\n");
	}
}

