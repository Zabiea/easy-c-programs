#include<stdio.h>
#include<conio.h>

void main(){
	int n;
	while(1){
	
		printf("\nEnter the number to check: ");
		scanf("%d",&n);
		if(n==0){
		}
		while(n%2==0){
			n=n/2;
		}
		if(n==1){
			printf("\nThe number is power of 2.");
		}
		else{
			printf("\nThe number is not power of 2.");
		}
}
	getch();
}
