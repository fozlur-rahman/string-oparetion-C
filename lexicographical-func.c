#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);

    // comparesiom function
    int result = strcmp(a, b);

    printf("%d\n", result);
    if (result < 0)
    {
        printf("A is small");
    }
    else if (result == 0)
    {
        printf("same");
    }
    else if (result > 0)
    {
        printf("b is small");
    }

    return 0;
}