#pragma once
#include "coreinit.h"

void __main(int argc, char **argv);
#ifdef __cplusplus
extern "C" {
#endif
    int _main(int argc, char **argv) {
        __main(argc, argv);
        return 0;
    }
    void _osscreeninit();
    void _printstr(char *str);
    void _osscreenexit();
#ifdef __cplusplus
}
#endif