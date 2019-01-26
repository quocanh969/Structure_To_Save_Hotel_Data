#include "cNhaTro.h"

void cNhaTro::nhapTuFile(char *filePhong, char *fileKhach, char *fileTTChiTiet)
{
	//Nhập thông tin các phòng trọ
	freopen(filePhong, "r", stdin);

		//Sử dụng 3 biến tạm ma_phong, ten_phong, so_nguoi_toi_da
	string ma_phong, ten_phong;
	int so_nguoi_toi_da;
	while (!cin.eof())
	{
		cPhongChoThue *t = NULL;
		cin >> ma_phong;
		cin >> ten_phong;
		cin >> so_nguoi_toi_da;
		switch (so_nguoi_toi_da)
		{
		case 2:
		{
			t = new cPhongDoi;
			t->nhap(ma_phong, ten_phong, so_nguoi_toi_da);
			break;
		}
		case 3:
		{
			t = new cPhongBa;
			t->nhap(ma_phong, ten_phong, so_nguoi_toi_da);
			break;
		}
		}
		ds_phong.push_back(t);
	}
	fclose(stdin);
	cin.clear();

	//Nhập thông tin các vị khách
	freopen(fileKhach, "r", stdin);
	while (!cin.eof())
	{
		cKhach *temp = new cKhach;
		temp->nhap();
		ds_khach.push_back(temp);
	}
	fclose(stdin);
	cin.clear();

	//Nhập thông tin chi tiết để có thể sắp xếp khách vào phòng
	freopen(fileTTChiTiet, "r", stdin);
	cKhach *Khach;
	cPhongChoThue *Phong;
	string maKhach, maPhong;
	while (!cin.eof())
	{
		cin >> maPhong;
		cin >> maKhach;
		Khach = timKhachDuaVaoMa(maKhach);
		Phong = timPhongDuaVaoMa(maPhong);
		Phong->themKhachVaoPhong(Khach);
	}
	fclose(stdin);
	cin.clear();
	//Kết thúc quá trình đọc file, quay lại quá trình nhập vào từ CONSOLE
	freopen("CON", "r", stdin);
}	

//Hàm tìm phòng: trả về là con trỏ của phòng có mã cần tìm
cPhongChoThue* cNhaTro::timPhongDuaVaoMa(string ma)
{
	for (int i = 0; i < ds_phong.size(); i++)
	{
		if (ma == ds_phong[i]->getMaP())
		{
			return ds_phong[i];
		}
	}
	return NULL;
}

//Hàm tìm khách: trả về là con trỏ của khách có mã cần tìm
cKhach* cNhaTro::timKhachDuaVaoMa(string ma)
{
	for (int i = 0; i < ds_khach.size(); i++)
	{
		if (ma == ds_khach[i]->getMaK())
		{
			return ds_khach[i];
		}
	}
	return NULL;
}

void cNhaTro::xuatTTPhongTrong()
{
	for (int i = 0; i < ds_phong.size(); i++)
	{
		if (ds_phong[i]->getSoNguoiO() == 0)
		{
			cout << "-------------------------" << endl;
			ds_phong[i]->xuat();
		}
	}
}

void cNhaTro::xuatTTPhongDuNguoi()
{
	for (int i = 0; i < ds_phong.size(); i++)
	{
		if (ds_phong[i]->getSoNguoiO() == ds_phong[i]->getSoNguoiToiDa())
		{
			cout << "-------------------------" << endl;
			ds_phong[i]->xuat();
		}
	}
}

void cNhaTro::xuatTTPhongCoNguoi()
{
	for (int i = 0; i < ds_phong.size(); i++)
	{
		if (ds_phong[i]->getSoNguoiO() != 0)
		{
			cout << "-------------------------" << endl;
			ds_phong[i]->xuat();
		}
	}
}

long cNhaTro::doanhThu()
{
	long res = 0;
	int so_nguoi_o, so_nguoi_toi_da;
	for (int i = 0; i < ds_phong.size(); i++)
	{
		so_nguoi_o = ds_phong[i]->getSoNguoiO();
		so_nguoi_toi_da = ds_phong[i]->getSoNguoiToiDa();
		if(so_nguoi_o == 0)
		{
			res += (long)((-0.1)*(double)ds_phong[i]->getGiaCoBan());
		}
		else if (so_nguoi_o == so_nguoi_toi_da)
		{
			res += ds_phong[i]->getGiaCoBan();
		}
		else
		{
			switch (so_nguoi_toi_da)
			{
			case 2:
			{
				res += (long)((0.8)*(double)ds_phong[i]->getGiaCoBan());
				break;
			}
			case 3:
			{
				if (so_nguoi_o == 1)
				{
					res += (long)((0.7)*(double)ds_phong[i]->getGiaCoBan());
				}
				else
				{
					res += (long)((0.9)*(double)ds_phong[i]->getGiaCoBan());
				}
				break;
			}
			}
		}
	}
	return res;
}

cNhaTro::cNhaTro()
{
}


cNhaTro::~cNhaTro()
{
}
