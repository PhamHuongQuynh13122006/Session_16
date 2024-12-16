//1
#include <stdio.h>
// 1. Nhập vào số phần tử và từng phần tử
void input(int *a, int *n) {
    printf("Nhap vao so phan tu: ");
    scanf("%d", n);
    for (int i = 0; i < *n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", (a + i));
    }
}
// 2. Hiển thị các phần tử trong mảng
void output(int *a, int n) {
    printf("Cac phan tu trong mang la: ");
    for (int i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");
}
// 3. Tính độ dài mảng
void length(int *a, int n) {
    printf("Do dai mang la: %d\n", n);
}
// 4. Tính tổng các phần tử trong mảng
int ium(int *a, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    return sum;
}
// 5. Hiển thị phần tử lớn nhất
void max(int *a, int n) {
    int max = *a;
    for (int i = 1; i < n; i++) {
        if (max < a[i]) {
            max = a[i];
        }
    }
    printf("Phan tu lon nhat cua mang: %d\n", max);
}
int empty(int n) {
    if (n == 0) {
        printf("Array is empty ^ ^\n");
        return 1;
    }
    return 0;
}
int main() {
    int a[100], choice = 0;
    int n = 0;
    while (choice != 6) {
        printf("\n=====Menu=====\n");
        printf("1. Nhap vao so phan tu va tung phan tu\n");
        printf("2. Hien thi cac phan tu trong mang\n");
        printf("3. Tinh do dai mang\n");
        printf("4. Tinh tong cac phan tu trong mang\n");
        printf("5. Hien thi phan tu lon nhat\n");
        printf("6. Thoat\n");
        printf("Your choice is: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
            input(a, &n);
            break;
            case 2:
            if (empty(n)){
                break;
            }
                output(a, n);
                break;
            case 3:
            if (empty(n)){
                break;
            }
            length(a, n);
            break;
            case 4:
            if (empty(n)){
                break;
            }
            printf("Tong cac phan tu trong mang: %d\n", ium(a, n));
            break;
            case 5:
            if (empty(n)){
                break;
            }
            max(a, n);
            break;
            case 6:
            printf("Thoat chuong trinh ^ ^\n");
            break;
            default:
            printf("Lua chon khong hop le\n");
            break;
        }
    }
    return 0;
}
