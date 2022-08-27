#include<stdio.h>
#include<conio.h>

void main(){
	int n,rem,sum;
	
	while(1){
		printf("\nEnter the number: ");
		scanf("%d",&n);
		
		sum=0;
		while(n!=0){
			rem=n%10;
			n=n/10;
			sum=sum+rem;
		}
		
		printf("\nSum of the digits of given number is: %d",sum);
	}
	getch();
}
