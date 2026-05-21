#include "SinhVien.h"

void SinhVien::nhap() {

    cin.ignore();

    cout << "Nhap ma sinh vien: ";
    getline(cin, maSV);

    cout << "Nhap ho ten: ";
    getline(cin, hoTen);

    cout << "Nhap dia chi: ";
    getline(cin, diaChi);

    cout << "Nhap tong tin chi: ";
    cin >> tongTinChi;

    cout << "Nhap diem trung binh: ";
    cin >> diemTB;
}

void SinhVien::xuat() {

    cout << "Ma sinh vien: "
         << maSV << endl;

    cout << "Ho ten: "
         << hoTen << endl;

    cout << "Dia chi: "
         << diaChi << endl;

    cout << "Tong tin chi: "
         << tongTinChi << endl;

    cout << "Diem trung binh: "
         << diemTB << endl;
}

float SinhVien::getDiemTB() {
    return diemTB;
}

SinhVien::~SinhVien() {
}

void SinhVienCaoDang::nhap() {
    SinhVien::nhap();
    cout << "Nhap diem thi tot nghiep: ";
    cin >> diemThiTotNghiep;
}

void SinhVienCaoDang::xuat() {
    cout << "\nSINH VIEN CAO DANG\n";
    SinhVien::xuat();
    cout << "Diem thi tot nghiep: "
         << diemThiTotNghiep << endl;
}

bool SinhVienCaoDang::xetTotNghiep() {

    if(tongTinChi >= 120 && diemTB >= 5 && diemThiTotNghiep >= 5) {
        return true;
    }
    return false;
}

void SinhVienDaiHoc::nhap() {

    SinhVien::nhap();

    cin.ignore();

    cout << "Nhap ten luan van: ";
    getline(cin, tenLuanVan);

    cout << "Nhap diem luan van: ";
    cin >> diemLuanVan;
}

void SinhVienDaiHoc::xuat() {

    cout << "\nSINH VIEN DAI HOC\n";

    SinhVien::xuat();

    cout << "Ten luan van: "
         << tenLuanVan << endl;

    cout << "Diem luan van: "
         << diemLuanVan << endl;
}

bool SinhVienDaiHoc::xetTotNghiep() {
    if(tongTinChi >= 170 && diemTB >= 5 && diemLuanVan >= 5) {
        return true;
    }
    return false;
}
