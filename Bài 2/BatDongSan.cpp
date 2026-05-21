#include "BatDongSan.h"

void BatDongSan::nhap() {

    cin.ignore();

    cout << "Nhap ma giao dich: ";
    getline(cin, maGiaoDich);

    cout << "Nhap ngay: ";
    cin >> ngay;

    cout << "Nhap thang: ";
    cin >> thang;

    cout << "Nhap nam: ";
    cin >> nam;

    cout << "Nhap don gia: ";
    cin >> donGia;

    cout << "Nhap dien tich: ";
    cin >> dienTich;
}

void BatDongSan::xuat() {

    cout << "Ma giao dich: "
         << maGiaoDich << endl;

    cout << "Ngay giao dich: "
         << ngay << "/"
         << thang << "/"
         << nam << endl;

    cout << "Don gia: "
         << donGia << endl;

    cout << "Dien tich: "
         << dienTich << endl;

    cout << "Thanh tien: "
         << thanhTien << endl;
}

float BatDongSan::getThanhTien() {

    return thanhTien;
}

int BatDongSan::getThang() {

    return thang;
}

int BatDongSan::getNam() {

    return nam;
}

BatDongSan::~BatDongSan() {
}

void GiaoDichDat::nhap() {

    BatDongSan::nhap();

    cout << "Nhap loai dat (A/B/C): ";
    cin >> loaiDat;
}

void GiaoDichDat::tinhThanhTien() {

    if(loaiDat == 'A') {

        thanhTien =
        dienTich * donGia * 1.5;
    }
    else {

        thanhTien =
        dienTich * donGia;
    }
}

void GiaoDichDat::xuat() {

    cout << "\nGIAO DICH DAT\n";

    BatDongSan::xuat();

    cout << "Loai dat: "
         << loaiDat << endl;
}

void GiaoDichNhaPho::nhap() {

    BatDongSan::nhap();

    cin.ignore();

    cout << "Nhap loai nha: ";
    getline(cin, loaiNha);

    cout << "Nhap dia chi: ";
    getline(cin, diaChi);
}

void GiaoDichNhaPho::tinhThanhTien() {

    if(loaiNha == "cao cap") {

        thanhTien =
        dienTich * donGia;
    }
    else {

        thanhTien =
        dienTich * donGia * 0.9;
    }
}

void GiaoDichNhaPho::xuat() {

    cout << "\nGIAO DICH NHA PHO\n";

    BatDongSan::xuat();

    cout << "Loai nha: "
         << loaiNha << endl;

    cout << "Dia chi: "
         << diaChi << endl;
}

void GiaoDichCanHo::nhap() {

    BatDongSan::nhap();

    cin.ignore();

    cout << "Nhap ma can: ";
    getline(cin, maCan);

    cout << "Nhap vi tri tang: ";
    cin >> viTriTang;
}

void GiaoDichCanHo::tinhThanhTien() {

    if(viTriTang == 1) {

        thanhTien =
        dienTich * donGia * 2;
    }
    else if(viTriTang >= 15) {

        thanhTien =
        dienTich * donGia * 1.2;
    }
    else {

        thanhTien =
        dienTich * donGia;
    }
}

void GiaoDichCanHo::xuat() {

    cout << "\nGIAO DICH CAN HO\n";

    BatDongSan::xuat();

    cout << "Ma can: "
         << maCan << endl;

    cout << "Vi tri tang: "
         << viTriTang << endl;
}
