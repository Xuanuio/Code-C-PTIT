#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

#define ll long long
#define print printf

int main() {
	char s[102];
	gets(s);
	int n = 0, ok;
	char a[102][102];
	char *word = strtok(s, " ");
	while(word != NULL){
		ok = 1;
		for(int i=0; i<n; i++){
			if(strcmp(a[i], word) == 0){
				ok = 0;
				break;
			}
		}
		if(ok){
			strcpy(a[n], word);
			n++;
		}
		word = strtok(NULL, " ");
	}
	for(int i=0; i<n; i++){
		print("%s ", a[i]);
	}
}

