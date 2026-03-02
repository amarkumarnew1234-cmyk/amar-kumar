#include<stdio.h>
struct Book {
    int id;
    char title[50];
    char author[50];
    float price;
};
void print(struct Book b) {
    printf("Book ID:%d\n",b.id);
    printf("Title:%s\n",b.title);
    printf("Author:%s\n",b.author);
    printf("Price:%.2f\n",b.price);
}
int main() {
    struct Book b;
    printf("Enter book id:");
    scanf("%d",&b.id);
    printf("Enter title:");
    scanf("%s",b.title);
    printf("Enter author:");
    scanf("%s",b.author);
    printf("Enter price:");
    scanf("%f",&b.price);
    print(b);
    return 0;
}
