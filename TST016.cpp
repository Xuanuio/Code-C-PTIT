#include<stdio.h>
#include<string.h>

#define print printf

int main() {
	char s[1003];
	scanf("%s", s);
	char st[1003];
	int top = -1, n = strlen(s);
	for(int i=0; i<n; i++){
		if(top == -1 || s[i] == '(' || s[i] == '[' || s[i] == '{'){
			st[++top] = s[i];
		}
		else{
			if(s[i] == ')' && st[top] == '(') --top;
			else if(s[i] == ']' && st[top] == '[') --top;
			else if(s[i] == '}' && st[top] == '{') --top;
			else break;
		}
	}
	if(top == -1) print("1");
	else print("0");
}
