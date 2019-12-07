#include <stdio.h>
#include <math.h>

int max(int a, int b)
{
  return (a < b) ? b : a;
}

int min(int a, int b)
{
  return (a < b) ? a : b;
}

int sign(int a)
{
  return (a < 0) ? (-1) : (a == 0) ? 0 : 1; 
}

int mins(int a, int b, int c)
{
  return (a < b && a < c) ? a : (b < a && b < c) ? b : c; 
}

int mod(int a, int b)
{
  return (a % b < 0) ? ((a % b) + b) : (a % b);
}

int module(int a)
{
  return (a < 0) ? (-a) : a;
}

int main()
{
  int i = 10, j = 20, l = -1, n = 50, ik, jk, lk, m = 0;
  for (int k = 1; k <= n; k++)
  {
    ik = mod((module(max(i * (k+5), j * (k+6))) - module(min(j * (k+7), l * (k+8)))), 20); 
    jk = mod(((3 - sign(i - j)) * module(mins(i * l + 5, j * l - 3, i * j + 6))), 25) - 7;
    lk = mod(i, 10) + mod(j, 10) + mod(l, 10);
    if(ik < 15 && ik > 5 && jk < -5 && jk > -15)
    {
      printf("%s %d %s %d %d %s %d %s", "Точка попала в область, шаг попадания:",k ,"\nЕё координаты:", i, j, "\nДинамический параметр движения:", l, "\n");
      k = 52;
      m = 1;
    }
    i = ik;
    j = jk;
    l = lk;
  }
  if (m == 0)
  {
    int h = 51;
    printf("%s %d %d %s %d %s %d", "Точка не попала в область, её коориднаты ", i, j, "\nНомер шага ", h, "\nДинамический параметр движения ", l);
  }
  return 0;
}
