#include<stdio.h>
#include<math.h>

#define int long long

int nt(int n){
	if(n < 2) return 0;
	for(int i=2; i<=sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
}

int fb[50];

int ck(int n){
	int sum = 0;
	while(n){
		sum += n % 10;
		n /= 10;
	}
	for(int i=0; i<40; i++){
		if(sum == fb[i]) return 1;
	}
	return 0;
}

main(){
	fb[0] = 0, fb[1] = 1;
	for(int i=2; i<40; i++){
		fb[i] = fb[i-1] + fb[i-2];
	}
	int a, b;
	scanf("%lld%lld", &a, &b);
	if(a > b){
		a = a^b;
		b = b^a;
		a = a^b;
	}
	for(int i=a; i<=b; i++){
		if(nt(i) && ck(i)){
			printf("%d ", i);
		}
	}
}

