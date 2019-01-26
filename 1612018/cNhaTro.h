#pragma once
#include"cPhongBa.h"
#include"cPhongDoi.h"

class cNhaTro
{
private:
	vector<cPhongChoThue*> ds_phong;
	vector<cKhach*> ds_khach;
public:
	//Yêu cầu 1:
	void nhapTuFile(char*, char*, char *);

	//2 hàm phụ giúp cho giúp cho việc đọc fiel CHI_TIET_PHONG
	cPhongChoThue* timPhongDuaVaoMa(string);
	cKhach* timKhachDuaVaoMa(string);

	//Yêu cầu 2:
	void xuatTTPhongTrong();

	//Yêu cầu 3: 
	void xuatTTPhongDuNguoi();
	void xuatTTPhongCoNguoi();

	//Yêu cầu 4:
	long doanhThu();

	cNhaTro();
	~cNhaTro();
};

