#include<stdio.h>

#define print printf

int main() {
	int t, n;
	scanf("%d", &t);
	int a[10] = {0, 0, 1, 9, 18, 90, 180, 900, 1800, 9000};
	while(t--){
		scanf("%d", &n);
		print("%d\n", a[n]);
	}
}

