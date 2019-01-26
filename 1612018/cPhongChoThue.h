#pragma once
#include"cKhach.h"

class cPhongChoThue
{
protected:
	string maP, tenP;
	int soNguoi, dienTich, soKhachDangThue = 0;//Ban đầu chưa có khách thuê nên là 0
	long giaP;
	cKhach *thongTinK;
public:
	virtual void nhap(string, string, int);
	virtual void xuat();

	string getMaP();
	void themKhachVaoPhong(cKhach*);

	int getSoNguoiO();
	int getSoNguoiToiDa();

	long getGiaCoBan();

	cPhongChoThue();
	~cPhongChoThue();
};

