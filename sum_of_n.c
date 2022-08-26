#include<stdio.h>
#include<conio.h>

void main(){
	int i,sum=0,n;
	
	printf("\nEnter a number: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		sum=sum+i;
	}
	printf("\nSum of first %d natural number is: %d",n,sum);
	
	getch();
	
}
