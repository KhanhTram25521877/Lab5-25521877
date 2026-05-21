#include "ThongTinNhanVien.h"

void ThongTinNhanVien::nhap() {

    cin.ignore();

    cout << "Nhap ma nhan vien: ";
    getline(cin, maNV);

    cout << "Nhap ho ten: ";
    getline(cin, hoTen);

    cout << "Nhap tuoi: ";
    cin >> tuoi;

    cin.ignore();

    cout << "Nhap so dien thoai: ";
    getline(cin, soDienThoai);

    cout << "Nhap email: ";
    getline(cin, email);

    cout << "Nhap luong co ban: ";
    cin >> luongCoBan;
}

void ThongTinNhanVien::xuat() {

    cout << "Ma nhan vien: " << maNV << endl;

    cout << "Ho ten: " << hoTen << endl;

    cout << "Tuoi: " << tuoi << endl;

    cout << "So dien thoai: " << soDienThoai << endl;

    cout << "Email: " << email << endl;

    cout << "Luong co ban: " << luongCoBan << endl;

    cout << "Luong: " << luong << endl;
}

float ThongTinNhanVien::getLuong() {

    return luong;
}

ThongTinNhanVien::~ThongTinNhanVien() {
}

void LapTrinhVien::nhap() {

    ThongTinNhanVien::nhap();

    cout << "Nhap so gio overtime: ";
    cin >> soGioOvertime;
}

void LapTrinhVien::tinhLuong() {

    luong = luongCoBan + soGioOvertime * 200000;
}

void LapTrinhVien::xuat() {

    cout << "\nLAP TRINH VIEN\n";

    ThongTinNhanVien::xuat();

    cout << "So gio overtime: " << soGioOvertime << endl;
}

void KiemChungVien::nhap() {

    ThongTinNhanVien::nhap();

    cout << "Nhap so loi phat hien: ";
    cin >> soLoiPhatHien;
}

void KiemChungVien::tinhLuong() {

    luong = luongCoBan + soLoiPhatHien * 50000;
}

void KiemChungVien::xuat() {

    cout << "\nKIEM CHUNG VIEN\n";

    ThongTinNhanVien::xuat();

    cout << "So loi phat hien: " << soLoiPhatHien << endl;
}
