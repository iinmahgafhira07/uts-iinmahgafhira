#include <iostream>
#include <string.h>
using namespace std;

int main ()
{
    struct mahasiswa
    {
       char nama[20];
       char nim[15];
       char kelas[30];
       char tahun[9];
    }a;

    strcpy (a. nama, "iin mahgafhira");
    strcpy (a.nim, "1829140022");
    strcpy (a.kelas, "tekomb");
    strcpy (a. tahun, "2018");

    cout<<"nama        : "<<a.nama<<endl;
    cout<<"nim         : "<<a.nim<<endl;
    cout<<"kelas       : "<<a.kelas<<endl;
    cout<<"tahun       : "<<a.tahun<<endl;

    return 0;
}

