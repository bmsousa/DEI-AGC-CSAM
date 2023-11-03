These instructions lead you through setup and fuzzing of a sample program.


# The `vulnerable` program

Build our quickstart program using the instrumented compiler:

    $ cd quickstart
    $ CC=afl-clang-fast AFL_HARDEN=1 make

Test it:

    $ ./vulnerable
    # Press enter to get usage instructions.
    # Test it on one of the provided inputs:
    $ ./vulnerable < inputs/u

# Fuzzing

Fuzz it:

    $ afl-fuzz -i inputs -o ~/ramfs_output/quickstart_out/ ./vulnerable

For comparison you could also test without the provided example inputs, e.g.:

    $ mkdir in
    $ echo "my seed" > in/a
    $ afl-fuzz -i in -o ~/ramfs_output/quickstart_out/ ./vulnerable
