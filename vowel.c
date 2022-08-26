#include<stdio.h>
#include<conio.h>

void main(){
	int n;
	
	
	printf("\nEnter a char: ");
	scanf("%1c",&n);
	
	if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u'||n=='A'||n=='E'||n=='I'||n=='O'||n=='U'){
		printf("\n%c is a vowel.",n);
	}
	else{
		printf("\n%c is not a vowel.",n);
	}

getch();	
}
