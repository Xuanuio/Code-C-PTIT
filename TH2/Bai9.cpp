#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

#define ll long long
#define print printf

int nt(int n){
	for(int i=2; i<=sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return n > 1;
}

int ck(char s[]){
	int n = strlen(s), sum = 0;
	for(int i=0; i<n; i++){
		int num = s[i] - '0';
		if(i % 2 == 0){
			if(num % 2) return 0;
		}
		else{
			if(num % 2 == 0) return 0;
		}
		sum += num;
	}
	return nt(sum);
}

int main() {
	int t, n;
	scanf("%d", &t);
	while(t--){
		char s[505];
		scanf("%s", s);
		print(ck(s) ? "YES\n" : "NO\n");
	}
}
