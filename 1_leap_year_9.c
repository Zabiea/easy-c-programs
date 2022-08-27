#include<stdio.h>
#include<conio.h>

void main(){
	int n;
	
	while(1){
	
		printf("\nEnter the year to check: ");
		scanf("%d",&n);
		
		if(n%100==0){
			if(n%400==0){
				printf("\nThe year is a leap year ");
			}
			else{
				printf("\nThe year is not a leap year ");
			}
		}
		
		else{
			if(n%4==0){
				printf("\nThe year is a leap year ");
			}
			else{
				printf("\nThe year is not a leap year ");
			}
		}
}
	getch();
}

