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
		int a[n], ok = 1;
		for(int i=0; i<n; i++){
			scanf("%d", &a[i]);
		}
		for(int i=0; i<n/2; i++){
			if(a[i] != a[n-i-1]){
				ok = 0;
				break;
			}
		}
		if(ok) print("YES\n");
		else print("NO\n");
	}
}

