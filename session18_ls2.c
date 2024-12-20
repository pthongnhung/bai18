#include<stdio.h>
struct student{
	char name[50];
	int age;
	char phoneNumber[50];
}; 
int main(){
	struct student user;
	printf("moi ban nhap cac thong tin cua sinh vien\n");
	printf("ten: ");
	fgets(user.name,sizeof(user.name),stdin);
	int length=strlen(user.name);
	for(int i=0;i<length;i++){
		if(user.name[length-1]=='\n'){
			user.name[length-1]='\0'; 
		}
	}
	printf("tuoi: ");
	scanf("%d",&user.age);
	fflush(stdin);
	printf("so dien thoai: ");
	fgets(user.phoneNumber,sizeof(user.phoneNumber),stdin);
	printf("thong tin cua sinh vien\n");
	printf("ten: %s\n",user.name);
	printf("tuoi: %d\n",user.age);
	printf("sdt: %s\n",user.phoneNumber);
	return 0;
}
