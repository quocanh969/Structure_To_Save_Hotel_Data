#include"cNhaTro.h"

using namespace std;

void main()
{
	int luachon , kt = 1;//biến kt nhằm kiểm tra xem đa đọc dữ liệu chưa
	cNhaTro a;
	cout << "Luu y:" << endl << endl;
flagBegin:;
	//Menu lựa chọn
	cout << "-----1612018" << endl;
	cout << "----TRAN QUOC ANH----" << endl;
	cout << "Menu lua chon chuc nang:" << endl;
	cout << "1. Thoat" << endl;
	cout << "2. Nhap du lieu tu file" << endl;
	cout << "3. Xuat thong tin phong tro trong" << endl;
	cout << "4. Xuat thong tin cac phong da cho thue va thong tin khach thue" << endl;
	cout << "5. Doanh thu mot thang cua nha tro" << endl;
	cout << "Lua chon: ";
	cin >> luachon;
	luachon--;
	if (luachon < 0 || luachon > 4)
	{
		system("cls");
		cout << "Luu y: !!!Khong ton tai lua chon do, vui long nhap lai!!!" << endl << endl;
		goto flagBegin;
	}
	else
	{
		system("cls");
		if (luachon == 1)
		{
			//Chức năng 1: nhập thông tin từ file
			a.nhapTuFile("Phong.txt", "KhachHang.txt", "ChiTietPhong.txt");
			cout << "Da doc xong!!!" << endl;
			kt = 0;
		}
		else
		{
			if (kt == 1)
			{
				cout << "Luu y: !!!Ban van chua doc du lieu, vui long nhap du lieu!!!" << endl << endl;
				goto flagBegin;
			}
			if (luachon == 2)
			{
				//Chức năng 2: Xuất ra thông tin phòng trống
				// ~ ở đây phòng trống em làm là phòng chưa có người ở
				a.xuatTTPhongTrong();
			}
			else if (luachon == 3)
			{
				//Chức năng 3: Xuất ra thông tin phòng đã cho thuê (đủ số lượng người quy định của phòng đó)
				//Do không rõ là đủ số người quy định nghĩa là 
				// phòng có đủ người ( 2/2 hoặc 3/3)
				// hay phòng đã có người ( 1/2 hoặc 1/3 hoặc 2/3 hoặc 2/2 hoặc 3/3) nên em tiến hành cho lựa chon định nghĩa số phòng đủ quy định

				cout << "Luu y:" << endl << endl;
			flag:;//Menu lựa chon hình thúc phòng đạt tiêu chuẩn
				cout << "Chon dinh nghia cua phong co du so luong nguoi quy dinh:" << endl;
				cout << "1. Phong da day nguoi" << endl;
				cout << "2. Phong co nguoi" << endl;
				cout << "Lua chon: ";
				cin >> luachon;
				if (luachon < 1 || luachon >2)
				{
					system("cls");
					cout << "Luu y: !!!Khong ton tai lua chon do, vui long nhap lai!!!" << endl << endl;
					goto flag;
				}
				else if (luachon == 1)
				{
					a.xuatTTPhongDuNguoi();
				}
				else
				{
					a.xuatTTPhongCoNguoi();
				}
			}
			else if (luachon == 4)
			{
				//Chức năng 4: Tính doanh thu của một tháng
				long doanh_thu = a.doanhThu();
				cout << "Mot thang nha tro co doanh thu la " << doanh_thu << "dong" << endl;
			}
			else
			{
				exit(1);
			}

			
		}
		cout << endl << endl << "Nhap 1 de quay lai menu chinh hoac 0 de ket thuc" << endl << "Neu ngoai 2 lua chon tren thi chuong trinh tu hieu la ban nhap 0" << endl;
		cout << "Lua chon: ";
		cin >> luachon;
		if (luachon == 0)
		{
			exit(1);
		}
		else if (luachon == 1)
		{
			system("cls");
			goto flagBegin;
		}
		else
		{
			cout << "Khong ton tai lua chon do, chuong trinh se hieu la ban nhap 0";
			system("pause");
			exit(1);
		}
	}
}