#include "cPhongBa.h"

void cPhongBa::nhap(string MA_PHONG, string TEN_PHONG, int SO_NGUOI_TOI_DA)
{
	cPhongChoThue::nhap(MA_PHONG, TEN_PHONG, SO_NGUOI_TOI_DA);
	thongTinK = new cKhach[SO_NGUOI_TOI_DA];
}
void cPhongBa::xuat()
{
	cPhongChoThue::xuat();
	for (int i = 0; i < soKhachDangThue; i++)
	{
		cout << "Khach hang thu " << i + 1 << endl;
		thongTinK->xuat();
	}
}

cPhongBa::cPhongBa()
{
}


cPhongBa::~cPhongBa()
{
}
