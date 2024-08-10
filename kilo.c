#include <unistd.h>

int main() {
    char c;
    while (read(STDIN_FILENO, &c, 1) == 1 && c != 'q');//reads from standard input 1 char at a time, stops when it reads a q
    return 0;
}
