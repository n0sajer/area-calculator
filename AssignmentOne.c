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
    printf("Input variable is: %f\n", input);
    system("pause");
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
    system("cls");

    printf("C A L C U L A T E  A R E A  O F  A  C I R C L E\n\n");

    int option = 0;
    float r;
    float area_circle;

    do {

        r = get_num_from_user("Please enter the radius of your circle: ");
        area_circle = calc_area_circle(r);
        printf("\narea_circle: %f \n\n", area_circle);

        option = get_num_from_user("Press (1) to continue (2) to quit\n");

    } while (option != 2);
}

void calc_area_square_main()
{
    system("cls");

    printf("C A L C U L A T E  A R E A  O F  A  S Q U A R E\n\n");

    int option = 0;
    float s;
    float area_square;

    do {

        s = get_num_from_user("Please enter the one side length of your square: ");
        area_square = calc_area_square(s);
        printf("\narea_square: %f \n\n", area_square);

        option = get_num_from_user("Press (1) to continue (2) to quit\n");

    } while (option != 2);
}
int main()
{

    int option = 0;

    do {

        system("cls");
        printf("A R E A  C A L C U L A T O R\n\n");
        printf("1. Calc area of circle\n");
        printf("2. Calc area of square\n");
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
            case 0:
                printf("Bye...\n");
//            default:
//            printf("idiot\n");
        }

    } while (option != 0);
    return 0;
}
