#include<iostream>
using namespace std;
int main()
{
	char nama[100];
	char nim[20];
	char prodi[30];
	char grade[20];
	
	int nilai;
	
	cout<<"masukkan nama anda: ";
	cin>>nama;
	cout<<"masukkan nim anda: ";
	cin>>nim;
	cout<<"masukkan prodi anda: ";
	cin>>prodi;
	cout<<"masukkan nilai anda: ";
	cin>>nilai;
	cout<<endl;
	
	cout<<"nama anda adalah : "<<nama<<endl;
	cout<<"nim anda adalah : "<<nim<<endl;
	cout<<"prodi anda adalah: "<<prodi<<endl;
	cout<<"nilai anda adalah: "<<nilai<<endl;
	
	if(nilai >= 81 )
	{
		cout<<"grade : A"<<endl;
		cout<<"anda dinyatakan lulus"<<endl;
	}
	else if(nilai >=66 && nilai <=80)
	{
		cout<<"grade : B"<<endl;
		cout<<"anda dinyatakan lulus"<<endl;
	}
		else if(nilai >=55 && nilai <=65)
	{
		cout<<"grade : c"<<endl;
		cout<<"anda dinyatakan lulus"<<endl;
	}
		else if(nilai >=45 && nilai <=54)
	{
		cout<<"grade : d"<<endl;
		cout<<"anda dinyatakan tidak lulus"<<endl;
	}
		else if(nilai <= 44)
	{
		cout<<"grade : e"<<endl;
		cout<<"anda harus mengulang kembali"<<endl;
	}
	
}
