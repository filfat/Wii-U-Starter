#pragma once
#include "coreinit.h"

#ifdef __cplusplus
extern "C" {
#endif
    int _main(int argc, char **argv);
    void _osscreeninit();
    void _printstr(char *str);
    void _osscreenexit();
#ifdef __cplusplus
}
#endif