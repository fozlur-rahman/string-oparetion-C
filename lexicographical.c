#include <stdio.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);

    int i = 0;
    while (1)
    {
        if (a[i] == '\0' && b[i] == '\0')
        {
            printf("We are same\n");
            break;
        }
        else if (a[i] == '\0')
        {
            printf("A is small\n");
            break;
        }
        if (b[i] == '\0')
        {
            printf("B is small");
            break;
        }

        if (a[i] == b[i])
        {
            i++;
        }
        else if (a[i] > b[i])
        {
            printf("b is small");
            break;
        }
        else
        {
            printf("a is snmall");
        }
    }

    return 0;
}