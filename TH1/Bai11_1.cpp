#include<stdio.h>

#define print printf

int st[100005];

int main() {
	int n, sz = 0;
	scanf("%d", &n);
	int a[n];
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(int i=0; i<n; i++){
		if(!sz) st[sz++] = a[i];
		else{
			if((st[sz-1] + a[i]) % 2 == 0) sz--;
			else st[sz++] = a[i];
		}
	}
	print("%d", sz);
}

