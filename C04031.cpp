#include<stdio.h>
#include<math.h>

#define ll long long
#define print printf

int main() {
	int t, n;
	scanf("%d", &t);
	for(int k=1; k<=t; k++){
		scanf("%d", &n);
		int a[n+1];
		a[0] = 2025;
		int len, Max = -1;
		for(int i=1; i<=n; i++){
			scanf("%d", &a[i]);
			if(a[i] > a[i-1]){
				len++;
				Max = fmax(Max, len);
			}
			else len = 1;
		}
		print("Test %d:\n", k);
		print("%d\n", Max);
		// len = 1;
		for(int i=1; i<=n; i++){
			if(a[i] > a[i-1]){
				len++;
				if(len == Max){
					for(int j = i - Max + 1; j<=i; j++){
						print("%d ", a[j]);
					}
					print("\n");
				}
			}
			else len = 1;
		}
	}
}
