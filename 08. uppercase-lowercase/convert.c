#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>

int main(void)
{
    string s = get_string("Input: ");
    printf("Output:  ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            printf("%c", toupper(s[i]));
        }
        else
        {
            printf("%c", tolower(s[i]));
        }
    }
    printf("\n");
}
