#include "ThongTinNhanVien.h"

int main() {

    LapTrinhVien dsLTV[100];
    KiemChungVien dsKCV[100];

    int soLTV;
    int soKCV;

    cout << "Nhap so lap trinh vien: ";
    cin >> soLTV;

    for(int i = 0; i < soLTV; i++) {

        cout << "\nNhap lap trinh vien thu " << i + 1 << endl;

        dsLTV[i].nhap();

        dsLTV[i].tinhLuong();
    }

    cout << "\nNhap so kiem chung vien: ";
    cin >> soKCV;

    for(int i = 0; i < soKCV; i++) {

        cout << "\nNhap kiem chung vien thu " << i + 1 << endl;

        dsKCV[i].nhap();

        dsKCV[i].tinhLuong();
    }

    cout << "\nDANH SACH NHAN VIEN\n";

    for(int i = 0; i < soLTV; i++) {

        dsLTV[i].xuat();
    }

    for(int i = 0; i < soKCV; i++) {

        dsKCV[i].xuat();
    }

    float tongLuong = 0;
    int tongNhanVien = soLTV + soKCV;

    for(int i = 0; i < soLTV; i++) {

        tongLuong += dsLTV[i].getLuong();
    }

    for(int i = 0; i < soKCV; i++) {

        tongLuong += dsKCV[i].getLuong();
    }

    float luongTB = tongLuong / tongNhanVien;

    cout << "\nNHAN VIEN CO LUONG " << "THAP HON TRUNG BINH\n";

    for(int i = 0; i < soLTV; i++) {

        if(dsLTV[i].getLuong() < luongTB) {

            dsLTV[i].xuat();
        }
    }

    for(int i = 0; i < soKCV; i++) {

        if(dsKCV[i].getLuong() < luongTB) {

            dsKCV[i].xuat();
        }
    }

    float maxLuong = dsLTV[0].getLuong();

    int viTriMax = 0;
    bool laLTV = true;

    for(int i = 0; i < soLTV; i++) {

        if(dsLTV[i].getLuong() > maxLuong) {

            maxLuong = dsLTV[i].getLuong();

            viTriMax = i;

            laLTV = true;
        }
    }

    for(int i = 0; i < soKCV; i++) {

        if(dsKCV[i].getLuong() > maxLuong) {

            maxLuong = dsKCV[i].getLuong();

            viTriMax = i;

            laLTV = false;
        }
    }

    cout << "\nNHAN VIEN LUONG CAO NHAT\n";

    if(laLTV) {

        dsLTV[viTriMax].xuat();
    }
    else {

        dsKCV[viTriMax].xuat();
    }

    float minLuong = dsLTV[0].getLuong();

    int viTriMin = 0;
    bool laLapTrinhVien = true;

    for(int i = 0; i < soLTV; i++) {

        if(dsLTV[i].getLuong() < minLuong) {

            minLuong = dsLTV[i].getLuong();

            viTriMin = i;

            laLapTrinhVien = true;
        }
    }

    for(int i = 0; i < soKCV; i++) {

        if(dsKCV[i].getLuong() < minLuong) {

            minLuong = dsKCV[i].getLuong();
            viTriMin = i;
            laLapTrinhVien = false;
        }
    }
    cout << "\nNHAN VIEN LUONG THAP NHAT\n";
    if(laLapTrinhVien) {
        dsLTV[viTriMin].xuat();
    }
    else {
        dsKCV[viTriMin].xuat();
    }
    float maxLTV = dsLTV[0].getLuong();
    int vtLTV = 0;
    for(int i = 1; i < soLTV; i++) {

        if(dsLTV[i].getLuong() > maxLTV) {

            maxLTV = dsLTV[i].getLuong();

            vtLTV = i;
        }
    }

    cout << "\nLAP TRINH VIEN " << "LUONG CAO NHAT\n";

    dsLTV[vtLTV].xuat();

    float minKCV =
    dsKCV[0].getLuong();

    int vtKCV = 0;

    for(int i = 1; i < soKCV; i++) {
        if(dsKCV[i].getLuong() < minKCV) {

            minKCV = dsKCV[i].getLuong();

            vtKCV = i;
        }
    }
    cout << "\nKIEM CHUNG VIEN " << "LUONG THAP NHAT\n";
    dsKCV[vtKCV].xuat();

    return 0;
}

