#include <stdio.h>

struct Student{
	char name;
	int age[100];
	char phoneNumber[15];
};
int main() {
	struct Student user;
	printf("Nhap ten: ");
	scanf("%s", &user.name);
	printf("Nhap tuoi sinh vien: ");
	scanf("%d", &user.age);
	printf("Nhap so dien thoai: ");
	scanf("%s", &user.phoneNumber);
	printf("Ten: %s\n", user.name);
	printf("Tuoi: %d\n", user.age);
	printf("So dien thoai: %s\n", user.phoneNumber);
	return 0;
}
