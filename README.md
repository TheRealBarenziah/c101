# C 101
## Notes & playground for JS kiddies such as myself

![Me](https://i.ibb.co/PFq8Lph/c.png)

## Compile into bin (executable)
- 0) Get `bash`, `gcc` and the gang.
- 1) Write a `foo.c` file
- 2) `gcc -Wall foo.c -o foo`
- `-Wall` will display all Warnings.
- `foo.c` is the target file
- `-o foo` will output an executable named `foo`
- 3) Now run the executable in terminal: `./foo`

## Compile into WASM
- 0) `sudo apt-get install python2.7 && sudo apt-get install cmake && sudo apt-get install default-jre && sudo apt-get install git-core`
- 1) Get [emsdk](https://emscripten.org/docs/getting_started/downloads.html#platform-specific-notes)
- 2) Put this in your `.bashrc`: `source $HOME/emsdk/emsdk_env.sh &> /dev/null` ( &> /dev/null is to mute the annoying output)
- 3) Return to the path of your `foo.c`
- 4) `emcc fibo.c -s WASM=1 -o fibo.html`
- `fibo.c` is the target file
- `-s` lells *emcc* to generate LLVM bitcode
- `WASM=1` output Web Assembly
- `-o fibo.html` will output an HTML page named fibo