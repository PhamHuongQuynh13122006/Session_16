//4
#include <stdio.h>
#include <math.h>

void Input(int *a, int *n) {
    printf("Nhap vao so phan tu: ");
    scanf("%d", n);
    for (int i = 0; i < *n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &a[i]);
    }
}

void Print_even(int *a, int n) {
    printf("Cac phan tu la so chan: ");
    for (int i = 0; i < n; i++) {
        if (*(a + i) % 2 == 0) {
            printf("%d ", *(a + i));
        }
    }
    printf("\n");
}

int Print_prime(int *a, int n) {
    printf("Cac phan tu la so nguyen to: ");
    for (int i = 0; i < n; i++) {
        if (a[i] < 2) {
            return 0;
        } else {
            for (int j = 2; j <= sqrt(a[i]); j++) {//////
                if (a[i] % j == 0) {
                    return 0;
                }
            }
            return 1;
        }
    }
}
void reverse(int *a, int n) {
    for (int i = 0; i < n / 2; i++) {
        int temp = *(a + i);
        *(a + i) = *(a + n - i - 1);
        *(a + n - i - 1) = temp;
    }
}
void tang(int *a, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (*(a + i) > *(a + j)) {
                int temp = *(a + i);
                *(a + i) = *(a + j);
                *(a + j) = temp;
            }
        }
    }
}
void giam(int *a, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (*(a + i) < *(a + j)) {
                int temp = *(a + i);
                *(a + i) = *(a + j);
                *(a + j) = temp;
            }
        }
    }
}
void search(int *a, int n, int value) {
    int pos = -1;
    for (int i = 0; i < n; i++) {
        if (*(a + i) == value) {
            pos = i;
        }
    }
    if (pos != -1) {
        printf("Phan tu %d can tim kiem nam tai vi tri %d\n", value, pos + 1);///////
    } else {
        printf("Phan tu can tim kiem khong co trong mang\n");
    }
}

int main() {
    int choice, value, a[100], n = 0;

    while (1) {
        printf("\n=====MENU=====\n");
        printf("1. Nhap vao so phan tu va tung phan tu\n");
        printf("2. In ra cac phan tu la so chan\n");
        printf("3. In ra cac phan tu la so nguyen to\n");
        printf("4. Dao nguoc mang\n");
        printf("5. Sap xep mang\n");
        printf("6. Nhap vao mot phan tu va tim kiem trong mang\n");
        printf("7. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                Input(a, &n);
                break;
            case 2:
                Print_even(a, n);
                break;
            case 3:
                if(Print_prime(a, n)){
                    for(int i =0; i < n; i++){
                    printf("%d  ", a[i]);
                    }
                }
                break;
            case 4:
                reverse(a, n);
                printf("Mang sau khi dao nguoc: ");
                for (int i = 0; i < n; i++) {
                    printf("%d  ", a[i]);
                }
                break;
            case 5: 
                char sub;
                do {
                    printf("\nSap xep mang:");
                    printf("\na. Tang dan");
                    printf("\nb. Giam dan\n");
                    printf("Lua chon cua ban: ");
                    scanf(" %c", &sub);
                } while (sub != 'a' && sub != 'b' && sub != 'A' && sub != 'B');
                if (sub == 'a' || sub == 'A') {
                    tang(a, n);
                } else if (sub == 'b' || sub == 'B') {
                    giam(a, n);
                }
                printf("Mang sau khi sap xep: ");
                for (int i = 0; i < n; i++) {
                    printf("%d ", a[i]);
                }
                printf("\n");
                break;
            case 6:
                printf("Nhap phan tu can tim kiem: ");
                scanf("%d", &value);
                search(a, n, value);
                break;
            case 7:
                printf("Thoat chuong trinh.\n");
                return 0;
            default:
                printf("Lua chon khong hop le.\n");
                break;
        }
    }
    return 0;
}

