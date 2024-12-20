#include<stdio.h> 
#include<string.h> 
struct student{
	int id; 
	char name[50];
	int age;
	char phoneNumber[50];
}; 
int main(){
	struct student students[50];
	for(int i=0;i<5;i++){
		students[i].id=i+1;
		printf("moi ban nhap thong tin cua sinh vien %d\n",i+1);
		printf("ten: ");
		fgets(students[i].name,sizeof(students[i].name),stdin);
		for(int j=0;j<strlen(students[i].name);j++){
			if(students[i].name[strlen(students[i].name)-1] == '\n'){
				students[i].name[strlen(students[i].name)-1]='\0';
			}
		}
		printf("tuoi: ");
		scanf("%d",&students[i].age);
		fflush(stdin);
		printf("so dien thoai: ");
		fgets(students[i].phoneNumber,sizeof(students[i].phoneNumber),stdin);
		}
		for(int i=0;i<5;i++){
		printf("thong tin cua sinh vien %d\n",i+1);
		printf("id: %d\n",students[i].id);
		printf("ten: %s\n",students[i].name);
		printf("tuoi: %d\n",students[i].age);
		printf("so dien thoai: %s\n",students[i].phoneNumber);
		}
	return 0;  	
}
