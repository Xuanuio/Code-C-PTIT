#include<stdio.h>
#include<ctype.h>
#include<string.h>

#define print printf



int main() {
	char s[1003];
	gets(s);
	for(int i = 0; s[i]; i++) s[i] = tolower(s[i]);
	char a[1003][1003];
	int n = 0;
	char *word = strtok(s, " ");
	while(word != NULL){
		strcpy(a[n], word);
		n++;
		word = strtok(NULL, " ");
	}
	int b[n];
	memset(b, 0, sizeof(b));
	for(int i=0; i<n; i++){
		if(b[i] == 0){
			int cnt = 1;
			for(int j=i+1; j<n; j++){
				if(strcmp(a[i], a[j]) == 0){
					cnt++;
					b[j] = 1;
				}
			}
			print("%s %d\n", a[i], cnt);
		}
	}
}

