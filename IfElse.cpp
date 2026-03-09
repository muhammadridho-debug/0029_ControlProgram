#include <iostream>
using namespace std;

float rata_rata(float a, float b)
{
    return (a + b)/2;
}

string status_lulus(float r)
{
    if (r >= 60)
        return "Lolos";
    else
        return "Gagal";
}

int main()
{
    float nilBI, nilMT, rerata;
    string status;

    cout << "Masukkan nilai Bahasa Inggris : ";
    cin >> nilBI;
    cout << "Masukkan nilai Matematika : ";
    cin >> nilMT;
 
    //rerata = (nilBI + nilMT)/2;
    //if (rerata >= 60)
    //      status = "Lolos";
    //else
    //      status = "Gagal";
    rerata = rata_rata(nilBI, nilMT);

    //status = status_lulus(rerata);
    
    cout << "Status kelulusan = " << status_lulus(rerata) << " ,dengan nilai rerata : " << rerata << endl;
}