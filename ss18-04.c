#include <stdio.h>

struct Student {
    int id;
    char name;
    int age[100];
    char phoneNumber[15];
};
int main() {
    struct Student users[50];
    for (int i = 0; i < 5; i++) {
        students[i].id = i + 1;
        printf("\nNhap thong tin cho sinh vien %d:\n", i + 1);
        printf("Nhap ten: ");
        scanf("%s", &users[i].name);
        printf("Nhap tuoi: ");
        scanf("%d", &users[i].age);
        printf("Nhap so dien thoai: ");
        scanf("%s", &users[i].phoneNumber);
    }
    for (int i = 0; i < 5; i++) {
        printf("Sinh vien %d:\n", i + 1);
        printf("ID: %d\n", users[i].id);
        printf("Ten: %s\n", users[i].name);  
        printf("Tuoi: %d\n", students[i].age);
        printf("So dien thoai: %s\n", users[i].phoneNumber);
    }

    return 0;
}
