#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[100];
    int age;
    char phoneNumber[20];
};
void add(struct Student students[], int *amount) {
    if (*amount >= 50) {
        printf("Khong the them sinh vien, mang da day!\n");
        return;
    }
    
    struct Student newStudent;
    
    printf("Nhap id sinh vien: ");
    scanf("%d", &newStudent.id);
    getchar(); 
    printf("Nhap ten sinh vien: ");
    fgets(newStudent.name, sizeof(newStudent.name), stdin);
    newStudent.name[strcspn(newStudent.name, "\n")] = 0; 
    printf("Nhap tuoi sinh vien: ");
    scanf("%d", &newStudent.age);
    
    printf("Nhap so dien thoai sinh vien: ");
    getchar(); 
    fgets(newStudent.phoneNumber, sizeof(newStudent.phoneNumber), stdin);
    newStudent.phoneNumber[strcspn(newStudent.phoneNumber, "\n")] = 0; 
    students[*amount] = newStudent;
    (*amount)++; 
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
    int amount = 5;  
    add(students, &amount);
    printf("Danh sach sinh vien sau khi them:\n");
    List(students, amount);

    return 0;
}
