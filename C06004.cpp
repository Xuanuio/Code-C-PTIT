#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

#define print printf

int main() {
	char s[1003];
	gets(s);
	int n = strlen(s), alpha = 0, number = 0, special = 0;
	for(int i=0; i<n; i++){
		if(isalpha(s[i])) alpha++;
		else if(isdigit(s[i])) number++;
		else special++;
	}
	print("%d %d %d", alpha, number, special);
}

