#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

#define ll long long
#define print printf

void ten(char s[]){
	s[0] = toupper(s[0]);
	for(int i=1; i<strlen(s); i++){
		s[i] = tolower(s[i]);
	}
}

void ho(char s[]){
	for(int i=0; i<strlen(s); i++){
		s[i] = toupper(s[i]);
	}
}

int main() {
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char s[80];
		char a[10][10];
		gets(s);
		int n = 0;
		char *word = strtok(s, " ");
		while(word != NULL){
			strcpy(a[n], word);
			n++;
			word = strtok(NULL, " ");
		}
		for(int i=1; i<n; i++){
			ten(a[i]);
			print("%s", a[i]);
			if(i != n-1) print(" ");
			else print(", ");
		}
		ho(a[0]);
		print("%s\n", a[0]);
	}
}
