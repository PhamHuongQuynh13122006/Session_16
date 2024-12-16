//1
//Khai bao 1 bien va con tro cua bien do
//Dung 2 cach de in ra gia tri va dia chi cua bien da duoc khai bao
#include<stdio.h>
int main(){
    int a = 10;
    int *ptr = &a;
    printf("Value of a is : %d",*ptr);////
    printf("Address of a is: %d", ptr);
    printf("Value of a is : %d",a);
    printf("Address of a is : %d",&a);
    return 0;
}


//2
//Xay dung    ham    su dung con   tro    de doi gia tri 2 bien voi nhau
void Swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
#include<stdio.h>
int main(){
    //Khai bao va gan gia tri cho bien bat ky 
    int a = 10, b = 20; 
    //Goi ham va in 2 bien de kiem tra ket qua 
    printf("Value before change is : %d", a);
    printf("value before change is : %d", b);
    Swap(int a, int b);
    //In gia tri sau khi thay doi
    printf("Value after change is : %d", a);
    printf("value after change is : %d", b);
}


//3
//Xay dung ham su dung con tro de tinh tong hai so nguyen va luu gia tri vao bien ket qua
void ptr(int *a, int *b, int *Result){
    int sum = *a + *b;
    sum = *Result;
}
#include<stdio.h>
int main(){
    //Khai bao va gan gia tri cho 2 bien so nguyen bat ky and 1 bien ket qua
    int a = 10, b = 20;
    int Result;
    //Goi ham va in ket qua de kiem tra
    ptr(a,b,Result);
    printf("Total value of two integer are : %d", Result);
}


//4
#include<stdio.h>
//Xay dung ham co     tham so   la 1   mang    su dung    con tro   de in tat ca cac phan tu trong mang
void Funtion(int *arr, int n){
    for(int i = 0; i < n; i++){
        printf("%d\t",arr[i]);
    }
}
int main(){
//Khai bao va gan gia tri cho mang bat ky 
    int arr[] = {1,2,3,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(int);
//Goi ham de in ra tat ca cac phan tu trong mang da khai bao 
printf("Cac phan tu trong mang la : ");
Funtion(arr,n);
}


//5
#include<stdio.h>
 //Xay dung ham cap nhat phan tu co 3 tham so gom 1 mang
 //ktra dk cua phan tu mang 
 //ko hop le ko tra ve gia tri, hop le cap nhat gia tri moi
void Funtion(int *arr, int n,int pos, int value){
    if(pos>=n||pos<0){
        printf("Invalid position ^ ^");
        return;
    }
    arr[pos] = value;
}
 //Khai bao va gan gia tri cho mang bat ky 
int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(int);
 //Gia tri moi va vi tri can cap nhap
 int value,       pos;
 printf("Input position is (0-%d) :", n - 1);
 scanf("%d",&pos);
 printf("New value is : ");
 scanf("%d",&value);
 //Goi ham voi mang da khai bao 
Funtion(arr,n,pos,value);
//In mang moi de kiem tra ket qua
printf("Array after in the update is :");
for(int i = 0; i < n; i++){
    printf("%d",arr[i]);
}
return 0;
}


//6
#include<stdio.h>
//Xay dung ham tim kiem phan tu co 2 tham so 
//gom 1 mang va gia tri muon tim kiem
void Find(int *arr,int value, int *pos, int n){/////
    *pos = -1;
    for(int i = 0; i < n; i++){
        if(*(arr + i) == value){
            *pos = i;
        }
    }
}
int main(){
 //Khai bao va gan gia tri cho mang bat ky
 int arr[] = {1,33,45,36,82,12,34};
 int value, pos;
 int n = sizeof(arr) / sizeof(int);
 printf("Input value need found : ");
 scanf("%d",&value);
 //Ham co gia tri tra ve la vi tri cua phan tu tim kiem đuoc
//Goi ham va in ket qua tra ve cua ham ra man hinh 
 Find(arr,value,&pos,n);/////
 if(pos == -1){
    printf("Not found value ^ ^");
 }else{
    printf("The value just found is : %d in the postion : %d .",value,pos);
 }
}


