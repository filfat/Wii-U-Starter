#include <stdio.h>
#include "main.h"

void __main(int argc, char **argv) {
    OSFatal("Hello World!");
}

extern "C" {
    int _main(int argc, char **argv) {
        __main(argc, argv);
        return 0;
    }
}