## Labels

`type identifier;`
Declare uninitialized variable.
`type identifier = value;`
Declare variable initialized with value.
`type identifier, identifier2 = value;`
Declare two variables of a certain type; only `identifier2` is initialized.

## Primitives types
- `int` : 32-bit integer (min = -2147483648, max = 2147483647)
- `float` : 32-bit float
- `double`: 64-bit float (heavier, more precise float)
- `char`: 8-bit [signed integer][1] representing ASCII code for characters (from -126 to 125) (1)
- `unsigned int`: 32-bit positive integer (min = 0, max = 4294967295)
- `unsigned char`: 8-bit positive Integer (min = 0, max = 255)

![CreditsToGeekforGeeks](https://miro.medium.com/max/1236/1*nxvDj8VA-qtQ_ILoZQgaCg.jpeg)

## Affectation
```c
int var1 = 0, var2=3; // declare & initialize var1 & var2 integers
var1=2*var2+1 // affect: var2 value is now 7
```

## Conversion
```c
unsigned char c;
unsigned int n = 321;
c = (unsigned char)n;
// c value is now 65 (321 % 256) (2)
// in ASCII that means c is now 'A'
```

## Import libraries
Far from `npm install x` `var x = require('x')`.  
The `require('lib')` is somewhat equivalent to `include <lib>`  
However you also have to explicitly tell `gcc` what it needs to import  
[See this for details][4]


## Arrays
[Dynamic arrays in C][3] (tl;dr : arrays are fixed size in C, so you gotta DIY)  

(1) : So `char x = 'Z'` is equivalent to `char x = 90`, 90 being the ASCII code for 'Z'  
(2) : 256 come from the number of different values an `unsigned char` can hold  

[1]: https://stackoverflow.com/questions/247873/signed-versus-unsigned-integers
[2]: https://medium.com/@nickteixeira/how-to-explain-to-my-wife-what-i-do-how-do-you-get-the-maximum-and-minimum-values-for-integer-befdc263a3a2
[3]: https://medium.com/@imjacobclark/working-with-dynamic-arrays-in-c-c7d40a3cea01
[4]: https://github.com/TheRealBarenziah/c101/blob/master/basics/exercices/f_of_x.c