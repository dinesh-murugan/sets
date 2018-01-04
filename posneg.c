#include <stdio.h>

int main() {
	//code
	int i;
	printf("enter the num:");
	scanf("%d",&i);
	if(i<0)
	{
	    printf("\n negative");
	}
	else if(i>0)
	{
	    printf("\n postive");
	}
	else if(i==0)
	{
	    printf("\n zero");
	}
	return 0;
}
