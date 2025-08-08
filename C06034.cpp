#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

#define ll long long
#define print printf

int val[] = {1, 5, 10, 50, 100, 500, 1000};
char key[] = "IVXLCDM";

int f(char c){
	for(int i=0; i<7; i++){
		if(key[i] == c) return i;
	}
} 

int solve(char s[]){
	int n = strlen(s), ans = 0;
	ans = val[f(s[n-1])];
	for(int i=n-1; i>0; i--){
		int p1 = f(s[i]);
		int p2 = f(s[i-1]);
		if(val[p1] <= val[p2]) ans += val[p2];
		else ans -= val[p2];
	}
	return ans;
}

int main() {
	int t, n;
	scanf("%d", &t);
	while(t--){
		char s[2000];
		scanf("%s", s);
		print("%d\n", solve(s));
	}
}

