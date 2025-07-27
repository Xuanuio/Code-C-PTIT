#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

#define ll long long
#define print printf

int ck(char s[]){
	int n = strlen(s);
	for(int i=0; i<n/2; i++){
		if(s[i] != s[n-i-1]) return 0;
	}
	return 1;
}

int main() {
	int t;
	scanf("%d", &t);
	while(t--){
		char s[1003];
		scanf("%s", s);
		char a[1003] = "";
		int k = 0;
		for(int i=0; s[i]; i++){
			char ch = tolower(s[i]);
			if(ch >= 'a' && ch <= 'c') a[k++] = 2;
			else if(ch >= 'd' && ch <= 'f') a[k++] = 3;
			else if(ch >= 'g' && ch <= 'i') a[k++] = 4;
			else if(ch >= 'j' && ch <= 'l') a[k++] = 5;
			else if(ch >= 'm' && ch <= 'o') a[k++] = 6;
			else if(ch >= 'p' && ch <= 's') a[k++] = 7;
			else if(ch >= 't' && ch <= 'v') a[k++] = 8;
			else if(ch >= 'w' && ch <= 'z') a[k++] = 9;
		}
		a[k] = '\0';
		print(ck(a) ? "YES\n" : "NO\n");
	}
}

