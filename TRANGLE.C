#include<stdio.h>
#include<conio.h>
void main()
{
	float b,h,Area;
	clrscr();
	printf("\nEnter the value of Breath :");
	scanf("%f",&b);
	printf("Enter the value of Height :");
	scanf("%f",&h);
	Area=0.5*b*h;
	printf("Area of trangle :%f",Area);
	getch();
}