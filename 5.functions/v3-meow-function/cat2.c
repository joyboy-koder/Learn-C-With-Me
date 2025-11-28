#include <stdio.h>
#include <cs50.h>

void meow(int n);
int positive_integer(void);

   
int main(void)
{
  int times = positive_integer();
  meow(times);
}


int positive_integer(void)
{
    int n;
    do
    {
       n = get_int("Number: ");
    } while (n < 1);
    return n;
    
    
}




void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Meow\n");
    }
}