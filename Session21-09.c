#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100

struct books
{
    int id_book;
    char name_book[30];
    char author_book[30];
    int price_book;
    char type_book[10];
};

struct books book[MAX];

void menu(){
    printf("\nMENU\n");
    printf("1. Nhập số lượng và thông tin sách\n");
    printf("2. Lưu thông tin sách vào file\n");
    printf("3. Lấy thông tin sách từ file\n");
    printf("4. Hiển thị thông tin sách\n");
    printf("5. Thoát\n");
}

int choice(){
    int n;
    printf("Nhập lựa chọn của bạn: ");
    scanf("%d", &n);
    return n;
}

int inputBooks(){
    printf("Nhập vào số lượng sách: ");
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("\n");
        printf("Nhập vào thông tin sách thứ %d:\n", i + 1);
        printf("Nhập id sách: ");
        scanf("%d", &book[i].id_book);
        printf("Nhập vào tên sách: ");
        getchar();
        gets(book[i].name_book);
        printf("Nhập vào tên tác giả: ");
        getchar();
        gets(book[i].author_book);
        printf("Nhập vào giá sách: ");
        scanf("%d", &book[i].price_book);
        printf("Nhập vào thể loại sách: ");
        getchar();
        gets(book[i].type_book);
    }
    return n;
}

void saveFile(int n){
    FILE *f = fopen("File/books.bin", "wb");
    fwrite(book, sizeof(struct books), n, f);
    printf("Lưu thông tin sách thành công\n");
    fclose(f);
}

void readFile(int n){
    FILE *f = fopen("File/books.bin", "rb");
    fread(book, sizeof(struct books), n, f);
    printf("Đọc thông tin sách thành công\n");
    fclose(f);
}

void displayBooks(int n){
    for (int i = 0; i < n; i++)
    {
        printf("Id sách: %d\n", book[i].id_book);
        printf("Tên sách: %s\n", book[i].name_book);
        printf("Tên tác giả: %s\n", book[i].author_book);
        printf("Giá sách: %d\n", book[i].price_book);
        printf("Thể loại sách: %s\n", book[i].type_book);
        printf("\n");
    }
}

int main(){
    int c, n;  
    while (1)
    {
        menu();
        c = choice();
        switch (c)
        {
        case 1:
            n = inputBooks();
            break;
        
        case 2:
            saveFile(n);
            break;

        case 3:
            readFile(n);
            break;

        case 4:
            displayBooks(n);
            break;

        case 5:
            return 0;

        default:
            printf("Lựa chọn không hợp lệ\n");
            break;
        }
    }
    system("pause");
}
