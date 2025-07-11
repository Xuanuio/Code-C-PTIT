#include<stdio.h>
#include<math.h>
#include<string.h>

#define ll long long
#define print printf

int main() {
	int t, n, cnt;
	int a[10] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		cnt = 0;
		for(int i=0; i<10; i++){
			cnt += n / a[i];
			n %= a[i];
		}
		print("%d\n", cnt);
	}
}

