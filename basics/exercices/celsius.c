#include <stdio.h>

int main(void) {
  float input, output;
  printf("Please enter a number (temperature in celsius)\n");
  scanf("%f", &input);
  output = input*9/5+32;
  printf("That is roughly equal to %f° Fahrenheit \n", output);
  return 0;
}