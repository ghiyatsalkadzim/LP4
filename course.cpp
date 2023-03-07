//import library
#include <bits/stdc++.h>
#include "prodi.cpp"
//using standard namespace
using namespace std;
//Human diwariskan ke Mahasiswa
class Course :: public Prodi
{
    //private
    private:
        string nama_matakuliah;

    //public  
    public:
        //constructor
        Course()
        {
            this->nama_matakuliah = "";
        }

        //getter and setter
        string get_nama_matakuliah()
        {
            return this->nama_matakuliah;
        }

        void set_nama_matakuliah(string nama_matakuliah)
        {
            this->nama_matakuliah = nama_matakuliah;
        }
        

        //destructor
        ~Course()
        {

        }
};