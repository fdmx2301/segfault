#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

void signal_handler(int signal) {
    if (signal == SIGSEGV) {
        fprintf(stderr, "Caught segmentation fault (signal %d)\n", signal);
        exit(EXIT_FAILURE);
    }
}

void setup_signal_handler() {
    if (signal(SIGSEGV, signal_handler) == SIG_ERR) {
        perror("signal");
        exit(EXIT_FAILURE);
    }
}

void cause_segfault() {
    int *ptr = NULL;
    *ptr = 1;  // Will cause segmentation fault
}

int main() {
    setup_signal_handler();
    cause_segfault();
    return 0;
}
