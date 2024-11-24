#include <stdio.h>

int main() {
    int year;

    // Yeu cau nguoi dung nhap vao nam
    printf("Nhap vao nam: ");
    scanf("%d", &year);

    // Kiem tra nam nhuan
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d la nam nhuan.\n", year);
    } else {
        printf("%d khong phai la nam nhuan.\n", year);
    }

    return 0;
}
