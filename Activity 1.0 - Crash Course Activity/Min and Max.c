#include <stdio.h>
#include <stdlib.h>

int main(){
	int i,min,max,tot,num,hmn;
	printf("Input a number: ");
	scanf("%d",&hmn);
	printf("Input a number: ");
	scanf("%d",&num);
	tot=num;
	min=num;
	max=num;
	for(i=1;i<=hmn-1;i++){
		printf("Input a number: ");
		scanf("%d",&num);
		tot+=num;
		if(num>max){
			max=num;
		}
		if(num<min){
			min=num;
		}
	}

	printf("\nMin: %d\n",min);
	printf("Max: %d\n",max);

	return (0);

}
