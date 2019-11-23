#include <stdio.h>

int fb(int n)
{
    return (n == 0) ? 0 : (n == 1 || n==2) ? 1 : fb(n-1) + fb(n-2);
}

int main()
{
    int num;
    while (scanf("%d", &num) != EOF)
    {
      printf("%d\n", fb(num));
    }
    return 0;
}