#include<stdio.h>
#include<math.h>
#include<string.h>

#define ll long long
#define print printf

int a[1000006];
int b[1000006];

int skg(int n){
	int r = n % 10;
	n /= 10;
	while(n){
		if(n % 10 > r) return 0;
		r = n % 10;
		n /= 10;
	}
	return 1;
}

int main() {
	int x, n=0, ok;
	while(scanf("%d", &x) != EOF){
		if(skg(x)){
			ok = 1;
			for(int i=0; i<n; i++){
				if(x == a[i]){
					b[i]++;
					ok = 0;
					break;
				}
			}
			if(ok){
				a[n] = x;
				b[n] = 1;
				n++;
			}
		}
	}
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(b[i] < b[j]){
				// swap(b[i], b[j]);
				b[i] = b[i] ^ b[j];
				b[j] = b[j] ^ b[i];
				b[i] = b[i] ^ b[j];
				// swap(a[i], a[j]);
				a[i] = a[i] ^ a[j];
				a[j] = a[j] ^ a[i];
				a[i] = a[i] ^ a[j];
			}
		}
	} 
	for(int i=0; i<n; i++){
		print("%d %d\n", a[i], b[i]); 
	}
}
