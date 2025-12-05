#include <cs50.h>
#include <stdio.h>
#include <string.h>

// LINEAR SEARCH - INT SEARCH

int main(void)
{
    int number[] = {5, 20, 35, 50, 100, 150, 70};

    int s = get_int("Number: ");
    for (int i = 0; i < 7; i++)
    {
        if (s == number[i])
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}
