#include <stdio.h>
#include <string.h>
int main()
{
    char a[20], b[20];
    int len1, len2, i, j;
    scanf("%s %s", &a, &b);
    len1 = strlen(a);
    len2 = strlen(b);

    for (i = 0; i < len1 && i < len2; i++)
    {
        if (a[i] < b[i])
        {
            printf("%s\n%s\n", a, b);
            return 0;
        }
        else if (a[i] > b[i])
        {
            printf("%s\n%s\n", b, a);
            return 0;
        }
    }

    if (len1 < len2)
        printf("%s\n%s\n", a, b);
    else if (len2 < len1)
        printf("%s\n%s\n", b, a);
    else
        printf("%s\n%s\n", a, b);

    return 0;
}