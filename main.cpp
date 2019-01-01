#include <iostream>

using namespace std;

int tampilkan (int a, int b, int c){
    int bil;
    if (a<b, a<c){
        cout<<a<<endl;
        cout<<"Bilangan terkecil"<<endl;
    }
    else if (b<a, b<c){
        cout<<b<<endl;
        cout<<"Bilangan terkecil"<<endl;
    }
    else{
        cout<<c<<endl;
        cout<<"Bilangan terkecil"<<endl;
    }
    return bil;
}
int main ()
{
    int bil1, bil2, bil3, Hasil;
    cout<<"Menentukan Bilangan Terkecil Dari Tiga Bilangan"<<endl;
    cout<<"Masukkan bilngan pertama = ";
    cin>>bil1;
    cout<<endl;
    cout<<"Masukkan bilangan kedua = ";
    cin>>bil2;
    cout<<endl;
    cout<<"Masukkan bilanga ketiga = ";
    cin>>bil3;
    cout<<endl;

    Hasil= tampilkan(bil1, bil2, bil3);
    cout<<Hasil<<endl;

    cin.get();
    return 0;
}
