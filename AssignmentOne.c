#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float get_num_from_user(char *message)
{
    int temp, status;
    float input;

    printf("%s", message);
    status = scanf("%f", &input);
    while(status != 1)
    {
        while((temp = getchar()) != EOF && temp != '\n');
        printf("Invalid input... please enter a number: ");
        status = scanf("%f", &input);
    }

    return input;
}

float calc_area_circle(float r)
{
    return M_PI * r * r;
}

float calc_area_square(float s)
{
    return s * s;
}

float calc_area_triangle(float b, float h)
{
    return 0.5 * b * h;
}

float calc_area_rect(float x, float y)
{
    return x * y;
}

void calc_area_circle_main()
{

    int option = 0;
    float r;
    float area_circle;

    do {
    system("cls");

    printf("C A L C U L A T E   A R E A   O F   A   C I R C L E\n\n");

        r = get_num_from_user("Please enter the radius of your circle: ");
        area_circle = calc_area_circle(r);
        printf("\narea_circle: %f \n\n", area_circle);

        option = get_num_from_user("Press (1) to repeat (2) to quit: ");

    } while (option != 2);
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

        option = get_num_from_user("Press (1) to repeat (2) to quit: ");

    } while (option != 2);
}

void calc_area_triangle_main()
{

    int option = 0;
    float b, h;
    float area_triangle;

    do
    {
        system("cls");

        printf("C A L C U L A T E   A R E A   O F   A   T R I A N G L E\n\n");

        b = get_num_from_user("Please enter base length of triangle: ");
        h = get_num_from_user("Please enter perpendicular height of triangle: ");
        area_triangle = calc_area_triangle(b, h);
        printf("\narea_triangle: %f \n\n", area_triangle);

        option = get_num_from_user("Press (1) to repeat (2) to quit: ");

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
