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
		int a[n], cnt = 0;
		for(int i=0; i<n; i++) scanf("%d", &a[i]);
		for(int i=1; i<n; i++){
			if(a[i] == a[i-1]) cnt++;
		}
		print("%d\n", cnt);
	}
}

