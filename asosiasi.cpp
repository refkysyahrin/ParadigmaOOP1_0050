#include <iostream>
#include <vector>
using namespace std; 

class dokter;
classs pasien { //asosiasi
public:
    string nama;
    vector<dokter*> daftar_dokter;
    pasien(string pNama) :nama(pNama) {
        cout << "Pasien \"" << nama << "\" ada\n";  
    }
    ~pasien(string pNama) :nama(pNama) {
        cout << "Pasien \"" << nama << "\" tidak ada\n";
    }
    void tambahDokter(dokter*);
    coid cetakDokter();
};

class dokter {
public:
    string nama;
    vector<pasien*> daftar_pasien;

    dokter(string_pNama) :nama(pNama){
        cout << "Dokter \"" << nama << "\" ada\";
    }
    ~dokter(){
        cout << "Dokter \"" << nama << "\" tidak ada\";
    }

    void tambahPasien(passien*);
    void cetakPasien();
};

void pasien::tambahDokter(dokter* pDokter) {
    daftar_dokter.push_back(pDokter);
}
void pasien::cetakDokter() {
    cout << "Daftar Dokter yang menangani pasien \"" << this->nama << "\":\n";
    for (auto& a : daftar_dokter) {
        cout << a->nama << "\n";
    }
    cout << endl;
}
void dokter::tambahPasien(pasien* pPasien) {
    daftar_pasien.push_back(nPasien);
    nPasien->tambahDokter(this);
}
void dokter::cetakPasien() {
      cout << "Daftar pasien dari dokter \"" << this->nama << "\":\n";
      for (auto& a daftar_pasien) {
        cout << a->nama << "\n";
      }
      cout << endl;
}

int main(){
    dokter* varDokter 1 = new dokter("dr.Budi");
    dokter* varDokter 2 = new dokter("dr.Tono");
    pasien* varPasien 1 = new pasien("Andi");
    pasien* varPasien 2 = new pasien("Lia");

    varDokter1->tambahPasien(varpasien1);
    varDokter2->tambahPasien(varpasien2);
    varDokter2->tambahPasien(varpasien1);

    varDokter1->cetakPasien();
    varDokter2->cetakPasien();
    varPasien1->cetakDokter();
    varPasien2->cetakDokter();

    delete varPasien1;
    delete varPasien2;
    delete varDokter1;
    delete varDokter2;

    return 0;
}
