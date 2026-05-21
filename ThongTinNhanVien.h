#ifndef THONGTINNHANVIEN_H
#define THONGTINNHANVIEN_H

#include <iostream>
#include <string>
using namespace std;

class ThongTinNhanVien {
protected:
    string maNV;
    string hoTen;
    int tuoi;
    string soDienThoai;
    string email;
    float luongCoBan;
    float luong;

public:
    virtual void nhap();
    virtual void tinhLuong() = 0;
    virtual void xuat();

    float getLuong();

    virtual ~ThongTinNhanVien();
};

class LapTrinhVien : public ThongTinNhanVien {
private:
    int soGioOvertime;

public:
    void nhap();
    void tinhLuong();
    void xuat();
};

class KiemChungVien : public ThongTinNhanVien {
private:
    int soLoiPhatHien;

public:
    void nhap();
    void tinhLuong();
    void xuat();
};

#endif
