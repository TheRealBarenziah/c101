# C 101
### Notes & playground for JS kiddies such as myself

![Me](https://i.ibb.co/6YNq9XP/clol.png)

## Compile into bin (executable)
- O) Get `gcc`
- I) Write a `foo.c` file
- II) `gcc -Wall foo.c -o foo` (`-Wall` will display all Warnings, `foo.c` is target file, `-o foo` will output an executable named `foo`)
- III) Now run executable in terminal: `./foo`

## Compile into pure WASM
- O) `sudo apt-get install python2.7 && sudo apt-get install cmake && sudo apt-get install default-jre && sudo apt-get install git-core`
- I) Get [emsdk](https://emscripten.org/docs/getting_started/downloads.html#platform-specific-notes)
- II) Put this in your ~/.bashrc: `source $HOME/emsdk/emsdk_env.sh &> /dev/null`
- III) Return to the path of your `foo.c`
- IIII) `emcc fibo.c -s WASM=1 -o fibo.html` (`fibo.c` is target, `-s` tells *emcc* to generate LLVM bitcode, `WASM=1` WASM=true, `-o fibo.html` output an HTML file named fibo)
- V) Example incoming

## Compile into WASM w/ JavaScript glue (EMCSCRIPTEN_KEEPALIVE)
[Incoming][2]  
[...][3]

## Resources

[1]: https://github.com/mbasso/awesome-wasm#javascript-family
[2]: https://tutorialzine.com/2017/06/getting-started-with-web-assembly
[3]: https://flaviocopes.com/webassembly/