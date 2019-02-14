#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
int main (){
system ("color 70");

	cout<<"============================"<<endl;	
	cout<<"	IT Service"<<endl;
	cout<<"    SMKN 4 Padalarang"<<endl;
	cout<<"  Jl. raya Padalarang 451"<<endl;
	cout<<"============================"<<endl;
	char question1[] ="Nomor Pelanggan : ";
	string question2 ="Jenis Laptop	: ";
	string question3 ="Tanggal Masuk	: ";
	string question4 ="No Seri		: ";
	string question5 ="Nama Pelanggan	: ";
	string question6 ="No Telp		: ";
	string question7 ="Keluhan Laptop : ";
	
	char answer1[100];
	string answer2;
	string answer3;
	string answer4;
	string answer5;
	string answer6;
	int answer7;
	
	cout<<question1;
	cin>>answer1;
	cout<<question2;
	cin>>answer2;
	cout<<question3;
	cin>>answer3;
	cout<<question4;
	cin>>answer4;
	cout<<question5;
	cin>>answer5;
	cout<<question6;
	cin>>answer6;
	cout<<endl<<"Form Keluhan : "<<endl<<endl;
	cout<<"Daftar Kerusakan Laptop :"<<endl<<"1. Hang"<<endl<<"2. Batre drop"<<endl<<"3. Bootloop"<<endl<<"4. Lag"<<endl;
	cout<<endl;
	cout<<question7;
	cin>>answer7;
	
	switch(answer7)
{
	case 1 :cout<<"Laptop Hang"<<endl<<"Perkiraan Selesai : 14 Hari "<<endl;break;
	case 2 :cout<<"Laptop Ngedrop"<<endl<<"Perkiraan Selesai : 10 Hari "<<endl;break;
	case 3 :cout<<"Laptop Bootloop"<<endl<<"Perkiraan Selesai : 21 Hari "<<endl;break;
	case 4 :cout<<"Laptop Lag"<<endl<<"Perkiraan Selesai : 7 Hari "<<endl;break;
}
	
	system("PAUSE");
	return 0;
}
