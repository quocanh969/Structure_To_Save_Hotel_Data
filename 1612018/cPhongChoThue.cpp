#include "cPhongChoThue.h"

void cPhongChoThue::nhap(string MA_PHONG, string TEN_PHONG, int SO_NGUOI_TOI_DA)
{
	maP = MA_PHONG;
	tenP = TEN_PHONG;
	soNguoi = SO_NGUOI_TOI_DA;
	cin >> dienTich;
	cin >> giaP;
}

void cPhongChoThue::xuat()
{
	cout << "Ma phong: " << maP << endl;
	cout << "Ten phong: " << tenP << endl;
	cout << "So nguoi toi da: " << soNguoi << endl;
	cout << "Dien tich: " << dienTich << endl;
	cout << "Gia thue: " << giaP << endl;
	cout << "Hien dang co " << soKhachDangThue << " dang thue:" << endl;
}

string cPhongChoThue::getMaP()
{
	return maP;
}

//Hàm thêm khách vào phòng
void cPhongChoThue::themKhachVaoPhong(cKhach* k)
{
	//Nếu phòng đủ rồi thì không thêm nữa
	if (soKhachDangThue < soNguoi)
	{
		thongTinK[soKhachDangThue] = *k;
		soKhachDangThue++;
	}
}

int cPhongChoThue::getSoNguoiO()
{
	return soKhachDangThue;
}

int cPhongChoThue::getSoNguoiToiDa()
{
	return soNguoi;
}

long cPhongChoThue::getGiaCoBan()
{
	return giaP;
}

cPhongChoThue::cPhongChoThue()
{
}


cPhongChoThue::~cPhongChoThue()
{
}
