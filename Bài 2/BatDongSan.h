#ifndef BATDONGSAN_H
#define BATDONGSAN_H

#include <iostream>
#include <string>
using namespace std;

class BatDongSan {
protected:
    string maGiaoDich;
    int ngay;
    int thang;
    int nam;
    float donGia;
    float dienTich;
    float thanhTien;

public:
    virtual void nhap();
    virtual void tinhThanhTien() = 0;
    virtual void xuat();

    float getThanhTien();
    int getThang();
    int getNam();

    virtual ~BatDongSan();
};

class GiaoDichDat : public BatDongSan {
private:
    char loaiDat;

public:
    void nhap();
    void tinhThanhTien();
    void xuat();
};

class GiaoDichNhaPho : public BatDongSan {
private:
    string loaiNha;
    string diaChi;

public:
    void nhap();
    void tinhThanhTien();
    void xuat();
};

class GiaoDichCanHo : public BatDongSan {
private:
    string maCan;
    int viTriTang;

public:
    void nhap();
    void tinhThanhTien();
    void xuat();
};

#endif // BATDONGSAN_H
