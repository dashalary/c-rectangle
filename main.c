/* this program will calculate the area of a rectangle */

#include <stdio.h>

int main()
{
    double width = 32.3;
    double height = 15.3;
    double perimeter = 0.0;
    double area = 0.0;

    perimeter = 2.0 * (height + width);
    area = width * height;

    printf("Perimeter is %f\n", perimeter);
    printf("Area is %f\n", area);
    printf("Width is %f, Height is %f\n", width, height);

    return 0;
}