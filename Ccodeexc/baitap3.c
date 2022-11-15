#include <stdio.h>

int main() {
	
	double width, height;
	
	printf("Type the height : ");
	
	scanf("%lf",&height);
	
	printf("\n");
	
	printf("Type the width : ");
	
	scanf("%lf",&width);
	
	printf("The perimeter of a rectangle is : %f \n",double(height+width)*2);
	
	printf("The area of a rectangle is : %f",double(height*width))
	;
	
	return 0;	
}
