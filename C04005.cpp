#include<stdio.h>
#include<math.h>
#include<string.h>

#define ll long long
#define print printf

int main() {
	int t, n;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		int a[n], Max=-1;
		for(int i=0; i<n; i++){
			scanf("%d", &a[i]);
			if(a[i] > Max) Max = a[i];
		}
		print("%d\n", Max);
		for(int i=0; i<n; i++){
			if(a[i] == Max) print("%d ", i);
		}
		print("\n");
	}
}

