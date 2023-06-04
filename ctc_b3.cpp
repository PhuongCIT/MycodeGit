#include"b3.h"
//----------------------------------------------------
int a[MAX] = { 2,4,-8,6,11,49 };
int n = 6;
//----------------------------------------------------
int Menu()
{
	int cv, k = 0;//bien k la so thu tu trong ham Menu()

	cout << "\nTHAO TAC TREN MANG 1 CHIEU BANG PHUONG PHAP DE QUY";
	cout << "\n----------------------------------------";
	cout << "\n1. Nhap/xuat ma tran a, voi m dong n cot."; k++;	 
	cout << "\n2. Liet ke so phan tu la so chinh phuong."; k++;
	cout << "\n3. .Dem so phan tu co k chu so"; k++;
	cout << "\n4. Tim phan tu nguyen to dau tien."; k++;
	cout << "\n5. Tinh tong cac phan tu la so chinh phuong."; k++;
	
	cout << "\n0. Ket thuc chuong trinh";
	do {
		cout << "\n\nBan hay chon cong viec: ";
		cin >> cv;
	} while (cv<0 || cv>k);
	return cv;
}
//--------------------------------------------
int cv, k, kq;

int main()
{


	do
	{
		system("cls");
		cv = Menu();
		switch (cv)
		{
		case 1:
			cout << "\nNhap n= "; cin >> n;
			NhapMang(a, n);
			cout << "\n>>>Mang vua nhap: \n";
			XuatMang(a, n);

			break;

		case 2:
			XuatMang(a, n);
			cout << "\n>>>Liet ke cac phan tu la so chinh phuong: \n";
			kq = kiemtra(a, n);
			if (kq == 0)
				cout << "\n>>>Mang khong co so chinh phuong!!!!";
			else
			{
				cout << "\n>>>cac phan tu la so chinh phuong:";
				LietkeCP(a, n);

			}
			break;
		case 3:
			XuatMang(a, n);
			cout << "\n>>>Dem phan tu co k chu so, nhap k= "; cin >> k;
			while(k<1)
			{
				cout << "\nNhap lai k= "; cin >> k;
			}
			kq = DemSoCoKcs(a, n, k);
			cout << "\n\n>>>So phan tu co " << k << " chu so la: " << kq << endl;
			
			break;
		case 4:
			cout << "\n>>>Mang:\t";
			XuatMang(a, n);
			kq = TimNTD(a, n);
			if (kq == -1)
				cout << "\n>>>Mang khong co so nguyen to !!!";
			else
			{
				cout << "\n\n>>>Cac so phan tu nguyen to: ";
				lietkeNT(a, n);
				cout << "\n\n>>phan tu nguyen to dau tien la:"<<kq;

			}
			break;
		case 5:
			cout << "\n>>>Mang:\t";
			XuatMang(a, n);
			kq = kiemtra(a, n);
			if (kq == 0)
				cout << "\n\n>>>Mang khong co so chinh phuong!!!!";
			else
			{
				kq = TongCP(a, n);
				cout << "\n>>>cac phan tu la so chinh phuong:";
				LietkeCP(a, n);
				cout << "\n\n>>>Tong so chinh phuong: " << kq<<endl;

			}
			break;
		
		case 0:
			cout << "\n__________Tam biet PHUONG!____________";
			break;
		}//of swtich

		cout << endl << endl;
		system("pause");

	} while (cv != 0);
	return 0;
}
//--------------------------------------------
