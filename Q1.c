#include<stdio.h>
int  main()
{
    float area,height,length;

    printf("Enter the length of the base of triangle :");
    scanf("%f",&length);

    printf("Enter the height of the base of triangle :");
    scanf("%f",&height);

    area = (length*height)/2;

    printf("area of the triangle :%.2f\n",area);

    return 0;



}