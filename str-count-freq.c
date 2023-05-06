#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    scanf("%s", &a);
    int count[26] = {};
    for (int i = 0; i < strlen(a); i++)
    {
        // for string to intiger convert each str - 97 or 'a'. // int value = a[i] - 'a';
        int value = a[i] - 'a';
        count[value]++;
    }
    // printf("%d", count[0]);
    for (int i = 0; i < strlen(a); i++)
    {
        int value = a[i] - 'a';
        if (count[value] != 0)
        {
            printf("%c - %d\n", value + 'a', count[value]);
        }
        count[value] = 0;
    }

    return 0;
}