#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
} person;

int main(void)
{
    person array[3];
    array[0].name = "Kelvin";
    array[0].number = " 0542924048";

    array[1].name = "Sophia";
    array[1].number = " 0553756217";

    array[2].name = "Pascal";
    array[2].number = " 0244095211";

    string s = get_string("Search: ");

    for (int i = 0; i < 3; i++)
    {
        if (strcmp(s, array[i].name) == 0)
        {
            printf("Found%s\n", array[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}
