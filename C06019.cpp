#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

#define ll long long
#define print printf

void chuanhoa(char s[]){
	for(int i=0; i<strlen(s); i++){
		s[i] = tolower(s[i]);
	}
}

int main() {
	char s[55], a[50][50];
	int n = 0;
	gets(s);
	char *word = strtok(s, " ");
	while(word != NULL){
		strcpy(a[n], word);
		n++;
		word = strtok(NULL, " ");
	}
	for(int i=0; i<n; i++){
		chuanhoa(a[i]);
	}
	for(int i=0; i<n-1; i++){
		print("%c", a[i][0]);
	}
	print("%s", a[n-1]);
	print("@ptit.edu.vn");
}

