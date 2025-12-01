#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long dollar = 1;
    while (true)
    {
        char c = get_char("Here is $%li.Double it and give to the next person? ", dollar);
        if (c == 'y' || c == 'Y')
        {
            dollar *= 2;
        }
        else
        {
            break;
        }
    }
    printf("Here is $%li\n", dollar);
}
