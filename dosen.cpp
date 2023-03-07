//import library
#include <bits/stdc++.h>
#include Human
//using standard namespace
using namespace std;
//Human diwariskan ke Mahasiswa
class Dosen :: public Human
{
    //access modifier private
    private:
        string nip;
        string nama;
        string jenis_kelamin;
        string fakultas;
        string pend_terakhir;
        string keahlian;

    //public   
    public:
        //constructor
        Dosen()
        {
            this->nip = "";
            this->nama = "";
            this->jenis_kelamin = "";
            this->fakultas = "";
            this->pend_terakhir = "";
            this->keahlian = "";
        }

        //getter and setter
        string get_nip()
        {
            return this->nip;
        }

        void set_nip(string nip)
        {
            this->nip = nip;
        }
        
        string get_nama()
        {
            return this->nama;
        }

        void set_nama(string nama)
        {
            this->nama = nama;
        }

        char get_jenis_kelamin()
        {
            return this->jenis_kelamin;
        }

        void set_jenis_kelamin(string jenis_kelamin)
        {
            this->jenis_kelamin = jenis_kelamin;
        }

        string get_fakultas()
        {
            return this->fakultas;
        }

        void set_fakultas(string fakultas)
        {
            this->fakultas = fakultas;
        }

        string get_pend_terakhir()
        {
            return this->pend_terakhir;
        }

        void set_pend_terakhir(string pend_terakhir)
        {
            this->pend_terakhir = pend_terakhir;
        }

        string get_keahlian()
        {
            return this->keahlian;
        }

        void set_keahlian(string keahlian)
        {
            this->keahlian = keahlian;
        }

        //destructor
        ~Dosen()
        {

        }
};