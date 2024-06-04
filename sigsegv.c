#include <stdio.h>
#include <signal.h>
#include <stdlib.h>

void signal_handler(int signum) {
    printf("Received SIGISEGV signal (%d)\n", signum);
    exit(0);
    // Recovering from an illegal instruction is often difficult
}

int main() {
    // Registering a signal handler for SIGILL (not recommended)
    signal(SIGSEGV, signal_handler);

    // Code that might cause SIGILL (e.g., dereferencing a null pointer)
    int *ptr = NULL;
    *ptr = 10; // This might trigger SIGILL

    return 0;
}
