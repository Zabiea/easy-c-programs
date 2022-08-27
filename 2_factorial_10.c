#include<stdio.h>
#include<conio.h>

void main(){
	int i,n,fac=1;
	
	while(1){
		fac=1;
	
		printf("\nEnter the number to check factorial: ");
		scanf("%d",&n);
		
		if(n==0){
			printf("\nThe factorial of 0 is: 1");
		}
		else if(n<0){
			printf("\nEnter a positive number.");
		}
		else{
			for(i=0;i<n;i++){
				fac = fac*(n-i);
			}
			printf("\nThe factorial of %d is: %d",n,fac);
		}
	}
	getch();

}
