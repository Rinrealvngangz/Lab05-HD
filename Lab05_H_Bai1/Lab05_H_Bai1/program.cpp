#include<iostream>
#include<conio.h>
using namespace std;
#include"thuvien.h"
#include"menu.h"

void chaychuongtrinh();
int main()
{
	chaychuongtrinh();

	return 0;
}

void chaychuongtrinh()

{
	int somenu = 7,// lưu số các chức năng
		menu,// lưu số thứ tự chức năng người dùng chọn
		n = 0;// kích thước mảng và giá trị khởi tạo
	DaySo a;
	cout << endl << "nhap mot so nguyen duong: ";
	cin >> n;
	// nhập dữ liệu cho mảng a
	nhapmang(a, n);
	// lặp lại việc chọn và xử lý menu cho tới khi 
	// người dùng chọn chức năng 0. Thoát khởi CT
	do
	{
		menu = chonmenu(somenu);
		xulymenu(menu, a, n);
	} while (menu > 0);

	_getch();

}

