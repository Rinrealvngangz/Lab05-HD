int chonmenu(int somenu);

void xulymenu(int menu, DaySo a, int n);

void xuatmenu()
{
	cout << endl << "==============CHON CHUC NANG=================";
	cout << "0: Thoat khoi chuong trinh" << endl;
	cout << "1: Kiem tra x nam trong mang a" << endl;
	cout << "2: Tim vi tri dau tien cua x xuat hien trong a" << endl;
	cout << "3: Kiem tra mang a la day tang" << endl;
	cout << "4: Tim phan tu lon nhat" << endl;
	cout << "5: Tim vi tri cuoi cung gia tri lon nhat xuat hien" << endl;
	cout << "6: Neu a chua x thi cung chua -x" << endl;
	cout << "7: Xem du lieu day so" << endl;
	cout << "=============================================================" << endl;
}

int chonmenu(int somenu)
{
	int stt;
	for (; ;)
	{
		system("cls");
		xuatmenu();
		cout << "nhap 1 so khong khoang [0,..," << somenu << "] de chon chuc nang, stt=" << endl;
		cin >> stt;
		if (0 <= stt && stt <= somenu)
			break;
	}
	return stt;
}

void xulymenu(int menu, DaySo a, int n)
{
	// khai báo biến
	int x;
	int kq;
	switch (menu)
	{

	case 0:
		system("CLS");
		cout << endl << "\n0. Thoat khoi chuong trinh\n";
		break;
	case 1:

		cout << "1: Kiem tra x nam trong mang a" << endl;
		cout << " nhap gia tri x: ";
		cin >> x;
		kq = chuaX(a, n, x);
		// xuat thong bao
		system("CLS");
		cout << "\nmang hien hanh:\n ";
		xuatmang(a, n);
		if (kq)
			cout << " mang co chua " << x << endl;
		else
			cout << " manh khong chua " << x;
		break;
	case 2:
		cout << "2: Tim vi tri dau tien cua x xuat hien trong a" << endl;
		cout << " nhap gia tri x :" << endl;
		cin >> x;
		kq = tim_VTDT_X(a, n, x);
		//xuat thong bao
		system("CLS");
		cout << " \nMang hien hanh:\n";
		xuatmang(a, n);
		if (kq = -1)
			cout << " mang khong chua " << x;
		else
			cout << "\n vi tri dau tien" << x << "xuat hien trong a la : " << kq;
		break;
	case 3:

		cout << "3: Kiem tra mang a la day tang" << endl;
		kq = kiemtramangtang(a, n);
		// xuất thông báo
		system("CLS");
		cout << "\nmang hien hanh:\n";
		xuatmang(a, n);
		if (kq)
			cout << endl << "a la mang tang.";
		else
			cout << endl << " a khong phai la mang tang.";

		break;
	case 4:
		cout << "4: Tim phan tu lon nhat" << endl;
		kq = tinhmax(a, n);
		// xuất thông báo
		system("CLS");
		cout << "\nmang hien hanh:\n ";
		xuatmang(a, n);
		cout << "\nMax[0,...," << n << "]=" << kq;

		break;
	case 5:
		system("CLS");
		cout << " tim vi tri phan tu lon nhat " << endl;
		kq = timvitrimax_cuoicung(a, n);
		// xuất thông báo  
		system("CLS");
		cout << "\nmang hien hanh:\n ";
		xuatmang(a, n);
		cout << endl << " vi tri xuat hien cuoi cung cua gia tri lon nhat la " << kq;
		break;
	case 6:

		cout << "6: Neu a chua x thi cung chua -x" << endl;
		kq = chuaXchuatruX(a, n);
		// xuất thông báo
		system("CLS");
		cout << "\nmang hien hanh:\n ";
		xuatmang(a, n);
		if (kq)
			cout << endl << "phat bieu dung ";
		else
			cout << endl << " phat bieu sai ";

		break;
	case 7:
		system("CLS");
		cout << "7: Xem du lieu day so" << endl;
		cout << " \n day so hien hanh:\n";
		xuatmang(a, n);
		break;
	}
	_getch();
}

