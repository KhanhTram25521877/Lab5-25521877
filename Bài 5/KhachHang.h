#ifndef KHACHHANG_H
#define KHACHHANG_H

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class KhachHang {
protected:
    string tenKhachHang;
    int soLuongHang;
    float donGiaHang;
    float soTienPhaiTra;

public:
    virtual void nhap(ifstream& fileIn);
    virtual void tinhTien() = 0;
    virtual void xuat(ofstream& fileOut);

    float getSoTienPhaiTra();

    virtual ~KhachHang();
};

class KhachHangLoaiA : public KhachHang {
public:
    void tinhTien();
};

class KhachHangLoaiB : public KhachHang {
private:
    int soNamThanThiet;

public:
    void nhap(ifstream& fileIn);
    void tinhTien();
};

class KhachHangLoaiC : public KhachHang {
public:
    void tinhTien();
};

#endif
