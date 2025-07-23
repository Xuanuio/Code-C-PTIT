#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

#define print printf

int main() {
	char s1[102];
	gets(s1);
	char a[102][102];
	int n = 0;
	char s2[102];
	scanf("%s", s2);
	char *word = strtok(s1, " ");
	while(word != NULL){
		strcpy(a[n], word);
		n++;
		word = strtok(NULL, " ");
	}
	for(int i=0; i<n; i++){
		if(strcmp(a[i], s2)) print("%s ", a[i]);
	}
}
