//import library
#include <iostream>
#include <string>
#include "mahasiswa.cpp"
#include "dosen.cpp"

//using standard namespace
using namespace std;
//SivitasAkademik class induk
class SivitasAkademik
{
    //private
    private:
        string asal_universitas;
        string email_edu;
    //public
    public:
        //constructor
        SivitasAkademik()
        {
            this->asal_universitas = "";
            this->email_edu = "";
        }

        //getter and setter
        string get_asal_universitas()
        {
            return this->asal_universitas;
        }

        void set_asal_universitas(string asal_universitas)
        {
            this->asal_universitas = asal_universitas;
        }

        string get_email_edu()
        {
            return this->email_edu;
        }

        void set_email_edu(string email_edu)
        {
            this->email_edu = email_edu;
        }

        ~SivitasAkademik()
        {

        }

};




