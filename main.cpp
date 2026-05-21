#include "KhachHang.h"
using namespace std;

int main() {

    ifstream fileIn("XYZ.INP");

    ofstream fileOut("XYZ.OUT");

    int x;
    int y;
    int z;

    fileIn >> x >> y >> z;

    KhachHangLoaiA dsA[1000];
    KhachHangLoaiB dsB[1000];
    KhachHangLoaiC dsC[1000];

    float tongTien = 0;

    for(int i = 0; i < x; i++) {

        dsA[i].nhap(fileIn);

        dsA[i].tinhTien();

        tongTien += dsA[i].getSoTienPhaiTra();
    }

    for(int i = 0; i < y; i++) {

        dsB[i].nhap(fileIn);

        dsB[i].tinhTien();

        tongTien += dsB[i].getSoTienPhaiTra();
    }

    for(int i = 0; i < z; i++) {

        dsC[i].nhap(fileIn);

        dsC[i].tinhTien();

        tongTien += dsC[i].getSoTienPhaiTra();
    }

    fileOut << x << " " << y << " " << z << endl;

    for(int i = 0; i < x; i++) {

        dsA[i].xuat(fileOut);
    }

    for(int i = 0; i < y; i++) {

        dsB[i].xuat(fileOut);
    }

    for(int i = 0; i < z; i++) {

        dsC[i].xuat(fileOut);
    }

    fileOut << tongTien;

    fileIn.close();

    fileOut.close();

    return 0;
}
