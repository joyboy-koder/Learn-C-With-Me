#include <cs50.h>
#include <stdio.h>
#include <string.h>

// LINEAR SEARCH - STRING SEARCH

int main(void)
{
    string strings[] = {"books", "street", "humans", "tortoise", "extreme"};
    string s = get_string("String: ");

    for (int i = 0; i < 5; i++)
    {
        if (strcmp(strings[i], s) == 0)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}