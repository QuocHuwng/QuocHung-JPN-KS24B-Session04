#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Yeu cau nguoi dung nhap vào 3 so nguyen
    printf("Nhap vao so nguyen thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap vao so nguyen thu hai: ");
    scanf("%d", &num2);
    printf("Nhap vao so nguyen thu ba: ");
    scanf("%d", &num3);

    // Kiem tra xem num3 co nam trong khoang giua num1 và num2 khong
    if ((num3 > num1 && num3 < num2)) {
        printf("So %d nam trong khoang giua %d va %d.\n", num3, num1, num2);
    } 
    else if ((num3 > num2 && num3 < num1)) {
        printf("So %d nam trong khoang giua %d va %d.\n", num3, num1, num2);
    } 
    else {
        printf("So %d khong nam trong khoang giua %d và %d.\n", num3, num1, num2);
    }
    
    return 0;
}
