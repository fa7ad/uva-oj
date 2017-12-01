#include <cstdio>
#include <cstdlib>
#include <cstring>

int main() {
  int n;
  while (scanf("%d", &n) == 1) {
    int a, b;
    int jolly = 1;
    int yet[3000];
    memset(yet, 1, sizeof(yet));
    scanf("%d", &b);
    for (int i = 1; i < n; i++) {
      a = b;
      scanf("%d", &b);
      int c = abs(b - a);
      if (c < n && yet[c])
        yet[c] = 0;
      else
        jolly = 0;
    }
    printf("%s\n", jolly ? "Jolly" : "Not jolly");
  }
  return 0;
}
