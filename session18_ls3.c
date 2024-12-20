#include<stdio.h> 
struct student{
	char name[50];
	int age;
	char phoneNumber[50];
}; 
int main(){
	struct student user[5];
	printf("Moi nhap thong tin cua cac sinh vien\n");
	for(int i=0;i<5;i++){
		printf("moi nhap thong tin cua sinh vien thu %d\n",i+1);
		printf("ten: ");
		fgets(user[i].name,sizeof(user[i].name),stdin);
		for(int j=0;j<strlen(user[i].name);j++){
			if(user[i].name[strlen(user[i].name)-1]=='\n' ){
				user[i].name[strlen(user[i].name)-1] ='\0';
			} 
		}
		printf("tuoi: ");
		scanf("%d",&user[i].age);
		fflush(stdin);
		printf("so dien thoai: ");
		fgets(user[i].phoneNumber,sizeof(user[i].phoneNumber),stdin);
	}
	for(int i=0;i<5;i++){
	printf("thong tin cua sinh vien thu %d\n",i+1);
	printf("ten: %s\n",user[i].name);
	printf("tuoi: %d\n",user[i].age);
	printf("sdt: %s\n",user[i].phoneNumber); 
	}
	return 0; 
}
