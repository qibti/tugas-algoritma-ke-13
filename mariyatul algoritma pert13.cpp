include <iostream>

using namespace std;

void search(string *siswa, int size)
{
    string name;

    for (;;)
    {
        cout << "👇 Cari Nama Mahasiswa 👇" ;
        cout << endl;
        getline(cin, name);
        if (name == "END") break;

        int awal = 0;
        int akhir = size - 1;
        bool friends = false;

        while (!friends && awal <= akhir)
        {
            int middle = (awal + akhir)/2;
            if (siswa[middle] == name)
            {
                friends = true;
                cout<<siswa[middle]<<" adalah Mahasiswa Universitas Indonesia Mandiri"<<endl;
            }
            else if (siswa[middle] > name)
                akhir = middle - 1;
            else
                awal = middle + 1;
        }
    }
}

int main () // test the search() function
{
cout << "##  Tugas 13 Sekuensial Array ##" << endl;
cout << "=========================================" << endl;
cout << endl;
cout << "nama          : mariyatul qibtiyyah"<< endl;
cout << "nim           : 5520122012"<< endl;
cout << endl;
cout << "=========================================" << endl;
cout << endl;

    string siswa[] = {"qibti", "sela", "cahya", "novi", "el"};
       search(siswa, 6);
}
