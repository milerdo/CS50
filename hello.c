#include <stdio.h>

int main(void) 
{
    int n;
    printf("How many meows? ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Meow\n");
    }
    return 0;
}