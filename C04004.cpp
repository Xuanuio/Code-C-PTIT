#include<stdio.h>
#include<math.h>
#include<string.h>

#define ll long long
#define print printf

ll fb[93];

void fibo(){
	fb[1] = fb[2] = 1;
	for(int i=3; i<93; i++){
		fb[i] = fb[i-1] + fb[i-2];
	}
}

int main() {
	fibo();
	int t, n;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		print("%lld\n", fb[n]);
	}
}

