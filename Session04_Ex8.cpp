#include <stdio.h>

int main() {
    int a, b, c;

    // Yeu cau nguoi dung nhap vao 3 canh
    printf("Nhap vao canh a: ");
    scanf("%d", &a);
    printf("Nhap vao canh b: ");
    scanf("%d", &b);
    printf("Nhap vao canh c: ");
    scanf("%d", &c);

    // Kiem tra xem 3 canh co hop le khong
    if (a + b > c && a + c > b && b + c > a) {
        printf("La 3 canh tam giac.\n");
    } else {
        printf("Khong phai 3 canh tam giac.\n");
    }

    return 0;
}
