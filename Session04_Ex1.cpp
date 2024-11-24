#include <stdio.h>

int main() {
    int number;

    // Yeu cau nguoi dung nhap vào mot so nguyen
    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &number);

    // Kiem tra va in ket qua 
    if (number > 0) {
        printf("So %d la so duong.\n", number);
    } else if (number < 0) {
        printf("So %d la so am.\n", number);
    } else {
        printf("So %d la so 0.\n", number);
    }

    return 0;
}
