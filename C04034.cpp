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
		int a[n], b[n], k=-1;
		for(int i=0; i<n; i++){
			scanf("%d", &a[i]);
			b[i] = 0;
		}
		for(int i=n-1; i>=0; i--){
			if(a[i] > k){
				b[i] = 1;
				k = a[i];
			}
		}
		for(int i=0; i<n; i++){
			if(b[i]){
				print("%d ", a[i]);
			}
		}
		print("\n");
	}
}

