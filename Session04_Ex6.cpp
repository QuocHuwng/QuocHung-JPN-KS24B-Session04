#include <stdio.h>

int main() {
  int soCu, soMoi, soDien;
  float tienDien;

  // Nhap chi so cu va chi so moi
  printf("Nhap chi so cu: ");
  scanf("%d", &soCu);
  printf("Nhap chi so moi: ");
  scanf("%d", &soMoi);

  // Tinh so dien tieu thu 
  soDien = soMoi - soCu;

  // Tinh tien dien
  if (soDien < 50) {
    tienDien = soDien * 10000;
  } else if (soDien < 100) {
    tienDien = (soDien - 50) * 15000 + 50 * 10000;
  } else if (soDien < 150) {
    tienDien = (soDien - 100) * 20000 + 50 * 15000 + 50 * 10000;
  } else if (soDien < 200) {
    tienDien = (soDien - 150) * 25000 + 50 * 20000 + 50 * 15000 + 50 * 10000;
  } else {
    tienDien = (soDien - 200) * 30000 + 50 * 25000 + 50 * 20000 + 50 * 15000 + 50 * 10000;
  }

  // In ra ket qua 
  printf("So dien tieu thu: %d kWh\n", soDien);
  printf("Tien dien: %.0f VND\n", tienDien);

  return 0;
}
