#ifndef SINHVIEN_H
#define SINHVIEN_H

#include <iostream>
#include <string>
using namespace std;

class SinhVien {
protected:
    string maSV;
    string hoTen;
    string diaChi;
    int tongTinChi;
    float diemTB;

public:
    virtual void nhap();
    virtual void xuat();
    virtual bool xetTotNghiep() = 0;

    float getDiemTB();

    virtual ~SinhVien();
};

class SinhVienCaoDang : public SinhVien {
private:
    float diemThiTotNghiep;

public:
    void nhap();
    void xuat();
    bool xetTotNghiep();
};

class SinhVienDaiHoc : public SinhVien {
private:
    string tenLuanVan;
    float diemLuanVan;

public:
    void nhap();
    void xuat();
    bool xetTotNghiep();
};

#endif
