ocaml-main-program-in-c
=======================

Example build system for making mixed C/Ocaml binaries where the main program
is in C.

Should work on Unixes and Windows mingw.

Consists of three bash files: `build`, `clean`, and `generic`.

1. Edit `build` as appropriate

2. Run `build`. This builds the static and dynamic library (if on Windows) and
   test links them. It outputs the linker and link flags used for static
   building.

3. Run `clean` to clean up everything except the executable(s)

For example, as shipped, we build libprog.a and (on windows) libprog.dll.

