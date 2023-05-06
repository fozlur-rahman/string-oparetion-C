#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }	
    int count[6] = {0};
    for (int i = 0; i < n; i++)
    {
        // if cout[i] = a[i] then count++. its means this line
        count[a[i]]++;
    }
    for (int i = 0; i <= 5; i++)
    {
        printf("%d - %d\n", i, count[i]);
    }

    return 0;
}