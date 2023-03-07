//import library
#include <bits/stdc++.h>
//using standard namespace
using namespace std;
//prodi diwariskan ke Mahasiswa
class Prodi
{
    //private
    private:
        string nama_prodi;
        string kode;
        string course;

    //public
    public:
        //constructor
        Prodi()
        {
            this->nama_prodi = "";
            this->kode = "";
            this->course = "";
        }

        //getter and setter
        string get_nama_prodi()
        {
            return this->nama_prodi;
        }

        void set_nama_prodi(string nama_prodi)
        {
            this->nama_prodi = nama_prodi;
        }
        
        string get_kode()
        {
            return this->kode;
        }

        void set_kode(string kode)
        {
            this->kode = kode;
        }

        char get_course()
        {
            return this->course;
        }

        void set_course(string course)
        {
            this->course = course;
        }

        //destructor
        ~Prodi()
        {

        }
};