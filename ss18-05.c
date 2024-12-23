#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[100];
    int age;
    char phoneNumber[15];
};

void Info(struct Student students[], int amount, int found) {
    for (int i = 0; i < amount; i++) {
        if (students[i].id == found) {
            printf("Nhap ten sinh vien: ");
            getchar();  
            fgets(students[i].name, sizeof(students[i].name), stdin);
            students[i].name[strcspn(students[i].name, "\n")] = 0;  
            printf("Nhap tuoi sinh vien: ");
            scanf("%d", &students[i].age);
            return;
        }
    }
    printf("Khong tim thay sinh vien voi id %d\n", found);
}
void List(struct Student students[], int amount) {
    for (int i = 0; i < amount; i++) {
        printf("ID: %d, Ten: %s, Tuoi: %d, So dien thoai: %s\n", 
               students[i].id, students[i].name, students[i].age, students[i].phoneNumber);
    }
}
int main() {
    struct Student students[50] = {
        {1, "A", 10, "12345"},
        {2, "B", 11, "23456"},
        {3, "C", 12, "34567"},
        {4, "D", 13, "45678"},
        {5, "E", 14, "56789"}
    };

    int found;
    printf("Nhap id sinh vien can sua: ");
    scanf("%d", &found);
    Info(students, 5, found);
    List(students, 5);

    return 0;
}
