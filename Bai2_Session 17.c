//2
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int empty(int n) {
    if (n == 0) {
        printf("Array is empty ^ ^\n");
        return 1;
    }
    return 0;
}
int main() {
    char a[100], choice;
    int n = 0, count;
    while (choice != 6) {
        printf("\n=====Menu=====\n");
        printf("1. Nhap vao chuoi\n");
        printf("2. In ra chuoi\n");
        printf("3. Dem so luong chu cai trong chuoi\n");
        printf("4. Dem so luong chu so trong chuoi\n");
        printf("5. Dem so luong ky tu dac biet trong chuoi\n");
        printf("6. Thoat\n");
        printf("Your choice is: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Nhap vao chuoi: ");
                getchar();
                fgets(a, 100, stdin);
                a[strcspn(a, "\n")] = '\0';
                n = strlen(a);
                break;
            case 2:
                if (empty(n)) {
                    break;
                }
                printf("Cac phan tu cua chuoi la: %s\n", a);
                break;
            case 3:
                if (empty(n)) {
                    break;
                }
                count = 0;
                for (int i = 0; i < n; i++) {
                    if (isalpha(a[i])) {
                        count++;
                    }
                }
                printf("So luong chu cai co trong chuoi la: %d\n", count);
                break;
            case 4:
                if (empty(n)) {
                    break;
                }
                count = 0;
                for (int i = 0; i < n; i++) {
                    if (isdigit(a[i])) {
                        count++;
                    }
                }
                printf("So luong chu so co trong chuoi la: %d\n", count);
                break;
            case 5:
                if (empty(n)) {
                    break;
                }
                count = 0;
                for (int i = 0; i < n; i++) {
                    if (!isalpha(a[i]) && !isdigit(a[i]) && a[i] != ' ') {
                        count++;
                    }
                }
                printf("So luong ki tu dac biet trong chuoi la: %d\n", count);
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
