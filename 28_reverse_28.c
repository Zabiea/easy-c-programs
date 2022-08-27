#include<stdio.h>
#include<conio.h>

void main(){
	int n,rem,store,a[20],i;
	
	printf("\nEnter the number to reverse: ");
	scanf("%d",&n);
	
	store=n;
	printf("\nThe reversed number is: ");
	i=0;
	while(n!=0){
		rem=n%10;
		n=n/10;
		a[i]=rem;
		printf("%d",rem);
		i++;
	}
	getch();
}
