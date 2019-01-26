#include "cKhach.h"

void cKhach::nhap()
{
	cin >> maK;
	cin.seekg(1, 1);
	getline(cin, tenK, '0');
	//vì mọi số CMND đều bắt đầu từ 0 nên ta đọc đến 0 
	//nghĩa là đã đọc đến đầu cùa phần số điện thoại
	tenK.erase(tenK.length() - 1);//Xóa kí tự '\t' hoặc là ' ' ở cuối
	cin.seekg(-1, 1);
	cin >> cmnd;
	cin >> ngaySinh;
}

void cKhach::xuat()
{
	cout << "\tMa khach hang: " << maK << endl;
	cout << "\tTen khach hang: " << tenK << endl;
	cout << "\tCMND: " << cmnd << endl;
	cout << "\tNgay sinh: " << ngaySinh << endl;
}

string cKhach::getMaK()
{
	return maK;
}

cKhach::cKhach()
{
}


cKhach::~cKhach()
{
}
