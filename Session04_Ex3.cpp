#include <stdio.h>

int main() {
    int number;

    // Yêu cau nguoi dung nhap vào mot so nguyên
    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &number);

    // Kiem tra chia het cho 3, 5 hoac ca hai
    if (number % 3 == 0 && number % 5 == 0) {
        printf("So %d chia het cho ca 3 va 5.\n", number);
    } else if (number % 3 == 0) {
        printf("So %d chia het cho 3.\n", number);
    } else if (number % 5 == 0) {
        printf("So %d chia het cho 5.\n", number);
    } else {
        printf("So %d khong chia het cho 3 hay 5.\n", number);
    }

    return 0;
}
