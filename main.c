#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	// Câu 3 ------------------------------------------------------------------------
    int soVon;
    int ketQuaTongHop;

    printf("Chuong trinh tinh tien dien\n");
    printf("Nhap so dien su dung: ");
    scanf("%d", &soVon);

    if(soVon < 0)
    {
        printf("So dien khong hop le");
        return 0;
    }
    else if(soVon < 10)
    {
        int ketQua100 = soVon * 1000;

        ketQuaTongHop = ketQua100;
    }
    else if(soVon >= 10 && soVon < 50)
    {
        int ketQua100 = 10 * 1000;
        int ketQua200 = (soVon - 10) * 1500;

        ketQuaTongHop = ketQua100 + ketQua200;
    }
    else if(soVon >= 50 && soVon < 300)
    {
        int ketQua100 = 10 * 1000;
        int ketQua200 = 40 * 1500;
        int ketQua300 = (soVon - 50) * 2500;

        ketQuaTongHop = ketQua100 + ketQua200 
                       + ketQua300;
    }
    else
    {
        int ketQua100 = 10 * 1000;
        int ketQua200 = 40 * 1500;
        int ketQua300 = 250 * 2500;
        int ketQua400 = (soVon - 300) * 4000;

        ketQuaTongHop = ketQua100 + ketQua200 
                       + ketQua300 + ketQua400;
    }

    printf("Tong so tien la: %d VND", ketQuaTongHop);
	return 0;
}
