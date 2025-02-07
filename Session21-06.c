#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *fcopy = fopen("File/bt01.txt", "r");
    FILE *fpaste = fopen("File/bt06.txt", "w");
    char s[100];
    while (fgets(s, 100, fcopy) != NULL)
    {
        fputs(s, fpaste);
    }
    fclose(fcopy);
    fclose(fpaste);
    system("pause");
}