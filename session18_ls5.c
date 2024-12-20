#include<stdio.h>
struct student{
	int id;
	char name[50];
	int age;
	char phone[50];
}; 
int main(){
	struct student students[50]={
		{1, "Nguyen Thi A", 20, "0901234567"},
        {2, "Tran Minh B", 22, "0912345678"},
        {3, "Le Thi C", 21, "0923456789"},
        {4, "Pham Minh D", 23, "0934567890"},
        {5, "Hoang Thi E", 24, "0945678901"}
	};
	int found=0;
	int idTosearch; 
	printf("moi ban nhap id cua sinh vien can chinh sua ");
	scanf("%d",&idTosearch);
	fflush(stdin);
	for(int i=0;i<5;i++){
		if(students[i].id==idTosearch){
			found=1; 
			printf("da tim thay sinh vien co id la %d\n",idTosearch);
			printf("id: %d\n",students[i].id);
	    	printf("ten: %s\n",students[i].name);
	    	printf("tuoi: %d\n",students[i].age);
	    	printf("so dien thoai: %s\n",students[i].phone);
	    	printf("moi ban nhap thong tin can sua\n");
	    	printf("nhap ten moi: ");
	    	fgets(students[i].name,sizeof(students[i].name),stdin);
	    	for(int j=0;j<strlen(students[i].name);j++){
		    	if(students[i].name[strlen(students[i].name)-1] == '\n'){
				students[i].name[strlen(students[i].name)-1]='\0';
		    	}
		    }
		    fflush(stdin);
			printf("nhap tuoi moi: ");
			scanf("%d",&students[i].age);
			fflush(stdin);
		} 
	}
	if(found==0){
			printf("khong tim thay sinh vien\n");
		}else{
	    	for(int i=0;i<5;i++){
	    	printf("thong tin cua sinh vien %d\n",i+1);
	    	printf("id: %d\n",students[i].id);
	    	printf("ten: %s\n",students[i].name);
		    printf("tuoi: %d\n",students[i].age);
		    printf("so dien thoai: %s\n",students[i].phone);
	    	}
     }
	 
	return 0; 
}
