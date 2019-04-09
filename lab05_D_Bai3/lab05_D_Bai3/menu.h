void XuLyMenu(int menu, Dayso a, int &n);
int  chonmenu(int somenu);
void xuatmenu()
{
	cout << "=============CHON CHUC NANG===============0" << endl;
	cout << "0: Thoat khoi chuong trinh" << endl;
	cout << "1: Nhap tu dong day a" << endl;
	cout << "2: Xem du lieu day a" << endl;
	cout << "3: Chen x vao dau day" << endl;
	cout << "4: Xoa cac phan tu dau day" << endl;
	cout << "5: cac phan tu dau day roi chen vao cuoi day" << endl;
	cout << "6: Thay the cac gia tri x trong a bang gia tri y" << endl;
	cout << "7: Sap xep day tang dan" << endl;
	cout << "8: Sap xep day theo yeu cau : Duongtang-Am giam _khong" << endl;
	cout << "=======================================================" << endl;
}

int chonmenu(int somenu)
{
	int stt;
	for (;;)
	{
		system("CLS");
		xuatmenu();
		cout << " nhap 1 so khac khong [0,...," << somenu << "] de chon chuc nang stt:= ";
		cin >> stt;
		if (0 <= stt && stt <= somenu)
			break;
	}
	return stt;
}

void XuLyMenu(int menu, Dayso a, int &n)
{
	// Khai báo biến
	int x,y, kq;
	switch (menu)
	{
	case 0:
		system("CLS");
		cout << endl << "\n0. Thoat khoi chuong trinh.\n";
		break;
	case 1:
	
		cout << endl << "1. Nhap tu dong day a";
		nhaptudong(a, n);
		system("CLS");
		cout << "\nDay so moi nhap ";
		xuatmang(a, n);
		break;
	case 2:
		system("CLS");
		cout << endl << "2. Xem du lieu day a";
		cout << "\nDay so hien hanh : ";
		xuatmang(a, n);
		break;
	case 3:
		system("CLS");
		cout << endl << "3. Chen x vao dau day";
		cout << "\nnhap gia tri can chen x:=";
		cin >> x;
		cout << " \nkich thuoc hien hanh: n= " << n;
		cout << "\nDay so hien hanh : ";
		xuatmang(a, n);
		chendauday(a, n, x);
		cout << "\nKich thuoc mang ket qua: n= " << n;
		cout << "\nDay so ket qua sau khi chen " << x << "vao dau day :\n";
		xuatmang(a, n);
		break;
	case 4:
		system("CLS");
		cout << endl << "4. Xoa phan tu dau day";
		cout << " \nkich thuoc hien hanh: n= " << n;
		cout << "\nDay so hien hanh : ";
		xuatmang(a, n);
		xoadauday(a, n);
		cout << "\nKich thuoc mang ket qua: n= " << n;
		cout << "\nDay so ket qua sau khi chen " << x << "vao dau day :\n";
		xuatmang(a, n);
		break;
	case 5:
		system("CLS");
		cout << endl << "5. Cat phan tu dau day roi chen vao cuoi day";
		cout << " \nkich thuoc hien hanh: n= " << n;
		cout << "\nDay so hien hanh : ";
		xuatmang(a, n);
		Catdau_Chencuoi(a, n);
		cout << "\nKich thuoc mang ket qua: n= " << n;
		cout << "\nDay so ket qua sau khi chen " << x << " vao dau day :\n";
		xuatmang(a, n);
		break;
	case 6:
		system("CLS");
		cout << endl << "6. Thay the cac gia tri x trong a bang gia tri y";
		cout << "\nNhap gia tri can thay the: x = ";
		cin >> x;
		cout << "\nNhap gia tri thay the: y = ";
		cin >> y;
		cout << " \nkich thuoc hien hanh: n= " << n;
		cout << "\nDay so hien hanh : ";
		xuatmang(a, n);
		Thay_X_Bang_Y(a, n, x, y);
		cout << "\nKich thuoc mang ket qua: n= " << n;
		cout << "\nDay so ket qua sau khi chen " << x << " vao dau day :\n";
		xuatmang(a, n);
		break;
	case 7:
		system("CLS");
		cout << endl << "7. Sap day tang dan";
		cout << "\nDay so hien hanh:\n";
		xuatmang(a, n);
		SapTang(a, n);
		cout << "\nDay so sau khi sap tang:\n";
		xuatmang(a, n);
		
		break;
	case 8:
		system("CLS");
		cout << endl << "8. Sap day theo yeu cau :Duong Tang – Am Giam - Khong";
		cout << "\nDay so hien hanh:\n";
		xuatmang(a, n);
		Sap_DuongTang_AmGiam_Khong(a, n);
		cout << "\nDay so sau khi sap theo yeu cau:\n";
		xuatmang(a, n);
		break;

	}
	_getch();
}