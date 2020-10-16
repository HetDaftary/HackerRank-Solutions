#include <stdio.h>

// We are just including the main function here.
int main() {
    char* N_endptr;
    char* N_str = readline();
    int N = strtol(N_str, &N_endptr, 10);

    if (N_endptr == N_str || *N_endptr != '\0') { exit(EXIT_FAILURE); }

    if ((N%2 == 1 &&N > 1 && N < 6) || (N%2 == 0 && N > 5 && N < 21) || (N%2 == 1 && N > 20)) {
        printf("Weird");
    } else {
        printf("Not Weird");
    }

    return 0;
}
