#include "./../include/header.h"

void main(void){
	float base,height,side,radius;
	printf("Program to calculate area of triangle,square and circle using defination \n");
	printf("\t\tArea of Triangle\n");
	printf("Enter base of triangle\n");
	scanf(" %f",&base);
	printf("Enter heigth of triangle\n");
	scanf(" %f",&height);
	printf("Area of triangle is with base %f and heigth %f is  : %f ",base,height,triangleArea(base,height));

	printf("\n\t\tArea of Square\n");
	printf("Enter side of square\n");
	scanf(" %d",&side);
	printf("Area of square is with side %d is  : %d ",side,squareArea(side));

	printf("\n\t\tArea of Circle\n");
	printf("Enter radius of circle\n");
	scanf(" %d",&radius);
	printf("Area of circle is with radius %d  : %f ",radius,circleArea(radius));
	return;
}
