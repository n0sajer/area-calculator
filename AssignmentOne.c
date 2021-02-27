#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Looking to use a switch statement as a my data validator as there are only 3 options required!

float get_num_from_user(char *message) //Function that only returns true when a float is returned
{
    int temp, status;
    float input;

    printf("%s", message);
//  exit(0);
    status = scanf("%f", &input);
    while(status != 1)
    {
        while((temp = getchar()) != EOF && temp != '\n');
        printf("Invalid input... please enter a number: ");
        status = scanf("%f", &input);
    }

    return input;
}

float calc_area_circle_radius(float r)
{
    return M_PI * r * r;
}

float calc_area_circle_diameter(float d)
{
    return M_PI * ((d * d) / 4);
}

float calc_area_square(float s)
{
    return s * s;
}

float calc_area_triangle(float a, float b, float c)    //Heron's Formula for calculating triangle area
{
    float s;

    s = (a + b + c) / 2;
    return sqrt((s*((s-a) * (s-b) * (s-c))));
}

float calc_area_rect(float x, float y)
{
    return x * y;
}

void circle_radius_main()
{
    int option = 0;
    float r;
    float area_using_radius;

    do {

        system("cls");
        printf("\nC A L C U L A T E   A R E A   O F   T R I A N G L E:\n");
        printf("           U S I N G   R A D I U S\n\n");

        r = get_num_from_user("What is the radius of the circle: ");
        area_using_radius = calc_area_circle_radius(r);
        printf("Area of your circle (PI * r * r) = %f\n\n", area_using_radius);

        option = get_num_from_user("(2) to quit, any other number to repeat ");

    } while (option != 2);
}

void circle_diameter_main()
{
    int option = 0;
    float d;
    float area_using_diameter;

    do
    {
        system("cls");
        printf("\n\nC A L C U L A T E   A R E A   O F   T R I A N G L E:\n");
        printf("          U S I N G   D I A M E T E R \n\n");

        d = get_num_from_user("What is the diameter of the circle: ");
        area_using_diameter = calc_area_circle_diameter(d);
        printf("Area of your circle (PI * D/4) = %f\n\n", area_using_diameter);

        option = get_num_from_user("(2) to quit, any other number to repeat ");

    } while (option != 2);
}

void calc_area_circle_main()
{
    int option = 0;


    system("cls");
    printf("C A L C U L A T E   A R E A   O F   C I R C L E\n\n");
    printf("1. Using radius\n");
    printf("2. Using diameter\n");
    printf("0. QUIT\n\n");

    option = get_num_from_user("Choose an option from above: "); //TODO must add default to stop double repeat / exit
    while (option != 0)
    {
        switch(option)
        {
            case 1:
                circle_radius_main();
                break;
            case 2:
                circle_diameter_main();
                break;
            case 0:
                printf("Bye...\n");
                break;
        }

        system("cls");
        printf("C A L C U L A T E   A R E A   O F   C I R C L E\n\n");
        printf("1. Using radius\n");
        printf("2. Using diameter\n");
        printf("0. QUIT\n\n");

        option = get_num_from_user("\n\nChoose an option from above: ");
    }
}

void calc_area_square_main()
{
    int option = 0;
    float s;
    float area_square;

    do
    {
        system("cls");

        printf("C A L C U L A T E   A R E A   O F   A   S Q U A R E\n\n");

        s = get_num_from_user("Enter side length of square: ");
        area_square = calc_area_square(s);
        printf("\narea_square: %f\n\n", area_square);

        option = get_num_from_user("(2) to quit, any other number to repeat ");

    } while (option != 2);
}

void calc_area_triangle_main()
{

    int option = 0;
    float a, b, c;
    float area_triangle;

    do
    {
        system("cls");

        printf("C A L C U L A T E   A R E A   O F   A   T R I A N G L E\n\n");

        a = get_num_from_user("Please enter length of side 1: ");
        b = get_num_from_user("Please enter length of side 2: ");
        c = get_num_from_user("Please enter length of side 2: ");
        area_triangle = calc_area_triangle(a, b, c);
        printf("\nArea of the triangle triangle is : %f \n\n", area_triangle);

        option = get_num_from_user("(2) to quit, any other number to repeat ");

    }
    while (option != 2);
}

void calc_area_rect_main()
{

    int option = 0;
    float x, y;
    float area_rect;

    do
    {
        system("cls");

        printf("C A L C U L A T E   A R E A   O F   A   R E C T A N G L E\n\n");

        x = get_num_from_user("Please enter length of rectangle: ");
        y = get_num_from_user("Please enter width of rectangle: ");
        if (x == y)
        {
            printf("\n\nThat is a square.. you chose the wrong option\n\n");
        }
        else
        {
            area_rect = calc_area_rect(x, y);
            printf("\n\narea_triangle: %f \n\n", area_rect);
        }

        option = get_num_from_user("Press (1) to restart (2) to quit: ");

    }
    while (option != 2);
}

int main()
{

    int option = 0;

    do {

        system("cls");
        printf("A R E A  C A L C U L A T O R\n\n");
        printf("1. Calc area of circle\n");
        printf("2. Calc area of square\n");
        printf("3. Calc area of triangle\n");
        printf("4. Calc area of rectangle\n");
        printf("0. QUIT\n\n");

        option = get_num_from_user("Choose an option from above: ");
        switch(option)
        {
            case 1:
                calc_area_circle_main();
                break;
            case 2:
                calc_area_square_main();
                break;
            case 3:
                calc_area_triangle_main();
                break;
            case 4:
                calc_area_rect_main();
                break;
            case 0:
                printf("Bye...\n");
                break;
        }

    } while (option != 0);
    return 0;
}
