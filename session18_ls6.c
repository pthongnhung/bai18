#include<stdio.h> 
#include<string.h> 
struct student{
	int id;
	char name[50];
	int age;
	char phone[50];
}; 
int main(){
	struct student students[50]={
		{1,"pham thi hong nhung",18,"0473388432"},
		{2,"nguyen cong minh" ,19,"047583723"},
		{3,"vu thi ngoc huyen",20,"046378283"},
		{4,"vu thi mai",21,"046378283"},
		{5,"vu thi ngoc ",22,"046378283"},
	};
	int currentCount=5; 
	struct student newStudent;
    	newStudent.id=currentCount+1;
    	 printf("Moi ban nhap thong tin can them cho sinh vien moi\n");
    	 printf("ten: ");
    	 fgets(newStudent.name,sizeof(newStudent.name),stdin);
	    for(int i=0;i<strlen(newStudent.name);i++ ){
	    	if(newStudent.name[strlen(newStudent.name)-1]=='\n'){
	 	    	newStudent.name[strlen(newStudent.name)-1]='\0';
	    	 }
	     }
	    printf("tuoi: ");
  	    scanf("%d",&newStudent.age);
	    fflush(stdin);
        printf("so dien thoai: ");
	    fgets(newStudent.phone,sizeof(newStudent.phone),stdin);
	   students[currentCount]= newStudent;
	   currentCount++;
	   printf ("mang sau khi them thanh vien");
	   for(int i=0;i<currentCount;i++){
	   		printf("thong tin cua sinh vien %d\n",i+1);
	    	printf("id: %d\n",students[i].id);
	    	printf("ten: %s\n",students[i].name);
		    printf("tuoi: %d\n",students[i].age);
		    printf("so dien thoai: %s\n",students[i].phone);
	   }
	return 0; 
}
