#include<stdio.h>
#include<conio.h>

void main(){
	int m,m2,n,b,i,temp;
	
	printf("Second largest number from a list without using array.");
	printf("\nHow many numbers ? ");
	scanf("%d",&b);
	printf("\nEnter the list: ");
	
	for(i=0;i<b;i++){
		if(i==0){
			scanf("%d",&m);	
		}
		else if(i==1){
			scanf("%d",&m2);
			if(m2>m){
				temp=m2;
				m2=m;
				m=temp;
			}
		}
		else{
			scanf("%d",&n);
			if(n>m){
				m2=m;
				m=n;
			}
			if(n<m && n>m2){
				m2=n;
			}
		}
	}
	
	printf("\nThe second highest number in the list is: %d",m2);
	
	getch();
}
