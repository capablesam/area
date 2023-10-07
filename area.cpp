#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
int main()
{
    char shape[9];
    float radius, length, breadth, base, height, area, circumference, pi;
    printf("\n Enter the shape you want the area & circumference for : ");
    scanf("%s", &shape);
    if(strcmp(shape, "circle")==0)
    {
        printf("\n Enter the radius of the circle: ");
        scanf("%f", &radius);
        pi=3.141592653589793238462643;
        area=pi*(pow(radius, 2));
        circumference=2*pi*radius;
        printf("\n the area of %s is %f \n the circumference of %s is %f ", shape, area, shape, circumference);
    }  
    if(strcmp(shape, "square")==0)
    {
        printf(" \n Enter the side of the square: ");
        scanf("%f", &length);
        area=length*length;
        circumference=4*length;
        printf("\n the area of %s is %f \n the circumference of %s is %f ", shape, area, shape, circumference);
    }
    if(strcmp(shape, "triangle")==0)
    {
        printf(" \n ENTER THE SIDE1 & SIDE20F THE TRIANGLE: ");
        scanf("%f %f", &breadth, &length);
        printf(" \n Enter the base of the triangle: ");
        scanf("%f", &base);
        printf("\n Enter the height of the triangle: ");
        scanf("%f", &height);
        area=length*height/2;
        circumference=length+breadth+base;
        printf("\n the area of %s is %f \n the circumference of %s is %f ", shape, area, shape, circumference);
    }
    if(strcmp(shape, "rectangle")==0)
    {
        printf("\n Enter the length of the rectangle: ");
        scanf("%f", &length);
        printf("\n Enter the breadth of the rectangle: ");
        scanf("%f", &breadth);
        area=length*breadth;
        circumference=length+breadth;
        printf("\n the area of %s is %f \n the circumference of %s is %f ", shape, area, shape, circumference);
    }
}