#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
char maskapai[20], nama[20], alamat[20], nik[20], kode_penerbangan,rute [30], jawab;
int jml;
long int harga, total, kembalian, bayar;
awal:
    cout<<"============================\n";
       cout<<"BY DANDI TOUR PENERBANGAN";
      cout<<"\n============================\n\n";
cout<<"\n Backpacker tour and Travel "<<endl;
cout<<"\n ______________________";
cout<<"\n| Kode penerbangan                | Harga     |      Maskapai   |";
cout<<"\n| 1.MDN-JKT | Medan-Jakarta       | 600.000   |      Lion Air   |";
cout<<"\n| 2.MDN-SIN | Medan-Singapura     | 800.000   |      Air Asia   |";
cout<<"\n| 3.ACH-LOM | Aceh-Medan          | 500.000   | Garuda Indonesia|";
cout<<"\n| 4.KL-MDN  | Kuala Lumpur-Medan  | 300.000   |      Air Asia   |";
cout<< endl << endl;
cout<<"\n| Kode penerbangan Internasional  | Harga     |      Maskapai   |";
cout<<"\n| 5.MDN-UK  | Medan-Inggris       | 900.000   |      Lion Air   |";
cout<<"\n| 6.MDN-PAL  | Medan-Palestina    | 700.000   |      Air Asia   |";
cout<<"\n| 7.MDN-SWE  | Medan-Swedia       | 800.000   | Garuda Indonesia|";
cout<<"\n| 8.MDN-AUS  | Medan-Australia    | 300.000   |      Air Asia   |";
cout<<"\n|______________________";
cout <<"\n Nama Penumpang : ";
cin >> nama;
cout <<"\n Alamat Penumpang: ";
cin >> alamat;
cout <<"\n Nik Penumpang: ";
cin >> nik;
cout<<"\n Kode Penerbangan (1-8) : ";
cin >> kode_penerbangan;

if (kode_penerbangan=='1')
{
(rute,"Medan – Jakarta");
(maskapai,"Lion Air");
harga=600000;
}
else if (kode_penerbangan=='2')
{
(rute,"Medan – Singapura");
(maskapai,"Air Asia");
harga=800000;
}
else if (kode_penerbangan=='3')
{
(rute,"Aceh – Medan");
(maskapai,"Garuda Indonesia");
harga=500000;
}
else if (kode_penerbangan=='4')
{
(rute,"Jakarta – Singapura");
(maskapai,"Air Asia");
harga=350000;
}
else if (kode_penerbangan=='5')
{
(rute,"Medan-Inggris");
(maskapai,"Lion Air");
harga=900000;
}
else if (kode_penerbangan=='6')
{
(rute,"Medan-Palestina");
(maskapai,"Air Asia");
harga=700000;
}
else if (kode_penerbangan=='7')
{
(rute,"Medan-Swedia");
(maskapai,"Garuda Indonesia");
harga=800000;
}
else if (kode_penerbangan=='4')
{
(rute,"Medan-Australia");
(maskapai,"Air Asia");
harga=300000;
}
else
{
cout<<"\n Kode Pesawat yang Anda Masukan Salah"<<endl;
cout<<"\n Mau Input Data Lagi [Y/T]?"; jawab=getch();
if (jawab=='Y'||jawab=='y')
goto awal;
else
goto awal;
}
cout<<"\n Jumlah Tiket : ";cin>>jml;
total=jml*harga;
cout<<"\n Penumpang Yang Bernama : "<<nama<<endl;
cout << "\n Alamat penumpang : "<<alamat<<endl;
cout << "\n Nik penumpang : "<<nik<<endl;
cout<<"\n Harga Tiket  : "<<harga<<endl;

cout << "Total Harga  : "<<total<<"\n";
cout<< "Maskapai	: "<< maskapai<<endl;
cout << "Bayar        : ";
     cin >> bayar;"\n";
total=jml*harga;
        if (jml >= 3)
        bayar:
     if (bayar < total)
    {
    cout << "\n\n_______________\n";
    cout << "Maaf, Uang Anda Kurang Maz !!! "<<endl;
     cout << "_______________\n";
    goto bayar;
    }
    cout << "_______________\n";
    kembalian = bayar - total;
    cout << "Kembalian    : "<<kembalian<<"\n";
    cout << endl;
    cout << "=========================================\n";
    cout << endl<<endl;
cout<<"\n Mau Input Data Lagi [Y/T]?";
jawab=getch();
if (jawab=='Y'||jawab=='y')
goto awal;
getch();
return 0;
}
