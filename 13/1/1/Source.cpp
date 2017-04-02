#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <vector>

using namespace std;

int main() { setlocale(0,"");	srand(time(NULL));

int for_vsp = rand () % 10 + 5;

ofstream file ("file1.txt", ios_base::out | ios_base::trunc); 
	if(file.is_open()) {cout << "\tФайл открыт\n" << endl;
		for(int q(0) ; q < for_vsp; q++) file << rand () % 9;	file.close();
				} else { cout << "Программа не может найти файл..." << endl; return -1;}

ifstream file_if; char vsp ;
file_if.open("file1.txt"); cout << "Содержимое файла : ";  cout << file_if.rdbuf() << endl << endl;  file_if.seekg(0); cout << "Не чётные цифры в файле : ";

	while (file_if.get(vsp)) { if (vsp % 2 != 0 && vsp != 0)cout << vsp << " "; } file_if.close(); cout << endl << endl;
		cout << endl;

return -1;}