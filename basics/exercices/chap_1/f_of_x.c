#include <stdio.h>
#include <math.h>

/* 
f(x) = (2*x + 3)(3*x² + 2) 

f'(x) = (f(x+h)-f(x)) / h
*/

float f_of_x(int x){
  float output;
  output = (2 * x + 3) * (3 * pow(x, (float)2) + 2);
  return output;
}

float f_of_xh(int x, int h){
  return x + h;
}

float f_prime_of_x(int x, int h){
  float output;
  output = (f_of_xh(x, h) - f_of_x(x)) / h;
  return output;
}

int main(void){
  float input_x, input_h, output;
  printf("(f(x+h)-f(x))/h \n");
  printf("Please enter x : \n");
  scanf("%f", &input_x);
  printf("Please enter h : \n");
  scanf("%f", &input_h);
  output = f_prime_of_x(input_x, input_h);
  printf("f'(x) = %f \n", output);
  return 0;
}

/* !!! this won't compile without `-lm` flag
else pow() is undefined

"Including math.h brings in the declaration of the various functions and not their definition. 
The def is present in the math library libm.a. 
You need to link your program with this library so that the calls to functions like pow() are resolved."

Source: https://stackoverflow.com/questions/12824134/undefined-reference-to-pow-in-c-despite-including-math-h


!important !important !important

For gcc, `-l` stands for "Link library..."
`-lm` is for "Link the math library"

... tbh, coming from "var func = require('lib')" node_module world, it was a little WTF moment

Even more WTF is the fact -lm is actually syntax sugar !!!
Under the hood, it tells gcc to go for `/usr/lib/libm.a`

Maybe libm.a is somewhere else; paths gcc search are not random and can be displayed with : 

`gcc -print-search-dirs`

"You can add more library search paths by using the "-L /path" option.
In those paths, it first searches for "dynamic libraries" which are named with a ".so" extension. 
It then searches for static libraries with a ".a" extension. It always adds "lib" to the front of the name."

Source: https://stackoverflow.com/a/3907759/11894221

Also in same thread: 
"The compiler "knows" to look for libm.a (or libm.so) when you pass it the option -lm, 
because that's how the -l option is documented and implemented: 
Take the characters following -l (here just m), prefix lib and suffix .a to get libm.a"

So it is NOT black magic: it's actually meaningful. node_modules will never feel the same.

*/
