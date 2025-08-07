#include <stdio.h>

static char input[2048];

int main(int argc, char** argv) {
    /* Print Version and Exit Information*/
    puts("Lispy Version 0.0.0.0.1");
    puts ("Press Ctrl+c to exit\n");

    /* In never ending loop*/
    while (1) {
        /* output prompt*/
        fputs("lispy> ", stdout);

        /* Read a line of user input of maximum size 2048 */
        fgets(input, 2048, stdin);

        /* Echo input back to user */
        printf("No youre a %s", input);
    }
    return 0;
}