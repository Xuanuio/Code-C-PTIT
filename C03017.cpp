#include<stdio.h>
#include<string.h>

int ck(char s[]){
	int n = strlen(s);
	for(int i=0; i<n/2; i++){
		if(s[i] != s[n-i-1]) return 0;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char c[20];
		scanf("%s", c);
		printf(ck(c) ? "YES\n" : "NO\n");
	}
}

