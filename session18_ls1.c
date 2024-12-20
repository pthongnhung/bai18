#include<stdio.h>
struct student{
	char name[50];
	int age;
	char phoneNumber[50];
};
int main(){
	struct student user={"pham thi hong nhung",18,"012345678"};
	printf("Thong tin cua sinh vien la\n");
	printf("ten: %s\n",user.name);
	printf("tuoi: %d\n",user.age);
	printf("sdt: %s\n",user.phoneNumber);
	return 0;
}
