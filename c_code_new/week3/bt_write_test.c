#include <unistd.h>

int main(void)
{
    char c = 'X';
    char *word = "Hello";

    write(1, &c, 1);        // 1 byte from &c -> 'X'
    write(1, "\n", 1);      // newline

    write(1, word, 5);      // 5 bytes from word -> 'Hello'
    write(1, "\n", 1);

    write(1, word, 3);      // 3 bytes from word -> 'Hel'
    write(1, "\n", 1);

    return (0);
}