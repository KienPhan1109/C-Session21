#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char c;
    FILE *f;
    f = fopen("File/bt01.txt", "r");
    c = fgetc(f);
    printf("%c", c);
    system("pause");
}