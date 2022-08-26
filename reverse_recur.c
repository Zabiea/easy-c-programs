#include<stdio.h>
#include<conio.h>

void main(){
	int r=0,n,i=1;
	
	printf("Enter the number: ");
	scanf("%d",&n);
	
	r=reverse(n,r,i);
	
	printf("The reversed number is: %d",r);
	
	getch();
}

int reverse(int n,int r,int i){
	int rem;
	
	rem=n%10;
	n=n/10;
	if(n>=1){
		r=reverse(n,r,i);
	}
	r=r+(i*rem);
	
	
	return r;
}
