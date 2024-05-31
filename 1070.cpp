#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= 6)
    {
        if (n % 2 != 0)
        {
            cout << n << endl;
            i++;
        }
        n++;
    }
    return 0;
}