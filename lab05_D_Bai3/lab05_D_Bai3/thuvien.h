#define MAX 100
#define TAB '\t'
// định nghĩa dử liệu kiểu mới 
typedef int Dayso[MAX];

// khai báo nguyên mẫu hàm nhập, xuất
void xuatmang(Dayso a, int n);
void chendauday(Dayso a, int &n, int x);
void xoadauday(Dayso a, int &n);
void Catdau_Chencuoi(Dayso a, int &n);
void Thay_X_Bang_Y(Dayso a, int &n, int x, int y);
void SapTang(Dayso a, int n);
void HoanVi(int &x, int &y);
void Sap_DuongTang_AmGiam_Khong(Dayso a, int n);
// định nghĩa các hàm xử lí , nhập xuất

void nhaptudong(Dayso a, int &n)
{
	int i;
	cout << "\nNhap kich thuoc n: ";
	cin >> n;
	srand((unsigned)time(NULL));
	for (i = 0; i < n; i++)
		a[i] = (MAX / 2 - rand() % MAX) / 6;
}

void xuatmang(Dayso a, int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << TAB;

}

void chendauday(Dayso a, int &n, int x)
{
	int i;
	for (i = n - 1; i >= 0; i--)
		a[i + 1] = a[i]; // đổi ra sau 1 vi trí, bắt đầu từ cuối mảng
	a[0] = x; // gán x tại vị trí đầu mảng
	n++; // kích thước mảng tăng lên 1
}

void xoadauday(Dayso a, int &n)
{
	int i;
	for (i = 1; i < n; i++)
		a[i - 1] = a[i]; // đổi vế trước 1 vị trí bắt từ vị trí 1 
	n--; // kích thước mảng giảm bớt 1
}
void Catdau_Chencuoi(Dayso a, int &n)
{
	int i,
		x; //lưu phần tử đầu 
	x = a[0];
	for (i = 1; i < n; i++)// xóa dấu
		a[i - 1] = a[i];// đổi vế trước 1 vị trí, bắt đầu từ vị trí 1
	a[n - 1] = x;// gán x tại vị trí cuối mảng 
}
void Thay_X_Bang_Y(Dayso a, int &n, int x, int y)
{
	int i;
	for (i = 0; i < n; i++)
	if (a[i] == x)
		a[i] = y;
}
void SapTang(Dayso a, int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)
	for (j = i + 1; j < n; j++)
	if (a[i]>a[j])
		HoanVi(a[i], a[j]);
}
void HoanVi(int &x, int &y)
{
	int tam;
	tam = x;
	x = y;
	y = tam;
}
void Sap_DuongTang_AmGiam_Khong(Dayso a, int n)
{
	int i, j, mc;
	for (i = 0; i < n - 1; i++)
	for (j = i + 1; j < n; j++)
	{
		mc = (a[i] < 0 && a[j] < 0 && a[i] < a[j]) ||
			(a[i] < 0 && a[j]>0) ||
			(a[i] == 0 && a[j] != 0) ||
			(a[i] > 0 && a[j] > 0 && a[i] > a[j]);
		if (mc)
			HoanVi(a[i], a[j]);
	}
}
