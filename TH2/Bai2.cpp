#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

#define ll long long
#define print printf

int main() {
	int t, n, k, i;
	scanf("%d", &t);
	while(t--){
		scanf("%d%d", &n, &k);
		i = 0;
		int a[5005];
		while(n){
			a[i] = n % k;
			n /= k;
			i++;
		}
		for(int j=i-1; j>=0; j--){
			if(a[j] < 10) print("%d", a[j]);
			else print("%c", 55 + a[j]);
		}
		print("\n");
	}
}

