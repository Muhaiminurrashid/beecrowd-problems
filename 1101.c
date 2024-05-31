#include <stdio.h>
int main()
{   int x;
    int m, n, i, temp, sum ;

    while (1)
    {
        scanf("%d %d", &n,&m);
        if (n <= 0)break;
        if (m <= 0)break;

        if (n > m)
        {
            temp = n;
            n = m;
            m = temp;
        }
        sum=0;
        for (i = n; i <= m; i++)
        {
            sum += i;
            printf("%d ", i);
        }
        printf("Sum=%d\n", sum);
    }
    return 0;
}
