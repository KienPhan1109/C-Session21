#include <stdio.h>
#include <stdlib.h>

struct Students
{
    int id;
    char name[100];
    int age;
};

int main(){
    int n;
    printf("Nhập vào số lượng sinh viên: ");
    scanf("%d", &n);
    struct Students Student[n];
    for (int i = 0; i < n; i++)
    {
        fflush(stdin);
        printf("Nhập vào thông tin sinh viên thứ %d: ", i + 1);
        printf("\n");
        printf("Nhập vào ID sinh viên: ");
        scanf("%d", &Student[i].id);
        printf("Nhập vào tên sinh viên: ");
        getchar();
        gets(Student[i].name);
        printf("Nhập vào tuổi sinh viên: ");
        scanf("%d", &Student[i].age);
    }
    FILE *f = fopen("File/students.txt", "w");
    for (int i = 0; i < n; i++)
    {
        fprintf(f, "%d %s %d\n", Student[i].id, Student[i].name, Student[i].age);
    }
    fclose(f);
    system("pause");
}