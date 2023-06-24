#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "Rus");

    int shift = 3;

    char buf[4096];
    gets(buf);
    for (size_t i = 0; i < strlen(buf); i++) {
        if (buf[i] > 96 && buf[i] < 123) {
            buf[i] = 97 + (((buf[i] - 97) + shift) % 26);
        }
    }

    printf("%s\n", buf);
    return 0;
}
