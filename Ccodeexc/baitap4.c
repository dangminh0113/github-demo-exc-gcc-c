#include <stdio.h>

int main() {
	
	double C;
	
	printf("Type the Celcius degree : ");
	
	scanf("%lf",&C);
	
	double F = C*double(9)/5+32;
	
	printf("The Farhrenheit degree after converting from Celcius is : %f",F);
	
	return 0;
	
}
