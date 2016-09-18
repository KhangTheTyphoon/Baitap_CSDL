#include "iostream"
using namespace std;
const int MAX = 50;
struct dayso 
{
	int ds[MAX];
	int n;
};
dayso x;
void initialize(dayso &x)
{
	x.n =0;
}
int listsize (dayso x)
{
	return (x.n);
}
int empty (dayso x)
{
	return (x.n==0?1:0);
}
int full (dayso x)
{
	return (x.n==MAX?1:0);
}
void readlist (dayso &x)
{
	cout<<"\nNhap so luong phan tu: ";
	cin>>x.n;
	for(int i=0;i<x.n;i++)
	{
		cout<<"\nNhap so luong phan tu: "<<i+1<<" la: ";
		cin>>x.ds[i];
	}
}
void printlist(dayso x)
{
	cout<<"\nPhan tu trong danh sach: ";
	for(int i=0; i<x.n;i++)
	{
		cout<<x.ds[i]<<"\t";
	}
}
int search_binary(dayso x, int a)
{
	int bottom = 0, top = x.n -1;
	int mid;
	do{
		mid = (bottom +top)/2;
		if(a== x.ds[mid]) 
			return mid;
		else if(a<x.ds[mid])
			top = mid-1;
		else bottom = mid+1;
	}while(bottom <= top);
	return -1;
}
void main()
{
	dayso x;
	initialize(x);
	readlist(x);
	printlist(x);
	int a;
	cout<<"\nNhap vao so ban can tim: ";
	cin>>a;
	if (search_binary(x,a)==-1)
		cout<<"\nKhong tim thay nha."<<endl;
	else cout<<"\nVi tri la: "<<search_binary(x,a)<<endl;
}