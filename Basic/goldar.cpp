#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{   
    system("cls");
    int b_bul;
    float b_des;
    char nama [30];
    char goldar [50];
    
    cout<<"DATA PASIEN CUCI DARAH"<<endl;
    cout<<" "<<endl;
    
    printf("Masukkan Nama Anda : ");
    scanf("%c",&nama);
    printf("Nama Anda ialah %c", nama);

    cout<<"Masukkan umur : ";
    cin>>b_bul;
    
    cout<<"Masukkan berat badan : ";
    cin>>b_des;
   
    printf("Masukkan golongan darah anda : \n"); 
     

    // TODO : TAMPILKAN HASIL DARI SEMUA INPUTAN 
    printf("Nama Anda ialah %c", nama); cout << " dengan umur " << b_bul << " berat badan " << b_des << endl; 
    printf("dengan hasil goldar %c\n", goldar);

    // return 0;
}