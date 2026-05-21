#include "NhanVien.h"
#include<iostream>
#include<string>
using namespace std;

void NhanVien::nhap() {

    cin.ignore();

    cout << "Nhap ho ten: ";
    getline(cin, hoTen);

    cout << "Nhap nam sinh: ";
    cin >> namSinh;
}

void NhanVien::xuat() {

    cout << "Ho ten: " << hoTen << endl;
    cout << "Nam sinh: " << namSinh << endl;
    cout << "Luong: " << luong << endl;
}

float NhanVien::getLuong() {

    return luong;
}

int NhanVien::getNamSinh() {

    return namSinh;
}

NhanVien::~NhanVien() {
}

void NhanVienSanXuat::nhap() {

    NhanVien::nhap();

    cout << "Nhap luong can ban: ";
    cin >> luongCanBan;

    cout << "Nhap so san pham: ";
    cin >> soSanPham;
}

void NhanVienSanXuat::tinhLuong() {

    luong = luongCanBan + soSanPham * 5000;
}

void NhanVienSanXuat::xuat() {

    cout << "\nNHAN VIEN SAN XUAT\n";

    NhanVien::xuat();

    cout << "Luong can ban: "
         << luongCanBan << endl;

    cout << "So san pham: "
         << soSanPham << endl;
}

void NhanVienVanPhong::nhap() {

    NhanVien::nhap();

    cout << "Nhap so ngay lam viec: ";
    cin >> soNgayLamViec;
}

void NhanVienVanPhong::tinhLuong() {

    luong = soNgayLamViec * 100000;
}

void NhanVienVanPhong::xuat() {

    cout << "\nNHAN VIEN VAN PHONG\n";

    NhanVien::xuat();

    cout << "So ngay lam viec: "
         << soNgayLamViec << endl;
}
