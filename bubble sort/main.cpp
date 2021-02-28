#include <iostream>
#include <algorithm>
using namespace std;

void nhap(int a[], int n) // nhập dãy
{
    for(int i=0; i<n; i++)
{
    cout<<"["<<i<<"]=";
    cin>>a[i];
}
}
void xuat(int a[], int n) // xuất dãy ra màn hình
{
    for(int i=0; i<n; i++)
    cout<<a[i]<<" ";
}
void sap(int a[], int n) // xắp xếp dãy bubble sort
{
    for (int i = 0; i < n - 1; i++)
		for (int j = n - 1; j > i; j--)
		   if(a[j] < a[j-1])
		       swap(a[j], a[j-1]);
}
int main()
{
    int a[100];
    int n;
    cout<<"n= "; cin>>n ;
    nhap(a, n); sap(a, n); xuat(a,n);
    return 0;
}
