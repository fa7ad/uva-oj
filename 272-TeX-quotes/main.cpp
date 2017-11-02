#include <cstdio>

int main () {
  char c;
  bool style = true;

  while (scanf("%c", &c) != EOF) {
    if (c == '"') {
      printf("%s", style ? "``" : "''");
      style = !style;
    } else printf("%c", c);
  }

  return 0;
}