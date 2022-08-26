#include<stdio.h>
#include<conio.h>

void main(){
	int i,f,d,c;
	
	i=sizeof(int);
	f=sizeof(float);
	d=sizeof(double);
	c=sizeof(char);
	
	
	printf("\nsize of Int is: %d",i);
	printf("\nsize of Float is: %d",f);
	printf("\nsize of Double is: %d",d);
	printf("\nsize of Char is: %d",c);
	
	getch();
	
}
