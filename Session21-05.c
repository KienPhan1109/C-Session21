#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *f;
    char s[100];
    int line;
    printf("Nhập vào số dòng: ");
    scanf("%d", &line);
    
    int i = 1;
    while (line > 0)
    {
        printf("Nhập vào dòng thứ %d: ", i);
        fflush(stdin);
        fgets(s, 100, stdin);
        s[strlen(s) - 1] = '\0';
        f = fopen("File/bt05.txt", "a");
        fprintf(f, "%s\n", s);
        fclose(f);
        i++;
        line--;
    }
    system("pause");
}