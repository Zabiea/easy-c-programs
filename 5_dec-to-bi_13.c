#include<stdio.h>
#include<conio.h>

void main(){
	int i,n,bi,rem,n1;
	while(1){
		
		i=1;
		bi=0;
		
		printf("\nEnter the decimal number: ");
		scanf("%d",&n);
		
		n1=n;
		
		while(n>=1){
			rem=n%2;
			bi=bi+(rem*i);
			i=i*10;
			n=n/2;
		}
		
		printf("\nThe binary equivalent number of %d is: %d",n1,bi);
}
getch();
}
