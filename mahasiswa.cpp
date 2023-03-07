//import library
#include <bits/stdc++.h>
#include "human.cpp"

//using standard namespace
using namespace std;
//Mahasiswa dwariskan ke Human
class Mahasiswa : public Human
{
    //private
    private:
        string nim;
        string nama;
        string jenis_kelamin;
        string fakultas;
    //public
    public:
        //constructor
        Mahasiswa()
        {
            this->nim = "";
            this->nama = "";
            this->jenis_kelamin = "";
            this->fakultas = "";
        }

        //getter and setter
        string get_nim()
        {
            return this->nim;
        }

        void set_nim(string nim)
        {
            this->nim = nim;
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

        //destructor
        ~Mahasiswa()
        {

        }

};

