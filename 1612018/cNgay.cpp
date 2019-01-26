#include "cNgay.h"

istream& operator >> (istream&in, cNgay &a)
{
	char trash;//dùng để đọc kí tự "-" hoặc "/" phân biệt ngày/tháng/năm
	in >> a.d >> trash >> a.m >> trash >> a.y;
	return in;
}

ostream& operator << (ostream&out, cNgay &a)
{
	out << setw(2) << setfill('0');
	out << a.d << "/";
	out << setw(2) << setfill('0');
	out << a.m << "/";
	out << setw(4) << setfill('0');
	out << a.y;
	return out;
}

cNgay::cNgay()
{
}


cNgay::~cNgay()
{
}
