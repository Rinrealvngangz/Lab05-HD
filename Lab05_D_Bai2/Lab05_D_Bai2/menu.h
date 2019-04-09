
// khai báo nguyên mẫu hàm

int chonmenu(int somenu);
void xulimenu(int menu, DaySo a, int &n);

void xuatmenu()
{
	cout << "==============CHON CHUC NANG==================" << endl;
	cout << "0: Thoat khoi chuong trinh " << endl;
	cout << "1: Nhap tu dong mang a" << endl;
	cout << "2: Xem du lieu mang a" << endl;
	cout << "3: Dem so lan xuat hien cua x trong a" << endl;
	cout << "4: Dem va xuat cac so nguyen to trong a " << endl;
	cout << "5: Tinh tong cac gia tri trong mang" << endl;
	cout << "6: Tinh tong cac gia tri xuat hien mot lan trong mang" << endl;
	cout << "7: Tinh tong cac gia tri phan biet trong mang" << endl;
	cout << "===============================================================" << endl;
}

int chonmenu(int somenu)
{
	int stt;
	for (; ;)
	{
		system("CLS");
		xuatmenu();
		cout << " \nNhap 1 so khong khoang [0,...," << somenu << "] de chon chuc nang stt:=";
		cin >> stt;
		if (0 <= stt && stt <= somenu)
			break;
	}
	return stt;
}

void xulimenu(int menu,  DaySo a, int &n )
{
	// khai báo biến 
	int x, kq;
	switch (menu)
	{
	case 0:
		system("cls");
		cout <<  "0: Thoat khoi chuong trinh " << endl;
		break;
	case 1:
		system("cls");
		cout << "1: Nhap tu dong mang a" << endl;
		cout << "\nNhap kich thuoc n: ";
		cin >> n;
	// gọi hàm nhập dử liệu
		nhaptudong(a, n);
		system("CLS");
		cout << "\nDay so moi nhap :\n ";
		xuatmang(a, n);
		break;
	case 2:
		system("cls");
		cout << "7: Xem du lieu day so ";
		cout << "\nday so hien hanh: \n";
		xuatmang(a, n);
		break;
	case 3:
		system("cls");
		cout << "3: Dem so lan xuat hien cua x trong a" << endl;
		cout << "\nNhap gia tri can xet: x= ";
		cin >> x;
		kq = Dem_X(a, n, x);
		system("cls");
		cout << "\nSo lan " << x << " xuat hien trong a : kq = " << kq;
		cout << "\nXem lai mang hien hanh de kiem tra : \n";
		xuatmang(a, n);
		break;
	case 4:
		system("cls");
		cout << "4: Dem va xuat cac so nguyen to trong a " << endl;
		kq = Dem_NT(a, n);
		if (kq)
			cout << "\nSo luong cac so nguyen to trong a la :" << kq;
		else
			cout << " \n khong co so nguye nto nao trong a ";
		cout << "\nXem  lai mang hien hanh de kiem ra ket qua ";
		xuatmang(a, n);
		break;
	case 5:
		system("cls");
		cout << "5: Tinh tong cac gia tri trong mang" << endl;
		cout << "\n Tong ca phan tu trong mang : sum = " << tinhtong(a, n);
		cout << "\nXem  lai mang hien hanh de kiem ra ket qua ";
		xuatmang(a, n);
		break;
	case 6:
		system("cls");
		cout << "6: Tinh tong cac gia tri xuat hien mot lan trong mang" << endl;
		cout << "\n Tong cac phan tu trong mang chi xuat hien 1 lan: sum= " << tinhtongduynhat(a, n);
		cout << "\nXem  lai mang hien hanh de kiem ra ket qua ";
		xuatmang(a, n);

		break;
		case 7:
			system("cls");
		cout << "7: Tinh tong cac gia tri phan biet trong mang" << endl;
		kq = tongphanbiet(a, n);
		cout << "\nTong cac phan tu phan biet trong a: sum=" << kq;
		cout << "\nXem  lai mang hien hanh de kiem ra ket qua ";
		xuatmang(a, n);

		break;
	}
	_getch();
}

