#include"b3.h"
//Ma SV: 2122110031
//Ho ten: Dao Van Phuong
//Ngay thuc hien: 
//----------------------------------------------------

//-------------cau 1---------------
void NhapMang(int a[], int n)
{
	
	if (n == 0)	return;
	NhapMang(a, n - 1);
	cout << "\na[" << n - 1 << "]= ";
	cin >> a[n - 1];
}

void XuatMang(const int a[], int n)
{
	if (n == 0)	return;
	XuatMang(a, n - 1);
	cout << a[n - 1] << "\t";
}

//-------cau 2-------------
bool KTCP(int k)
{
	int tam;
	tam = (int)sqrt((double)k);
	if (tam * tam == k)
		return true;
	return false;
}
int kiemtra(const int a[], int n)
{
	if (n == 0) return 0;
	int d=kiemtra(a, n - 1);
	if (KTCP(a[n - 1]) == true)
		d++;
	return d;
}
void LietkeCP(const int a[], int n)
{
	if (n == 0) return ;
	LietkeCP(a, n - 1);
	if (KTCP(a[n - 1]) == true)
		cout << a[n - 1]<<"\t";
}

int TongCP(const int a[], int n)
{
	if (n == 0) return 0;
	int s = TongCP(a, n - 1);
	if (KTCP(a[n - 1]) == true)
		s += a[n - 1];
	return s;
}

 //--------cau 3----------
int DemCS(int h)
{
	int	d = 0;
	if (h < 0)
		h = -h;	 // nếu h <0 thì đổi dấu
	while (h != 0)
	{
		d++;
		h = h / 10;	//chia đến khi h = 0
	}
	return d;
}

int DemSoCoKcs(const int a[], int n,int k)
{
	if (n == 0) return 0;
	int d=DemSoCoKcs(a, n-1,k);
	if (DemCS(a[n - 1]) == k)
		d++;
	return d;
}

bool KTNT(int x)
{
	if (x < 2) return false;
	for (int i = 2; i <= (int)sqrt((double)x); i++)
	{
		if (x % i == 0)
			return false;
	}
	return true;
}
int TimNTD(const int a[], int n)
{
	if (n == 0) return -1;
	int s=TimNTD(a, n - 1);
	if(s==-1)	 // cho đệ quy duyệt từ ngược lại
		if (KTNT(a[n - 1]) == true)
			s=a[n - 1];
	return s;
}
void lietkeNT(const int a[], int n)
{
	if (n == 0) return;
	lietkeNT(a, n - 1);
	if (KTNT(a[n - 1]) == true)
		cout << a[n - 1] << "\t";
}
