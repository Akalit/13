#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main () { system("chcp 1251"); system("cls");
	string user; char mas [200],vsp, vsp_user; int v_mas = 0;
	cout << "\t������� ������" << endl; getline(cin,user); cout << "\n� ����� �������� ������ ����� ? : "; cin >> vsp_user;
ofstream f ("file.txt", ios_base :: out | ios_base :: trunc);
f << user; f.close(); system("cls"); cout << "\t�������� ������\n" << user << endl; 
 
ifstream f1("File.txt");	cout << "\n\n������ �������� : ";

for (int q = user.length() -1; q >= 0; q--) cout << user[q]; cout << endl << endl; 

while (f1.get(vsp)) {mas[v_mas] = vsp; v_mas++;} cout << "����� � ������� ����������� ������ " << vsp_user << " : ";

for (int q(0); q < 5; q++) {
	for(int q(0);mas[q] != '�';q++) 
		if(mas[q] == vsp_user) 
			for(int w(q) ; w != -1 && mas[w] != ' ';w--) v_mas = w;  
				for(; mas[v_mas] != ' ' && mas[v_mas] != '�'; v_mas++) { cout << mas[v_mas]; mas[v_mas] = '0'; } cout << "  ";}

cout << endl << endl; return -1;}