#include <stdio.h>

/* print Fahrenheit-Celcius table
   for fahr = 0, 20, ..., 300 */
int main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = -20;
  upper = 150;
  step = 10;

  celsius = lower;

  printf("%3s %6s\n", "°C", "°F");
  while (celsius <= upper) {
    fahr = (celsius * 9.0 / 5.0) + 32.0;
    printf("%3.0f %6.0f\n", celsius, fahr);
    celsius = celsius + step;
  }
}
