#include <iostream>
using namespace std;

class MasukUniversitas {
private: 
// isi access modifier disini
    int uangPendaftaran;
    int uangSemesterPertama;
    int uangBangunan;
    int totalBiaya;
    // isi daftar variable yang dibutuhkan di bawah ini
public:
    
    MasukUniversitas() {
        uangPendaftaran = 0;
        // isi nilai default variable yang dibutuhkan di bawah ini
    }
    virtual void namaJalurMasuk() { return; }
    // isi disini dengan fungsi virtual yang dibutuhkan
    void setUangPendaftaran(int nilai) {
        this->uangPendaftaran = nilai;
    }
    float getUangPendaftaran() {
        return uangPendaftaran;
    }
    void setUangSemesterPertama(int nilai) {
        this->uangSemesterPertama = nilai;
    }
    float getUangSemesterPertama() {
        return uangSemesterPertama;
    }
    void setUangBangunan(int nilai) {
        this->uangBangunan = nilai;
    }
    float getUangBangunan() {
        return uangBangunan;
    }
    // isi setter dan getter variable yang dibutuhkan di bawah ini
};
class SNBT : public MasukUniversitas {
    // isi disini untuk melengkapi class SNBT
public:
    void input() {
        cout << "Masukkan data SNBT:" << endl;
        cout << "Uang Pendaftaran: ";
        cin >> uangPendaftaran;
        cout << "Uang Semester Pertama: ";
        cin >> uangSemesterPertama;
        cout << "Uang Bangunan: ";
        cin >> uangBangunan;
    }
    void hitungTotalBiaya() {
        totalBiaya = uangPendaftaran + uangSemesterPertama + uangBangunan;
    }
};
class SNBP : public MasukUniversitas {
    // isi disini untuk melengkapi class SNBP
public:
    void input() {
        cout << "Masukkan data SNBP:" << endl;
        cout << "Uang Pendaftaran: ";
        cin >> uangPendaftaran;
        cout << "Uang Semester Pertama: ";
        cin >> uangSemesterPertama;
    }
    void hitungTotalBiaya() {
        totalBiaya = uangPendaftaran + uangSemesterPertama;
    }
};
int main() {
    // isi disini untuk fungsi main
    int pilihan;

    cout << "Pilih jalur masuk:" << endl;
    cout << "1. SNBT" << endl;
    cout << "2. SNBP" << endl;
    cout << "3. Keluar" << endl;
    cout << "Pilihan: ";
    cin >> pilihan;
}