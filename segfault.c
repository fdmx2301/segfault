#include <signal.h>

void cause_segfault() {
    raise(SIGSEGV);
}