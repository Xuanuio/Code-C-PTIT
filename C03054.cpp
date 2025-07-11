#include<stdio.h>
#include<string.h>

#define print printf

long long cut(char s[]){
	int n = strlen(s);
	long long ans = 0, ok = 0;
	for(int i=0; i<n; i++){
		char c = s[i];
		if(c == '0' || c == '8' || c == '9') ans = ans * 10;
		else if(c == '1'){
			ans = ans * 10 + 1;
			ok = 1;
		}
		else return 0;
	}
	return ok * ans;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		char s[20];
		scanf("%s", &s);
		if(cut(s)) print("%lld\n", cut(s));
		else print("INVALID\n");
	}
}
