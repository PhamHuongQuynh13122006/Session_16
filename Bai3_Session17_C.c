//3
#include<stdio.h>
#include<string.h>
#include<ctype.h>

void reverse(char *str1, char *reverse) {
    int n = strlen(str1);
    for(int i = 0; i < n; i++) {
        *(reverse + i) = *(str1 + n - i - 1);
        //reverse[i] = str1[n - i - 1];
    }
    *(reverse + n) ='\0'; 
    //reverse[n] = '\0'; 
}

void hoa(char *str1) {
    while(*str1 != '\0') {
        *str1 = toupper(*str1);
        str1++;
    }
}

void cat(char *str1, char *str2) {
    strcat(str1, str2);
    printf("Chuoi sau khi noi: %s\n", str1);
}

int main() {
    int choice;
    char str1[100], str2[100], reverseStr[100];

    while(1) {
        printf("\n=====MENU=====\n");
        printf("1. Nhap vao chuoi\n");
        printf("2. In ra chuoi dao nguoc\n");
        printf("3. Dem so luong tu trong chuoi\n");
        printf("4. Nhap vao chuoi khac, so sanh do dai chuoi\n");
        printf("5. In hoa tat ca chu cai trong chuoi\n");
        printf("6. Nhap vao chuoi khac va them vao chuoi ban dau\n");
        printf("7. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        getchar();

        switch(choice) {
            case 1:
                printf("Nhap vao chuoi: ");
                fgets(str1, 100, stdin);
                str1[strcspn(str1, "\n")] = '\0';
                break;
            case 2:
                reverse(str1, reverseStr);
                printf("Chuoi dao nguoc la: %s\n", reverseStr);
                break;
            case 3: {
                int count = 1;
                for (int i = 0; str1[i] != '\0'; i++) {
                    if (str1[i] == ' ') {
                        count++;
                    }
                }
                printf("So luong tu trong chuoi la: %d\n", count);
                break;
            }
            case 4:
                printf("Nhap vao chuoi thu hai: ");
                fgets(str2, 100, stdin);
                str2[strcspn(str2, "\n")] = '\0';
                if (strlen(str1) > strlen(str2)) {
                    printf("Chuoi thu nhat dai hon chuoi thu hai.\n");
                } else if (strlen(str2) > strlen(str1)) {
                    printf("Chuoi thu hai dai hon chuoi thu nhat.\n");
                } else {
                    printf("Hai chuoi co do dai bang nhau.\n");
                }
                break;
            case 5:
                hoa(str1);
                printf("Chuoi sau khi in hoa: %s\n", str1);
                break;
            case 6:
                printf("Nhap vao chuoi thu hai: ");
                fgets(str2, 100, stdin);
                str2[strcspn(str2, "\n")] = '\0';
                cat(str1, str2);
                break;
            case 7:
                printf("Thoat chuong trinh.\n");
                return 0;
            default:
                printf("Lua chon khong hop le!\n");
                break;
        }
    }
}
