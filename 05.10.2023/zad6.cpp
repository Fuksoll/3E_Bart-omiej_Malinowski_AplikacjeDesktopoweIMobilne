#include <iostream>

using namespace std;

int main()
{
	int rok;
	cout<<"Podaj rok: "<<endl;
	cin>>rok;

	if((rok%4==0 && rok%100!=0) || rok%400==0) 
		cout<<"Rok "<<rok<<" jest przestępny."<<endl;
	else
		cout<<"Rok "<<rok<<"nie jest przestępny."<<endl;

	return 0;
}