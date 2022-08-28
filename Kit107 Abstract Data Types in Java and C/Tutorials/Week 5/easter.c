#include <stdio.h>
void easter(int year, char **month, int *day)
{
  char *months[] = {"January", "February", "March", "April ", "May", "June", "July", "August", "September", "October", "November", "December"};
  int a, b, c, d, e, f, g, h, i, k, l, m;
  int mon;
  
  a = year % 19;
  b = year / 100;
  c = year % 100;
  d = b / 4;
  e = b % 4;
  f = (b + 8) / 25;
  g = (b - f + 1) / 3;
  h = (19 * a + b - d - g + 15) % 30;
  i = c / 4;
  k = c % 4;
  l = (32 + 2 * e + 2 * i - h - k) % 7;
  m = (a + 11 * h + 22 * l) / 451;
  mon = (h + l - 7 * m + 114) / 31;
  *month = months[mon - 1];
  *day = ((h + l - 7 * m + 114) % 31) + 1;
}
int main(int argc, char *argv[])
{
  int my_year, my_day;
  char *my_month;

  printf("Please enter the year: ");
  scanf("%d", &my_year);
  easter(my_year, &my_month, &my_day);
  printf("Easter in %d is/was %s %d\n", my_year,
      my_month, my_day);

  getchar();
  return 0;
}