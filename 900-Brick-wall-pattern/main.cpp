#include <cstdio>

long brick (long n)
{
  long a = 1, b = 2, c, i;
  if(n < b)
    return a;
  for (i = 2; i < n; i++)
  {
     c = a + b;
     a = b;
     b = c;
  }
  return b;
}
 
int main ()
{
  long n;
  while (scanf("%li", &n) == 1) {
    if (n == 0) break;
    printf("%li\n", brick(n));
  }
  return 0;
}