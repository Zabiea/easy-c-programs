#include<stdio.h>
#include<conio.h>

void main(){
	int n,b,i,num,rem,store;
	
	while(1){
		printf("\n Enter the decimal number: ");
		scanf("%d",&n);
		printf("\nEnter the base to be converted: ");
		scanf("%d",&b);
		
		i=1;
		num=0;
		store=n;
		while(n!=0){
			rem=n%b;
			n=n/b;
			num=num+(rem*i);
			i=i*10;
		}
		printf("\nThe converted number is: %d",num);
	}
	
	getch();
}
