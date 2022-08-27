#include<stdio.h>
#include<conio.h>

void main(){
	int n,m,i;
	
	printf("\nEnter the range(n<=m): ");
	scanf("%d %d",&n,&m);
	if(n<=m){

		for(i=n;i<=m;i++){
			if(i%2==0){
				printf("\n%d Even",i);	
			}
			else{
				printf("\n%d odd",i);
			}
		}
}
	else{
		printf("\nWrong range given.\n");
}
}
