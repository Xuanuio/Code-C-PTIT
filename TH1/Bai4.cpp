#include<stdio.h>
#include<math.h>

#define print printf

int main() {
	int t, n, cnt;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		print("1 * ");
		for(int i=2; i<=sqrt(n); i++){
			if(n % i == 0){
				cnt = 0;
				while(n % i == 0){
					cnt++;
					n /= i;
				}
				print("%d^%d ", i, cnt);
				if(n > 1) print("* ");
			}
		}
		if(n > 1) print("%d^1", n);
		print("\n");
	}
}

