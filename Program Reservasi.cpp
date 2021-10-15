//Irfan Maulana M , TB'21
//Tugas TLS 2021
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
using namespace std;


int main(){
int jumlah, bayar, pilihan, i=0, total, harga[3] ={500000,2500000,5000000};
char nama[50], paket[20];

cout<<"========================================="<<endl;
cout<<"========Program Reservasi Liburan========"<<endl;
cout<<"===========Travel Indonesia=============="<<endl;
cout<<"========================================="<<endl;
cout<<endl;
cout<<"Masukkan Nama Anda       :"<<endl;
cin>>nama;
cout<<"Masukkan Jumlah Orang    :"<<endl;
cin>>jumlah;
cout<<endl;

coba_lagi:
cout<<"----PAKET LIBURAN UNTUK 1 ORANG, JIKA LEBIH MAKA HARGA BERUBAH----"<<endl;
cout<<"------------------------------------------------------------------"<<endl;
cout<<"|    [1] Paket 1 : Solo dan Jogja        = Rp 500.000    |"<<endl;
cout<<"|    [2] Paket 2 : Bali dan Lombok       = Rp 2.500.000  |"<<endl;
cout<<"|    [3] Paket 3 : NTT  dan Pulau Sumba  = Rp 5.000.000  |"<<endl;
cout<<"------------------------------------------------------------------"<<endl;
cout<<"(Pilih Paket Liburan Berdasarkan Angka)"<<endl;
cout<<"Masukkan Pilihan Anda    :";
cin>>pilihan;

switch(pilihan){
    case 1 :
        strcpy(paket,"Paket 1");
        break;
    case 2 :
        strcpy(paket,"Paket 2");
        i=1;
        break;
    case 3 :
        strcpy(paket,"Paket 3");
        i=2;
        break;
    default :
        cout<< "Pilihan yang dipilih tidak tersedia..."<<endl;
        goto coba_lagi;

}

total = harga[i]*jumlah;

cout<<"========================================="<<endl;
cout<<"\t Nama pemesan          :"<<nama<<endl;
cout<<"\t Jumlah orang          :"<<jumlah<<endl;
cout<<"\t Paket yang anda pilih :"<<paket<<endl;

if(pilihan=1){
    cout<<"Harga paket yang dipilih     = Rp"<<harga[1]<<endl;
    cout<<"Jumlah yang harus dibayar    = Rp"<<total<<endl;
}
    else if(pilihan=2){
        cout<<"Harga paket yang dipilih     = Rp"<<harga[2]<<endl;
        cout<<"Jumlah yang harus dibayar    = Rp"<<total<<endl;
    }
        else if(pilihan=3){
            cout<<"Harga paket yang dipilih     = Rp"<<harga[3]<<endl;
            cout<<"Jumlah yang harus dibayar    = Rp"<<total<<endl;
        }
            else (cout<<"Paket tidak tersedia"<<endl);

cout<<"------------------------------------------------------"<<endl;
cout<<"Silahkan lakukan pembayaran "<<endl;
cout<<"via transfer BNI 4723108237 a.n Travel Indo"<<endl;
cout<<"             BRI 6332345564 a.n Travel Indo"<<endl;
cout<<"             BCA 5634523425 a.n Travel Indo"<<endl;
cout<<"Jika sudah melakukan pembayaran harap konfirmasi di www.travelindo.co.id"<<endl;
cout<<"-------------------------------------------------------------------------"<<endl;
cout<<"\tTerima Kasih Sudah Memesan"<<endl;
cout<<"\tHave a Nice Trip ^_^"<<endl;



return 0 ;
}
