#include<iostream>
using namespace std;
main()
{
	int sayi1;
	cout<<"Sayiyi giriniz"<< endl;
	cin>>sayi1;
	int sayi2;
	cout<<"Sayiyi giriniz"<< endl;
	cin>> sayi2;
	if(sayi1==sayi2)
	{
		cout<<"Sayilar esittir"<< endl;
	}
	else if (sayi1 != sayi2)
	{
		cout<<"sayilar esit degildir"<< endl;
	}
	else if(sayi1<sayi2)
	{
		cout<<"sayi1 sayi2 den kucuktur"<< endl;
	}
	else if(sayi1>sayi2)
	{
		cout<<"sayi1 sayi2 den buyuktur"<< endl;
	}
	else if(sayi1 <=sayi2)
	{
		cout<<"sayi1 sayi2 ye kucuk veya esittir"<< endl;
	}
	else if(sayi1 >=sayi2)
	{
		cout<<"sayi2 sayi1 den buyuk esittir"<< endl;
	}
}
