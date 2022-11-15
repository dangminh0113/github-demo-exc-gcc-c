#include <stdio.h>

int main() {
	
	int a,b;
	
	printf("Type your first number :");
	
	scanf("%d",&a);
	
	printf("Type your second number :");
	
	scanf("%d",&b);
	
	printf("Adding 1th number and 2th number = %d\n",a+b);
	
	printf("Subtracting = %d\n",a-b);
	
	printf("Mutiplying = %d\n",a*b);
	
	printf("Dividing = %f",double(a)/b);
	
	return 0;
}
