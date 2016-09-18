//#include "iostream"
//using namespace std;
//void nhapso(int &a);
//int ktsohoanthien(int n);
//void lietke(int n);
//int tongnhohonn(int n);
//void main()
//{
//	int m;
//	nhapso(m);
//	if(ktsohoanthien(m)==1)
//		cout<<m<<" la so hoan thien."<<endl;
//	else cout<<m<<" khong la so hoan thien."<<endl;
//	cout<<"cac so hoan tien nho hon "<<m<<" la: ";
//	lietke(m);
//	cout<<"\nTong cac so hoan thien nho hon "<<m<<" la: "<<tongnhohonn(m)<<endl;
//
//}
//void nhapso(int &a)
//{
//	do{
//		cout<<"\nNhap mot so nguyen n : ";
//		cin>>a;
//	}while(a<0);
//}
//int ktsohoanthien(int n)
//{
//	int tong=0;
//	for(int i=1; i<n; i++)
//	{
//		if(n%i==0)
//			tong+=i;
//	}
//	if(tong==n)
//			return 1;//trả giá trị đúng.
//		else return 0;//Trả giá trị sai.
//}
//void lietke(int n)
//{
//	for(int i=1;i<n;i++)
//	{
//		if(ktsohoanthien(i) ==1)
//			cout<<i<<"\t";
//	}
//	
//}
//int tongnhohonn(int n)
//{
//	int tong=0;
//	for(int i=1;i<n;i++)
//	{
//		if(ktsohoanthien(i) ==1)
//			tong+=i;
//
//	}
//	return tong;
//}
