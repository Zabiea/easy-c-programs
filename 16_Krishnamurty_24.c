#include<stdio.h>
#include<conio.h>

void main(){
	int n,rem,sum,store;
	
	printf("\nCheck the number is Krishnamurty number or not.\n");
	printf("\nEnter the number: ");
	scanf("%d",&n);
	
	sum=0;
	store=n;
	
	while(n!=0){
		rem=n%10;
		n=n/10;
		sum=sum+fact(rem);
	}
	
	if(store==sum){
		printf("\nThe number is a Krishnamurty number.");
	}
	else{
		printf("\nThe number is not a Krishnamurty number.");	
	}
	
}

int fact(int n){
	int f=1,i;
	
	for(i=2;i<=n;i++){
		f=f*i;
	}
	return f;
}
