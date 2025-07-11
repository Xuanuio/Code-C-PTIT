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
		int a[n], ck=-1,cnt = 0;
		for(int i=0; i<n; i++){
			scanf("%d", &a[i]);
		}
		for(int i=0; i<n; i++){
			if(a[i] >= ck){
				cnt++;
				ck = a[i];
			}
		}
		print("%d\n", cnt);
	}
}

