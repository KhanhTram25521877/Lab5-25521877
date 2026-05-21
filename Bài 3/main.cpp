#include "SinhVien.h"

int main() {

    SinhVienCaoDang dsCD[100];
    SinhVienDaiHoc dsDH[100];

    int soCD;
    int soDH;

    cout << "Nhap so sinh vien cao dang: ";
    cin >> soCD;

    for(int i = 0; i < soCD; i++) {

        cout << "\nNhap sinh vien cao dang thu "
             << i + 1 << endl;

        dsCD[i].nhap();
    }

    cout << "\nNhap so sinh vien dai hoc: ";
    cin >> soDH;

    for(int i = 0; i < soDH; i++) {

        cout << "\nNhap sinh vien dai hoc thu "
             << i + 1 << endl;

        dsDH[i].nhap();
    }

    cout << "\nDANH SACH SINH VIEN\n";

    for(int i = 0; i < soCD; i++) {

        dsCD[i].xuat();
    }

    for(int i = 0; i < soDH; i++) {

        dsDH[i].xuat();
    }

    cout << "\nSINH VIEN DU DIEU KIEN TOT NGHIEP\n";

    for(int i = 0; i < soCD; i++) {

        if(dsCD[i].xetTotNghiep()) {

            dsCD[i].xuat();
        }
    }

    for(int i = 0; i < soDH; i++) {

        if(dsDH[i].xetTotNghiep()) {

            dsDH[i].xuat();
        }
    }

    cout << "\nSINH VIEN KHONG DU DIEU KIEN TOT NGHIEP\n";

    for(int i = 0; i < soCD; i++) {

        if(dsCD[i].xetTotNghiep() == false) {

            dsCD[i].xuat();
        }
    }

    for(int i = 0; i < soDH; i++) {

        if(dsDH[i].xetTotNghiep() == false) {

            dsDH[i].xuat();
        }
    }

    float maxDH = dsDH[0].getDiemTB();
    int viTriDH = 0;

    for(int i = 1; i < soDH; i++) {

        if(dsDH[i].getDiemTB() > maxDH) {

            maxDH =
            dsDH[i].getDiemTB();

            viTriDH = i;
        }
    }

    cout << "\nSINH VIEN DAI HOC DIEM TB CAO NHAT\n";

    dsDH[viTriDH].xuat();

    float maxCD = dsCD[0].getDiemTB();
    int viTriCD = 0;

    for(int i = 1; i < soCD; i++) {
        if(dsCD[i].getDiemTB() > maxCD) {
            maxCD =
            dsCD[i].getDiemTB();
            viTriCD = i;
        }
    }
    cout << "\nSINH VIEN CAO DANG DIEM TB CAO NHAT\n";
    dsCD[viTriCD].xuat();
    int demCD = 0;
    int demDH = 0;
    for(int i = 0; i < soCD; i++) {
        if(dsCD[i].xetTotNghiep() == false) {
            demCD++;
        }
    }
    for(int i = 0; i < soDH; i++) {

        if(dsDH[i].xetTotNghiep() == false) {

            demDH++;
        }
    }
    cout << "\nSo sinh vien cao dang "
         << "khong tot nghiep: "
         << demCD << endl;
    cout << "So sinh vien dai hoc "
         << "khong tot nghiep: "
         << demDH << endl;
    return 0;
}
