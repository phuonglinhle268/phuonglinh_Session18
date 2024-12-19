#include <stdio.h>

struct Student{
	char name;
	int age[100];
	char phoneNumber[15];
};
int main(){
	struct Student users[5];
	for (int i = 0; i < 5; i++){
		printf("Nhap thong tin cho sinh vien: %d\n", i + 1);
		printf("Nhap ten: ");
        scanf("%s", &users[i].name);
        printf("Nhap tuoi: ");
        scanf("%d", &users[i].age);
        printf("Nhap so dien thoai: ");
        scanf("%s", &users[i].phoneNumber);
        getchar();  
    }
    for (int i = 0; i < 5; i++) {
        printf("\nSinh vien %d:\n", i + 1);
        printf("Ten: %s\n", users[i].name); 
        printf("Tuoi: %d\n", users[i].age);
        printf("So dien thoai: %s\n", users[i].phoneNumber);
    }

    return 0;
}

