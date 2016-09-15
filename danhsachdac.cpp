#include "iostream"
using namespace std;
const int MAX = 50;
struct dayso
{
	int ds[MAX];
	int n;
};
void initialize (dayso &x)
{
	x.n = 0;
}
int listsize (dayso x)
{
	return x.n;
}
int empty (dayso x)
{
	return (x.n == 0?1:0);
}
int full (dayso x)
{
	return (x.n == MAX?1:0);
}
void readlist (dayso &x)
{
	cout<<"\nNhap so luong phan tu cua DS: ";
	cin>>x.n;
	for(int i=0;i<listsize(x);i++)
	{
		cout<<"\nPhan tu thu "<<i+1<<": "<<endl;
		cin>>x.ds[i];
	}
	
}
void printlist (dayso x)
{/*
	if (empty(x))
		cout<<"\nDanh sach bi rong.";
	else*/ 
	cout<<"\nDanh sach Dac la: "<<endl;
		for(int i=0; i<listsize(x); i++)
			cout<<x.ds[i]<<" ";
}
void insert (dayso &x,int pos, int a)
{
	if (pos<0 || pos > x.n)
		cout<<"\n Vi tri "<<pos<<" khong hop le";
	else 
		if (empty(x))
			cout<<"\n Danh sach bi rong ";
		else if (full(x))
			cout<<"\nDanh sach bi day ";
		else 
		{
			for (int i= listsize(x)-1;i>= pos;i--)
			{
				x.ds[i+1] = x.ds[i];
				x.ds[pos]=a;
				x.n++;
			}
		}
}
void main()
{
	dayso x;
	initialize (x);
	readlist(x);
	printlist(x);
	int pos, k;
	cout<<"\nMoi ban nhap vao vi tri can chen";
	cin>>pos;
	cout<<"\nMoi ban nhap vao so ma ban muon chen."<<endl;
	cin>>k;
	insert(x,pos,k);
	cout<<"\nDS sau khi chen vao la: ";
	printlist(x);
	
}