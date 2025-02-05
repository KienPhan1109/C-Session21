#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char c[100];
    FILE *f;
    f = fopen("File/bt01.txt", "r");
    fgets(c, 100, f);
    printf("%s", c);
    system("pause");
}