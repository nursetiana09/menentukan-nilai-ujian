#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int main()
{
    system("color e");
    cout<< "menentukan nilai ujian" << endl;
    cout<< "-----------------------" << endl;
    cout<< "nursetiana" << endl;

    int nilai;
    cout<<"masukan nilai ujian : ";
    cin>>nilai;
    if (nilai>60)
        cout<<"anda lulus";
    else
        cout<<"anda tidak lulus!\n";
    getch();
}