//7
#include<stdio.h>
 //Xay dung ham sap xep co 1 tham so la mang can sap xep
 //Ham se tien hanh sap xep lai mang duoc truyen vao
void Arrange(int *arr, int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(*(arr + j) > *(arr + j + 1)){
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}
void Print(int *arr, int n){
    for(int i = 0; i < n; i++){
        printf("%d  ",arr[i]);
    }
}
 //Khai bao va gan gia tri cho mang bat ky 
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,0};
    int n = sizeof(arr) / sizeof(int);///////
    printf("\nArray before arrange is : ");
    Print(arr, n);
    //Goi ham va in mang sau khi duoc sap xep 
    Arrange(arr, n);
    printf("\nArray after arrange is : ");
    Print(arr, n);
}


//8 
#include<stdio.h>
#include<string.h>
//và lưu kết quả vào biến reverseString sử dụng con trỏ. 
void reverse(char *input, char *reverse){
    for(int i = 0 ; i < strlen(input); i++){
        *(reverse + i) = *(input + (strlen(input)) - i - 1); 
    }
    *(reverse + strlen(input)) = '\0';
    //reverse[strlen(input)] = '\0';
}
int main(){
    //Khai báo 2 biến inputString và reverseString là 2 chuỗi, 
    char inputString[100],reverseString[100];
    //fgets(arr, 100, stdin);
    //inputString[strcspn(inputString, "\n")] = '\0';
    //viết chương trình yêu cầu người dùng nhập vào một chuỗi 
    //và lưu vào biến inputString.
    printf("Input string : ", inputString);
    gets(inputString);
     //Tiến hành đảo ngược chuỗi đã nhập 
     //In 2 chuỗi ra màn hình để kiểm tra kết quả.
    reverse(inputString, reverseString);
    printf("Original string is : %s \n",inputString);
    printf("After reverse string is : %s ", reverseString);
}



//9
#include<stdio.h>
void print(int *arr, int n){
    for(int i = 0; i < n; i++){
        printf("%d ",*(arr + i));
    }
} 
//xây dựng hàm thêm mới phần tử có 3 tham số gồm 1 mảng,
//giá trị mới và vị trí cần thêm. 
void add(int *arr, int n, int pos, int value){
    for(int i = n; i >= pos; i--){
        *(arr + i) = *(arr + i - 1);
    }
    //arr[pos] = value;
    *(arr + pos) = value;
    n++;
}
//Khai báo và gán giá trị cho mảng bất kỳ,
int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(int);
    int value, pos;
    printf("Value elements of array are : ");
    print(arr,n);
    printf("\nInput value  to add : ");
    scanf("%d",&value);
    printf("Input position to add : ");
    scanf("%d",&pos);
    //Gọi hàm với mảng đã khai báo và in mảng mới để kiểm tra kết quả.
    printf("Array after change is : ");
    add(arr,n,pos,value);
    print(arr,n);
}


//10
#include<stdio.h>
void print(int *arr, int n){
    for(int i = 0; i < n; i ++){
        printf("%d ",*(arr + i));
    }
}
//xây dựng hàm xóa phần tử có 2 tham số gồm   1 mảng   và vị trí cần   xóa. 
void delete(int *arr, int n, int pos){
    for(int i = pos; i < n - 1; i++){
        *(arr + i) = *(arr + i + 1);
    }
    n--;
}
int main(){
    //Khai báo và gán giá trị cho mảng bất kỳ, 
    int arr[] = {1,24,5,67,4,2,52,3};
    int n = sizeof(arr) / sizeof(int);
    int pos;
    printf("Original array is :");
    print(arr,n);
    printf("\nInput position to delete is : ");
    scanf("%d",&pos);
    //Gọi hàm với mảng đã khai báo
    delete(arr,n,pos);
    // và in mảng mới để kiểm tra kết quả.
    printf("Array after deletion is : ");
    print(arr,n);
}
