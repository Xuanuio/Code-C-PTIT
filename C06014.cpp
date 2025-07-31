#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

#define ll long long
#define print printf

void chuanhoa(char s[]){
	s[0] = toupper(s[0]);
	for(int i=1; i<strlen(s); i++){
		s[i] = tolower(s[i]);
	}
}

int main() {
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char s[80];
		gets(s);
		char a[10][10];
		int n = 0;
		char *word = strtok(s, " ");
		while(word != NULL){
			strcpy(a[n], word);
			n++;
			word = strtok(NULL, " ");
		}
		for(int i=0; i<n; i++){
			chuanhoa(a[i]);
			print("%s ", a[i]);
		}
		print("\n");
	}
}

