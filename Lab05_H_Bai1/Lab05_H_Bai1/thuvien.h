// định nghĩa hằng
#define MAX 100 // kích thước magnr 1 chiều 
#define TAB '\t'

// định nghĩa dữ liệu kiểu mới 
typedef int DaySo[MAX];

// khai báo ngyên mẫu các hàm xử lý., nhập xuất
void xuatmang(DaySo a, int n);
int chuaX(DaySo a, int n, int x);
int tim_VTDT_X(DaySo a, int n, int x);
int kiemtramangtang(DaySo a, int n);
int tinhmax(DaySo a, int n);
int timvitrimax_cuoicung(DaySo a, int n);
int chuaXchuatruX(DaySo a, int n);
// định nghĩa các hàm nhập xuất

void nhapmang(DaySo a, int n)
{
	int i;
	// duyệt qua từng phần tử từ vị trí 0 tới n-1
	for (i = 0; i < n; i++)
	{
		// xuất thông báo yêu cầu người dùng nhập
		cout << "a[" << i << "]=";
		//chờ người dùng nhập phần tử thứ i
		cin >> a[i];
	}
}
void xuatmang(DaySo a, int n)
{
	int i;
	for (i = 0; i < n; i++)
		cout << a[i] << TAB;// HAI GIÁ TRỊ CÁCH NHAU 1 TAB

}

int chuaX(DaySo a, int n, int x)
{
	int i, kq;
	kq = 0;// ban đầu , giả sử mảng a không chứa x
		   // duyệt qua các phần tử dể kt
	for (i = 0; i<n; i++)
		if (a[i] == x)// nếu tìm thấy phần tử x
		{
			kq = 1; // thì cập nhật kq và
			break; // dừng, không cần tìm nữa
		}
	return kq;
}

int tim_VTDT_X(DaySo a, int n, int x)
{
	int i,
		kq = -1;// Ban đầu, giả sử magnr a không chứa x
				//  duyệt qua các phần tử dể kt
	for (i = 0; i < n; i++)
	{
		if (a[i] == x) // nếu tìm thấy phần tử x
		{
			kq = i; // thì cập nhật kết quả là vị trí đầu tiên là i và 
			break;  // dừng, không cần tìm nữa
		}
	}
	return kq;
}
int kiemtramangtang(DaySo a, int n)
{
	int i,
		kq = 1;// ban đầu, giả sử mảng a có thứ tự tăng
			   //  duyệt qua các phần tử dể kt
	for (i = 0; i < n; i++)
	{
		if (a[i] > a[i + 1])// nếu có cặp phần tử ma số 
							// đứng trước > số đứng sau
			kq = 0;     // thì cập nhật kq và
		break;          // dừng , không cần ktra nữa
	}
	return kq;
}
int tinhmax(DaySo a, int n)
{
	int i,
		max; // lưu trử giá trị lớn nhất của mảng
	max = a[0]; // Ban đầu, giả sử phần tử đầu tiên là lớn nhất
				// duyệt qua các phần tử dể giả thuyết
	for (i = 1; i < n; i++)
		if (a[i] > max) // nếu có phần tử lớn hơn  
			max = a[i];// pt giả thuyết, cập nhật 
	return max;
}
int timvitrimax_cuoicung(DaySo a, int n)
{
	// ban dầu, giả sử ptu đầu tiên là lớn nhất
	int vt = 0,
		max = a[vt];
	int i;
	// duyệt qua các phần tử dể giả thuyết
	for (i = 1; i < n; i++)
	{
		if (a[i] >= max)// nếu có phần tử không nhỏ hơn
						// giá trị max giả định
			vt = i;    // thì cập nhật lại vị trí 
		max = a[vt];   // và phần tử lớn nhất 

	}
	return vt;
}
int chuaXchuatruX(DaySo a, int n)
{
	int i,// duyet cac phan cua mang
		kq,// luu ket qua kiem tra phat bieu
		x, // lưu giá trị a[i]
		kqTam;// lưu kq kiểm tra a có chứa -x
	kq = 1;// đầu tiên xem kq phát biểu là đúng
		   // duyệt qua các phần tử dể giả thuyết
	for (i = 1; i, n; i++)
	{
		x = -a[i];
		kqTam = chuaX(a, n, x);
		if (kqTam == 0)// nếu có 1 x (!=0) mà a không của -x
		{
			kq = 0;//phát biểu sai
			break;
		}
	}
	return kq;
}

