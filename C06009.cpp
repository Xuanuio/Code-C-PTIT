#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

#define ll long long
#define print printf

int t1(char s[]){
	if(s[5] <= s[4]) return 0;
	if(s[4] <= s[2]) return 0;
	for(int i=1; i>=0; i--){
		if(s[i+1] <= s[i]) return 0;
	}
	return 1;
}

int t2(char s[]){
	for(int i=1; i<6; i++){
		if(i != 3 && s[i] != s[0]) return 0;
	}
	return 1;
}

int t3(char s[]){
	if(s[0] != s[1] || s[1] != s[2]) return 0;
	if(s[4] != s[5]) return 0;
	return 1;
}

int t4(char s[]){
	for(int i=1; i<6; i++){
		if(i != 3 && (s[i] != '6' && s[i] != '8')) return 0;
	}
	return 1;
}

int main() {
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char s[20];
		gets(s);
		int n = strlen(s);
		strncpy(s, s + n - 6, 6);
		s[6] = '\0';
		int ok = t1(s) + t2(s) + t3(s) + t4(s);
		print(ok ? "YES\n" : "NO\n");
	}
}
