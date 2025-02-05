#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char c[100];
    printf("Nhập vào một chuỗi: ");
    gets(c);
    FILE *f;
    f = fopen("File/bt01.txt", "w");
    fprintf(f, "%s", c);
    system("pause");
}