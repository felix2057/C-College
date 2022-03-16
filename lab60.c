#include <conio.h>

int main()
{
    int number;

    printf("enter a number");

    scanf("%d", &number);

    int n1, cube, sum_of_cube = 0;

    while (number != 0)
    {

        n1 = number % 10;

        cube = n1 * n1 * n1;

        sum_of_cube = sum_of_cube + cube;

        number = number / 10;
    }

    printf("cube sum is %d\t", sum_of_cube);
    getch();
    return 0;
}