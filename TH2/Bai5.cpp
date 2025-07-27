#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

#define ll long long
#define print printf

int main() {
	char s[102];
	scanf("%s", s);
	char st[102];
	int sz = 0, n = strlen(s);
	for(int i=0; i<n; i++){
		if(!sz) st[sz++] = s[i];
		else{
			if(st[sz-1] == s[i]) sz--;
			else st[sz++] = s[i];
		}
	}
	if(!sz) print("Empty String");
	else{
		for(int i=0; i<sz; i++) print("%c", st[i]);
	}
}

