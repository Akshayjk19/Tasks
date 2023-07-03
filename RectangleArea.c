#include<stdio.h>
void main()
{
	float len,bre,area;
	printf("Enter length: ");
	scanf("%f",&len);
	printf("Enter breadth: ");
	scanf("%f",&bre);

	area=len*bre;
	printf("Area:%.2f",area);
	
	return 0;
}