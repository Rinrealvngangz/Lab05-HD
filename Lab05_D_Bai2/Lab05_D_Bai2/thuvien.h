// định nghĩa dử liệu , hằng
#define MAX  100
#define TAB '\t'
// định nghĩa dử liệu kiểu mới

typedef int DaySo [MAX];
 // khai báo nguyên mẫu hàm
void xuatmang(DaySo a, int n);
int Dem_X(DaySo a, int n, int x);
int Dem_NT(DaySo a, int n);
int kiemtra_NT(int x);
int tinhtong(DaySo a, int n);
int tinhtongduynhat(DaySo a, int n);
int tongphanbiet(DaySo a, int n);
// định nghĩa các hàm xử lí nhập xuất

void nhaptudong(DaySo a, int n)
{
	srand((unsigned)time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = (MAX / 2 - rand() % MAX) / 2;// ngẫu nhiên trong khoảng [-8,8]
	}

}
void xuatmang(DaySo a, int n)
{
	int i;
	for (i = 0; i < n; i++)
		cout << a[i] << TAB;
}

int Dem_X(DaySo a, int n, int x)
{
	int i, dem = 0;
	for (i = 0; i < n; i++)
	{
		if (a[i] == x)
			dem++;
	}
	return dem;
}

int kiemtra_NT(int x)
{
	int i, m, kq;
	if (x < 2)
		kq = 0;
	else
	{
		m = (int)sqrt((double)x);
		kq = 1;
		for (i = 2; i <= m; i++)
		{
			if (x%i == 0)
				kq = 0;
				break;
			
		}
	}
	return kq;

}
int Dem_NT(DaySo a, int n)
{
	int i, dem = 0;
	cout << "\nCac so nguyen to trong a:= \n";
	for (i = 0; i < n; i++)
	{
		if (kiemtra_NT((a[i])))
			dem++;
			cout << a[i] << TAB;
	

	}
	return dem;
}

int tinhtong(DaySo a, int n)
{
	int i,
		sum = 0;
	for (int i = 0; i < n; i++)
		sum += a[i];
	return sum;
}
int tinhtongduynhat(DaySo a, int n)
{
	int i,
		sum = 0;
	for (i = 0; i, n;i++)
	if (Dem_X(a, n, a[i]) == 1)
		sum += a[i];
	return sum;
}

int tongphanbiet(DaySo a , int n)
{
	DaySo b; // lưu trử các giá trị phân biệt của a
	int i, // duyệt a
		m, // kích thước của b
		j, // duyệt b
		dau, // danh sách đầu để nhận dạng a[i] đã xuất hiện trong b
		sum = 0;
	m = 0;
	for (i = 0; i < n; i++)
	{
		dau = 1; // a[i] chưa có trong b

		for (j = 0; j < m && dau; j++)
			dau = dau && (a[i] != b[j]);
			if (dau) // a[i] chưa  có trong b
			{
				b[m++] = a[i];
				sum += a[i];
			}
	}
	return sum;
}



