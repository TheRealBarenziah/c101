#include <stdio.h>
#include <math.h>

/*
Ball freefall from the top of a building
After 't' seconds, ball fall from height h:

h =1/2g.t^2
g = 9.81 (in m.s^-2)

Need:
- function returning the height of the fall after 't' input
- function calculating total duration of the fall providing the 'h' height input

(tip: sqrt() de math.l = square)

*/

float height_of_fall(float t){
  float g=9.81, output;
  output = 0.5*g*t*t;
  return output;
}

float time_of_fall(float h){
  float g=9.81, output;
  output = sqrt(2/g*h);
  // t=sqrt(2/g*h)
  return output;
}

int main(void) {
  float output, input1;
  // printf("Please enter a number of seconds for the time of the fall \n");
  printf("Please enter height of the fall :  \n");
  scanf("%f", &input1);
  output = time_of_fall(input1);
  printf("The ball falled %f seconds \n", output);
  return 0;
}