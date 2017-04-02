#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

class book {
public :
	string name, writer, year, kl_ekz, shk_polk;
};

int main () { system("chcp 1251"); system("cls");
vector<book>bibleoteka; book vsp_bk; string dop,v_dop; ofstream ofm("File.txt");
cout << "Найти книгу по автору ... или по названию ENTER ? : "; getline(cin,dop);
vsp_bk.writer = "Лев Толстой"; ofm << vsp_bk.writer;
vsp_bk.name = "Война и мир"; ofm << "\n\t" << vsp_bk.name; vsp_bk.year = " 1865-1869 |"; ofm << "\t" << vsp_bk.year;  vsp_bk.kl_ekz = " 45 |";  ofm << vsp_bk.kl_ekz; vsp_bk.shk_polk = " 1 : 1 |"; ofm << vsp_bk.shk_polk; bibleoteka.push_back({vsp_bk.name, vsp_bk.writer,vsp_bk.year,vsp_bk.kl_ekz,vsp_bk.shk_polk});
vsp_bk.name = "Анна Каренина"; ofm << "\n\t" << vsp_bk.name; vsp_bk.year = " 1875-1878 |"; ofm << "\t" << vsp_bk.year;  vsp_bk.kl_ekz = " 26 |";  ofm << vsp_bk.kl_ekz; vsp_bk.shk_polk = " 1 : 2 |"; ofm << vsp_bk.shk_polk; bibleoteka.push_back({ vsp_bk.name, vsp_bk.writer,vsp_bk.year,vsp_bk.kl_ekz,vsp_bk.shk_polk });
vsp_bk.name = "Утро помещика"; ofm << "\n\t" << vsp_bk.name; vsp_bk.year = " 1856-1857 |"; ofm << "\t" << vsp_bk.year;  vsp_bk.kl_ekz = " 4  |";  ofm << vsp_bk.kl_ekz; vsp_bk.shk_polk = " 1 : 3 |"; ofm << vsp_bk.shk_polk; bibleoteka.push_back({ vsp_bk.name, vsp_bk.writer,vsp_bk.year,vsp_bk.kl_ekz,vsp_bk.shk_polk });


vsp_bk.writer = "Александр Сергеевич Пушкин"; ofm << "\n\n" << vsp_bk.writer;
vsp_bk.name = "Евгений Онегин"; ofm << "\n\t" << vsp_bk.name; vsp_bk.year = " 1865-1869 |"; ofm << "\t" << vsp_bk.year;  vsp_bk.kl_ekz = " 63 |";  ofm << vsp_bk.kl_ekz; vsp_bk.shk_polk = " 2 : 1 |"; ofm << vsp_bk.shk_polk; bibleoteka.push_back({ vsp_bk.name, vsp_bk.writer,vsp_bk.year,vsp_bk.kl_ekz,vsp_bk.shk_polk });
vsp_bk.name = "Зимний вечер"; ofm << "\n\t" << vsp_bk.name ; vsp_bk.year = " 1825-1826 |"; ofm << "\t" << vsp_bk.year;  vsp_bk.kl_ekz = " 20 |";  ofm << vsp_bk.kl_ekz; vsp_bk.shk_polk = " 2 : 3 |"; ofm << vsp_bk.shk_polk; bibleoteka.push_back({ vsp_bk.name, vsp_bk.writer,vsp_bk.year,vsp_bk.kl_ekz,vsp_bk.shk_polk });

vsp_bk.writer = "Сергей Александрович Есенин"; ofm << "\n\n" << vsp_bk.writer;
vsp_bk.name = "Письмо матери"; ofm << "\n\t" << vsp_bk.name; vsp_bk.year = " 1924-1925 |"; ofm << "\t" << vsp_bk.year;  vsp_bk.kl_ekz = " 33 |";  ofm << vsp_bk.kl_ekz; vsp_bk.shk_polk = " 3 : 2 |"; ofm << vsp_bk.shk_polk; bibleoteka.push_back({ vsp_bk.name, vsp_bk.writer,vsp_bk.year,vsp_bk.kl_ekz,vsp_bk.shk_polk });
vsp_bk.name = "Анна Снегина "; ofm << "\n\t" << vsp_bk.name; vsp_bk.year = " 1925-1926 |"; ofm << "\t" << vsp_bk.year;  vsp_bk.kl_ekz = " 17 |";  ofm << vsp_bk.kl_ekz; vsp_bk.shk_polk = " 3 : 1 |"; ofm << vsp_bk.shk_polk; bibleoteka.push_back({ vsp_bk.name, vsp_bk.writer,vsp_bk.year,vsp_bk.kl_ekz,vsp_bk.shk_polk });
vsp_bk.name = "Письмо к женщине"; ofm << "\n\t" << vsp_bk.name; vsp_bk.year = "1924-1925 |"; ofm << " " << vsp_bk.year;  vsp_bk.kl_ekz = " 3  |";  ofm << vsp_bk.kl_ekz; vsp_bk.shk_polk = " 3 : 4 |"; ofm << vsp_bk.shk_polk; bibleoteka.push_back({ vsp_bk.name, vsp_bk.writer,vsp_bk.year,vsp_bk.kl_ekz,vsp_bk.shk_polk });
vsp_bk.name = "Русь уходящая"; ofm << "\n\t" << vsp_bk.name; vsp_bk.year = " 1924-1925 |"; ofm << "\t" << vsp_bk.year;  vsp_bk.kl_ekz = " 5  |";  ofm << vsp_bk.kl_ekz; vsp_bk.shk_polk = " 3 : 5 |"; ofm << vsp_bk.shk_polk; bibleoteka.push_back({ vsp_bk.name, vsp_bk.writer,vsp_bk.year,vsp_bk.kl_ekz,vsp_bk.shk_polk });

vsp_bk.writer = "Михаил Юрьевич Лермонтов"; ofm << "\n\n" << vsp_bk.writer;
vsp_bk.name = "Бородино"; ofm << "\n\t" << vsp_bk.name; vsp_bk.year = " 1837-1839 |"; ofm << "\t" << vsp_bk.year;  vsp_bk.kl_ekz = " 14 |";  ofm << vsp_bk.kl_ekz; vsp_bk.shk_polk = " 4 : 1 |"; ofm << vsp_bk.shk_polk; bibleoteka.push_back({ vsp_bk.name, vsp_bk.writer,vsp_bk.year,vsp_bk.kl_ekz,vsp_bk.shk_polk });
vsp_bk.name = "Смерть поэта"; ofm << "\n\t" << vsp_bk.name; vsp_bk.year = " 1937-1938 |"; ofm << "\t" << vsp_bk.year;  vsp_bk.kl_ekz = " 7  |";  ofm << vsp_bk.kl_ekz; vsp_bk.shk_polk = " 4 : 2 |"; ofm << vsp_bk.shk_polk; bibleoteka.push_back({ vsp_bk.name, vsp_bk.writer,vsp_bk.year,vsp_bk.kl_ekz,vsp_bk.shk_polk });
vsp_bk.name = "Из Гёте"; ofm << "\n\t" << vsp_bk.name; vsp_bk.year = " 1840-1843 |"; ofm << "\t\t" << vsp_bk.year;  vsp_bk.kl_ekz = " 9  |";  ofm << vsp_bk.kl_ekz; vsp_bk.shk_polk = " 4 : 3 |"; ofm << vsp_bk.shk_polk; bibleoteka.push_back({ vsp_bk.name, vsp_bk.writer,vsp_bk.year,vsp_bk.kl_ekz,vsp_bk.shk_polk });

vsp_bk.writer = "Николай Некрасов"; ofm << "\n\n" << vsp_bk.writer;
vsp_bk.name = "Рыцарь на час"; ofm << "\n\t" << vsp_bk.name; vsp_bk.year = " 1860-1862 |"; ofm << "\t" << vsp_bk.year;  vsp_bk.kl_ekz = " 28 |";  ofm << vsp_bk.kl_ekz; vsp_bk.shk_polk = " 5 : 1 |"; ofm << vsp_bk.shk_polk; bibleoteka.push_back({ vsp_bk.name, vsp_bk.writer,vsp_bk.year,vsp_bk.kl_ekz,vsp_bk.shk_polk });
vsp_bk.name = "Узник"; ofm << "\n\t" << vsp_bk.name; vsp_bk.year = " 1822-1823 |"; ofm << "\t\t" << vsp_bk.year;  vsp_bk.kl_ekz = " 7  |";  ofm << vsp_bk.kl_ekz; vsp_bk.shk_polk = " 5 : 2 |"; ofm << vsp_bk.shk_polk; bibleoteka.push_back({ vsp_bk.name, vsp_bk.writer,vsp_bk.year,vsp_bk.kl_ekz,vsp_bk.shk_polk });
vsp_bk.name = "Признание"; ofm << "\n\t" << vsp_bk.name; vsp_bk.year = " 1828-1830 |"; ofm << "\t" << vsp_bk.year;  vsp_bk.kl_ekz = " 9  |";  ofm << vsp_bk.kl_ekz; vsp_bk.shk_polk = " 5 : 3 |"; ofm << vsp_bk.shk_polk; bibleoteka.push_back({ vsp_bk.name, vsp_bk.writer,vsp_bk.year,vsp_bk.kl_ekz,vsp_bk.shk_polk }); ofm.close();


if(dop.size() != 0) {cout << "Введите желаемого автора : "; getline(cin, dop); system("cls"); cout <<"\t"<< dop << endl; for(auto q : bibleoteka) { if( q.writer == dop ) cout << q.name <<" | Находиться ===> |"<< q.shk_polk << endl;}
	} else {  cout << "Введите название книги с большой буквы : "; getline(cin, dop); system("cls"); for (auto q : bibleoteka) { if (q.name == dop) cout << q.name << " | Находиться ===> |" << q.shk_polk << endl; } }
		
cout << endl; system("pause"); return 0;}


