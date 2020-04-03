/* Calculate the area of rectangle, square and circle using switch case  */

#include<stdio.h>
int main()
{
    int ch,l,b,r;
    float area;
    printf("1. area of rectangle \n2.area of square \n3.area of circle\n");
    printf("\nEnter the choice:");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:

        printf("\nEnter the length and breadth: ");
        scanf("%d %d",&l, &b);
        area=l*b;
        printf("\nArea = %f",area);
        break;
    case 2:

        printf("\nEnter the radious");
        scanf("%d",&r);
        area=r*r;
        printf("\nArea = %f",area);
        break;
    case 3:

        printf("\nEnter the radious");
        scanf("%d",&r);
        area=3.14*r*r;
        printf("\nArea = %f",area);
        break;
    default:
        printf("\nInvalid input");
    }
}
