/* Mình tên Khang, chào các bạn, facebook của mình là: https://www.facebook.com/pokemonaremylife.*/
#include "iostream"
#include <math.h>
using namespace std;
void nhapso(int &a);
float giatribieuthuc(int n);
void main ()
{
	int b;
	nhapso(b);
	cout<<"\nGia tri bieu thuc can tinh la: "<<giatribieuthuc(b)<<endl;
}
void nhapso(int &a)
{
	do{
		cout<<"\nNhap so nguyen duong: ";
		cin>>a;
	}while(a<=0);
}
float giatribieuthuc(int n)
{
	float tong=0;
	int mau=1;
	int dau=0;
	for(int i=2; i<=n; i++)
	{
		mau=mau*i;
		tong+=(pow((float)-1,i)/(float)mau)* dau;
		dau=-1;
	}
	return tong;
}
