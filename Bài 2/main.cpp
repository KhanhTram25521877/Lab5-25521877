#include "BatDongSan.h"
#include<iostream>
using namespace std;

int main() {

    GiaoDichDat dsDat[100];
    GiaoDichNhaPho dsNhaPho[100];
    GiaoDichCanHo dsCanHo[100];

    int soDat;
    int soNhaPho;
    int soCanHo;

    cout << "Nhap so giao dich dat: ";
    cin >> soDat;

    for(int i = 0; i < soDat; i++) {

        cout << "\nNhap giao dich dat thu "
             << i + 1 << endl;

        dsDat[i].nhap();

        dsDat[i].tinhThanhTien();
    }

    cout << "\nNhap so giao dich nha pho: ";
    cin >> soNhaPho;

    for(int i = 0; i < soNhaPho; i++) {

        cout << "\nNhap giao dich nha pho thu "
             << i + 1 << endl;

        dsNhaPho[i].nhap();

        dsNhaPho[i].tinhThanhTien();
    }

    cout << "\nNhap so giao dich can ho: ";
    cin >> soCanHo;

    for(int i = 0; i < soCanHo; i++) {

        cout << "\nNhap giao dich can ho thu "
             << i + 1 << endl;

        dsCanHo[i].nhap();

        dsCanHo[i].tinhThanhTien();
    }

    cout << "\nTONG SO LUONG\n";

    cout << "Giao dich dat: "
         << soDat << endl;

    cout << "Giao dich nha pho: "
         << soNhaPho << endl;

    cout << "Giao dich can ho: "
         << soCanHo << endl;

    float tongCanHo = 0;

    for(int i = 0; i < soCanHo; i++) {

        tongCanHo +=
        dsCanHo[i].getThanhTien();
    }

    float trungBinh = tongCanHo / soCanHo;

    cout << "\nTrung binh thanh tien can ho: "
         << trungBinh << endl;

    float max = dsNhaPho[0].getThanhTien();
    int viTri = 0;

    for(int i = 1; i < soNhaPho; i++) {

        if(dsNhaPho[i].getThanhTien() > max) {

            max =
            dsNhaPho[i].getThanhTien();

            viTri = i;
        }
    }

    cout << "\nNHA PHO TRI GIA CAO NHAT\n";

    dsNhaPho[viTri].xuat();

    cout << "\nGIAO DICH THANG 12/2024\n";

    for(int i = 0; i < soDat; i++) {

        if(dsDat[i].getThang() == 12
           && dsDat[i].getNam() == 2024) {

            dsDat[i].xuat();
        }
    }
    for(int i = 0; i < soNhaPho; i++) {

        if(dsNhaPho[i].getThang() == 12
           && dsNhaPho[i].getNam() == 2024) {

            dsNhaPho[i].xuat();
        }
    }
    for(int i = 0; i < soCanHo; i++) {

        if(dsCanHo[i].getThang() == 12
           && dsCanHo[i].getNam() == 2024) {

            dsCanHo[i].xuat();
        }
    }
    return 0;
}

