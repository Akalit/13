#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main () { system("chcp 1251"); system("cls");
	string user; char mas [200],vsp, vsp_user; int v_mas = 0;
	cout << "\tВведите строку" << endl; getline(cin,user); cout << "\nС каким символом искать слова ? : "; cin >> vsp_user;
ofstream f ("file.txt", ios_base :: out | ios_base :: trunc);
f << user; f.close(); system("cls"); cout << "\tВведённая строка\n" << user << endl; 
 
ifstream f1("File.txt");	cout << "\n\nСтрока наоборот : ";

for (int q = user.length() -1; q >= 0; q--) cout << user[q]; cout << endl << endl; 

while (f1.get(vsp)) {mas[v_mas] = vsp; v_mas++;} cout << "Слова в которых содержиться символ " << vsp_user << " : ";

for (int q(0); q < 5; q++) {
	for(int q(0);mas[q] != 'М';q++) 
		if(mas[q] == vsp_user) 
			for(int w(q) ; w != -1 && mas[w] != ' ';w--) v_mas = w;  
				for(; mas[v_mas] != ' ' && mas[v_mas] != 'М'; v_mas++) { cout << mas[v_mas]; mas[v_mas] = '0'; } cout << "  ";}

cout << endl << endl; return -1;}