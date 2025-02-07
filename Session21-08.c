#include <stdio.h>
#include <stdlib.h>

#define MAX 100

struct Students
{
    int id;
    char name[100];
    int age;
};

int main(){
    struct Students Student[MAX];
    FILE *f = fopen("File/students.txt", "r");
    int i = 0;
    while (fscanf(f, "%d %s %d", &Student[i].id, Student[i].name, &Student[i].age) == 3)
    {
        printf("%d %s %d\n", Student[i].id, Student[i].name, Student[i].age);
        i++;
    }

    fclose(f);
    system("pause");
    return 0;
}