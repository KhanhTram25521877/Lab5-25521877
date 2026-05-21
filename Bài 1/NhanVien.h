#ifndef NHANVIEN_H
#define NHANVIEN_H

#include<string>
using namespace std;

class NhanVien
{
protected:
    string hoTen;
    int namSinh;
    float luong;

public:
    virtual void nhap();
    virtual void tinhLuong() = 0;
    virtual void xuat();

    float getLuong();
    int getNamSinh();

    virtual ~NhanVien();
};

class NhanVienSanXuat : public NhanVien {
private:
    float luongCanBan;
    int soSanPham;

public:
    void nhap();
    void tinhLuong();
    void xuat();
};

class NhanVienVanPhong : public NhanVien {
private:
    int soNgayLamViec;

public:
    void nhap();
    void tinhLuong();
    void xuat();
};


#endif // NHANVIEN_H
