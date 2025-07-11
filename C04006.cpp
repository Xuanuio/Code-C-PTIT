#include<stdio.h>
#include<math.h>
#include<string.h>

#define ll long long
#define print printf

int main() {
	int n;
	scanf("%d", &n); 
	int a[n];
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(int i=n-1; i>=0; i--){
		print("%d ", a[i]);
	}
}

