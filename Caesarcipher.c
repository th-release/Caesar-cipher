#include <stdio.h>

int main(){
	char a[101];
	scanf("%s", &a);
	for(int i = 0; i <= 101; i++){
		a[i] += 3;
	}
	for(int i = 0; i <= 101; i++){
		if(a[i] == 'C') break;
		printf("%c", a[i]);
	}
}