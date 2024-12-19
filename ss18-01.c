#include <stdio.h>

struct Student{
	char name;
	int age[100];
	char phone[15];
};
int main() {
	struct Student user = {"Linh", 18, 123456
	};
	printf("Ten: %s\n", user.name);
	printf("Tuoi: %d\n", user.age);
	printf("So dien thoai: %s\n", user.phone);
	
	return 0;
}
