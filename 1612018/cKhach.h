#pragma once
#include"cNgay.h"
class cKhach
{
private:
	string maK, tenK, cmnd;
	cNgay ngaySinh;
public:
	void nhap();
	void xuat();
	string getMaK();
	cKhach();
	~cKhach();
};

