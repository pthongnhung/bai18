#include<stdio.h> 
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
		{5,"vu thi ngoc ",22,"046378283"}
	};
	int found=0;
	char nameTosearch[50];
	int currentCount=5; 
	printf("Moi ban nhap ten cua sinh vien can xoa: ");
	fgets(nameTosearch,sizeof(nameTosearch),stdin);
	for(int i=0;i<strlen(nameTosearch);i++ ){
	    	if(nameTosearch[strlen(nameTosearch)-1]=='\n'){
	 	    	nameTosearch[strlen(nameTosearch)-1]='\0';
	    	 }
	     }
	for(int i=0;i<5;i++){
		if(strcmp(students[i].name, nameTosearch) == 0){
			found=1; 
			for(int j=i;j<currentCount-1;j++){
				students[j]=students[j+1];
				currentCount--; 
				break; 
			}
			
		}
	}
	if(found==0){
		printf("khong ton tai sinh vien\n"); 
	}else{
		printf("mang sau khi xoa sinh vien\n");
		for(int i=0;i<currentCount;i++){
	    	printf("thong tin cua sinh vien %d\n",i+1);
	    	printf("id: %d\n",students[i].id);
	    	printf("ten: %s\n",students[i].name);
		    printf("tuoi: %d\n",students[i].age);
		    printf("so dien thoai: %s\n",students[i].phone);
	    	}
	} 
	return 0; 
}
