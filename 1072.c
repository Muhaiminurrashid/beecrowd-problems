#include <stdio.h>
int main()
{

    int n, x;
    int in = 0, out = 0;

    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &x);
        if (x <= 20 && x >= 10)
        {
            in++;
        }
        else
        {
            out++;
        }
    }
    printf("%d in\n", in);
    printf("%d out\n",out);
    return 0;
}