#include <stdio.h>

int main() {
    int month;

    // Yeu cau nguoi dung nhap vao so thang
    printf("Nhap vao so thang (1-12): ");
    scanf("%d", &month);

    // Kiem tra thang va in ra so ngay tuong ung
    if (month < 1 || month > 12) {
        printf("So thang %d khong hop le. Vui long nhap tu 1 den 12.\n", month);
    } else if (month == 2) {
        printf("Thang %d co 28 hoac 29 ngay (tuy thuoc vo nam nhuan).\n", month);
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        printf("Thang %d co 30 ngay.\n", month);
    } else {
        printf("Thang %d co 31 ngay.\n", month);
    }

    return 0;
}
