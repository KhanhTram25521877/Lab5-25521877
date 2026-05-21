#include "KhachHang.h"

void KhachHang::nhap(ifstream& fileIn) {

    fileIn.ignore();

    getline(fileIn, tenKhachHang);

    fileIn >> soLuongHang;

    fileIn >> donGiaHang;
}

void KhachHang::xuat(ofstream& fileOut) {
    fileOut << tenKhachHang << endl;
    fileOut << soTienPhaiTra << endl;
}

float KhachHang::getSoTienPhaiTra() {
    return soTienPhaiTra;
}

KhachHang::~KhachHang() {
}

void KhachHangLoaiA::tinhTien() {

    float tienHang;

    tienHang = soLuongHang * donGiaHang;

    soTienPhaiTra = tienHang + tienHang * 0.1;
}

void KhachHangLoaiB::nhap(ifstream& fileIn) {

    KhachHang::nhap(fileIn);

    fileIn >> soNamThanThiet;
}

void KhachHangLoaiB::tinhTien() {

    float tienHang;
    float phanTramKhuyenMai;

    tienHang = soLuongHang * donGiaHang;

    phanTramKhuyenMai = soNamThanThiet * 0.05;

    if(phanTramKhuyenMai > 0.5) {

        phanTramKhuyenMai = 0.5;
    }

    tienHang = tienHang * (1 - phanTramKhuyenMai);

    soTienPhaiTra = tienHang + tienHang * 0.1;
}

void KhachHangLoaiC::tinhTien() {

    float tienHang;

    tienHang = soLuongHang * donGiaHang * 0.5;

    soTienPhaiTra = tienHang + tienHang * 0.1;
}
