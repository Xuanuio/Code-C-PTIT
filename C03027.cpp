#include<stdio.h>
#include<math.h>

#define print printf

int gcd(int a, int b){
	if(b==0) return a;
	return gcd(b, a%b);
}

int sum(int n){
	int sum = 0;
	while(n){
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int nt(int n){
	if(n < 2) return 0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b;
		scanf("%d%d", &a, &b);
		if(nt(sum(gcd(a, b)))){
			print("YES\n");
		}
		else print("NO\n");
	}
}
