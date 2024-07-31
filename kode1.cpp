#include <iostream>
using namespace std;

void cetakData(string nama, string nisn, string jurusan, string tinggibadan)
{
// cetak data-data nama, nisn, jurusan, tinggi badan
cout << "nama : " << nama << endl;
cout << "nisn : " << nisn << endl;
cout << "jurusan : " << jurusan << endl;
cout << "tinggi badan : " << tinggibadan << endl;
}

int main() {
    cout << "Selamat Datang di SMK TI Airlangga" << endl;
//buat variabel untuk meyimpan 
//nama
//nisn
//jurusan
//tinggi
string nama="hanif khalilurrahim", nisn="08190727321", jurusan="PPLG", tinggibadan="170";

cetakData(nama, nisn, jurusan, tinggibadan);

return 0;
}