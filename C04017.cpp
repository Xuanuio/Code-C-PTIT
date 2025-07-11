#include<stdio.h>
#include<math.h>
#include<string.h>

#define ll long long
#define print printf

int nt(int n){
	for(int i=2; i<=sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return n > 1;
}

int main() {
	int n, cnt = 0;
	scanf("%d", &n);
	int a[n];
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
		if(nt(a[i])) cnt++;
	}
	
	print("%d ", cnt);
	for(int i=0; i<n; i++){
		if(nt(a[i])) print("%d ", a[i]);
	}
}

