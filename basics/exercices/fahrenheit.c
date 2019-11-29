#include <stdio.h>

int main(void) {
  float input, output;
  printf("Please enter a number (temperature in fahrenheit)\n");
  scanf("%f", &input);
  output = 0.55556*(input-32);
  printf("That is roughly equal to %f° Celcius \n", output);
  return 0;
}