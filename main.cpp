#include "NhanVien.h"
#include<iostream>
#include<string>
using namespace std;

int main() {

    NhanVienSanXuat dsSX[100];
    NhanVienVanPhong dsVP[100];

    int soSX;
    int soVP;

    cout << "Nhap so nhan vien san xuat: ";
    cin >> soSX;

    for(int i = 0; i < soSX; i++) {

        cout << "\nNhap nhan vien san xuat thu "
             << i + 1 << endl;

        dsSX[i].nhap();

        dsSX[i].tinhLuong();
    }

    cout << "\nNhap so nhan vien van phong: ";
    cin >> soVP;

    for(int i = 0; i < soVP; i++) {

        cout << "\nNhap nhan vien van phong thu "
             << i + 1 << endl;

        dsVP[i].nhap();

        dsVP[i].tinhLuong();
    }

    cout << "\nDANH SACH NHAN VIEN SAN XUAT\n";

    for(int i = 0; i < soSX; i++) {

        dsSX[i].xuat();
    }

    cout << "\nDANH SACH NHAN VIEN VAN PHONG\n";

    for(int i = 0; i < soVP; i++) {

        dsVP[i].xuat();
    }

    float tongLuong = 0;

    for(int i = 0; i < soSX; i++) {

        tongLuong += dsSX[i].getLuong();
    }

    for(int i = 0; i < soVP; i++) {

        tongLuong += dsVP[i].getLuong();
    }

    cout << "\nTong luong cong ty: "
         << tongLuong << endl;

    float luongThapNhat = dsSX[0].getLuong();
    int viTriSX = 0;

    for(int i = 1; i < soSX; i++) {

        if(dsSX[i].getLuong() < luongThapNhat) {

            luongThapNhat = dsSX[i].getLuong();

            viTriSX = i;
        }
    }

    cout << "\nNhan vien san xuat luong thap nhat:\n";

    dsSX[viTriSX].xuat();

    int namSinhNhoNhat = dsVP[0].getNamSinh();
    int viTriVP = 0;

    for(int i = 1; i < soVP; i++) {

        if(dsVP[i].getNamSinh() < namSinhNhoNhat) {

            namSinhNhoNhat =
            dsVP[i].getNamSinh();

            viTriVP = i;
        }
    }

    cout << "\nNhan vien van phong lon tuoi nhat:\n";

    dsVP[viTriVP].xuat();

    return 0;
}
