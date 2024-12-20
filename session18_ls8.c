#include<stdio.h>
#include<string.h>  
struct student {
    int id;
    char name[50];
    int age;
    char phone[50];
};
int main() {
    struct student students[50] = {
        {1, "Pham Thi Hong Nhung", 18, "0473388432"},
        {2, "Nguyen Cong Minh", 19, "047583723"},
        {3, "Vu Thi Ngoc Huyen", 20, "046378283"},
        {4, "Vu Thi Mai", 21, "046378283"},
        {5, "Vu Thi Ngoc", 22, "046378283"}
    };
    int currentCount = 5;  
    struct student newStudent;  
    int position;  
    printf("Moi ban nhap vi tri de chen sinh vien: ");
    scanf("%d", &position);
    if (position < 0 || position > currentCount) {
        printf("Vi tri chen khong hop le!\n");
        return 1;
    }
    printf("Nhap thong tin sinh vien can chen:\n");
    printf("ID: ");
    scanf("%d", &newStudent.id);
    fflush(stdin);  
    printf("Ten: ");
    fgets(newStudent.name, sizeof(newStudent.name), stdin);
    newStudent.name[strcspn(newStudent.name, "\n")] = '\0';  
    printf("Tuoi: ");
    scanf("%d", &newStudent.age);
    fflush(stdin);
    printf("So dien thoai: ");
    fgets(newStudent.phone, sizeof(newStudent.phone), stdin);
    newStudent.phone[strcspn(newStudent.phone, "\n")] = '\0';  
    for (int i = currentCount; i > position; i--) {
        students[i] = students[i - 1];  
    }
    students[position] = newStudent;
    currentCount++;  
    printf("\nDanh sach sinh vien sau khi chen:\n");
    for (int i = 0; i < currentCount; i++) {
        printf("Thong tin cua sinh vien %d:\n", i + 1);
        printf("ID: %d\n", students[i].id);
        printf("Ten: %s\n", students[i].name);
        printf("Tuoi: %d\n", students[i].age);
        printf("So dien thoai: %s\n", students[i].phone);
    }

    return 0;
} 
