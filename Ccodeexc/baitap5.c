#include <stdio.h>

int main() {
	
	int a,b;
	
	printf("Type the first number : ");
	
	scanf("%d",&a);
	
	printf("Type the second number : ");
	
	scanf("%d",&b);
	
	if (a > b) 
	
	printf("The maximum value is %d",a);
		
		else if (a < b)
			
			printf("The maximum value is %d",b);
			
			else printf("There is none of the maximum value between two numbers!");
			
	return 0; 
}
