#include "resource.h"

void head(int x){
    if(x == 1){
        system("cls");
        cout << "[+]===========================OO=========================[+]" << endl;
        cout << "|||                   SELAMAT BERMAIN DI                 |||" << endl;
        cout << "|||                   GAME TEBAK-TEBAKAN                 |||" << endl;
        cout << "[+]===========================OO=========================[+]\n" << endl;
    }else if(x == 2){
        system("cls");
        cout << "[+]===========================OO=========================[+]" << endl;
        cout << "|||                     PENJELASAN GAME                  |||" << endl;
        cout << "[+]===========================OO=========================[+]\n" << endl;
    }else if(x == 3){
        system("cls");
        cout << "[+]===========================OO=========================[+]" << endl;
        cout << "|||                       MENU UTAMA                     |||" << endl;
        cout << "[+]===========================OO=========================[+]\n" << endl;
    }else if(x == 4){
        system("cls");
        cout << "[+]===========================OO=========================[+]" << endl;
        cout << "|||                  BUAT AKUN  GAME BARU                |||" << endl;
        cout << "[+]===========================OO=========================[+]\n" << endl;
    }else if(x == 5){
        system("cls");
        cout << "[+]===========================OO=========================[+]" << endl;
        cout << "|||                  HAPUS AKUN GAME LAMA                |||" << endl;
        cout << "[+]===========================OO=========================[+]\n" << endl;
    }else if(x == 6){
        system("cls");
        cout << "[+]===========================OO=========================[+]" << endl;
        cout << "|||                 MAINKAN AKUN GAME LAMA               |||" << endl;
        cout << "[+]===========================OO=========================[+]\n" << endl;
    }else if(x == 7){
        system("cls");
        cout << "[+]===========================OO=========================[+]" << endl;
        cout << "|||                   PASSWORD AKUN GAME                 |||" << endl;
        cout << "[+]===========================OO=========================[+]\n" << endl;
    }else if(x == 8){
        system("cls");
        cout << "[+]===========================OO=========================[+]" << endl;
        cout << "|||                   GAME TEBAK-TEBAKAN                 |||" << endl;
        cout << "[+]===========================OO=========================[+]\n" << endl;
    }else if(x == 9){
        system("cls");
        cout << "[+]===========================OO=========================[+]" << endl;
        cout << "|||                    STATISTIK PLAYER                  |||" << endl;
        cout << "[+]===========================OO=========================[+]\n" << endl;
    }else if(x == 10){
        system("cls");
        cout << "[+]===========================OO=========================[+]" << endl;
        cout << "|||                     TOP LEADERBOARD                  |||" << endl;
        cout << "[+]===========================OO=========================[+]\n" << endl;
    }else if(x == 11){
        system("cls");
        cout << "[+]===========================OO=========================[+]" << endl;
        cout << "|||                     PENJELASAN RANK                  |||" << endl;
        cout << "[+]===========================OO=========================[+]\n" << endl;
    }
}

void end(){
    cout << "\nTekan enter untuk melanjutkan!";
    getch();
}

void opening(){
    head(1);
    end();
}

void penjelasan(){
    head(2);
    cout << "Di game ini, kamu akan menebak nama suatu objek" << endl;
    cout << "Tapi pertama-tama, kamu perlu memilih kategori objeknya" << endl;
    cout << "Lalu, kamu akan menebak objek sesuai dengan kategorinya" << endl;
    cout << "Kamu hanya perlu menebak saja kok :)" << endl;
    end();

    head(2);
    cout << "Sebagai awalan, kamu akan memiliki 100 poin" << endl;
    cout << "Setiap tebakan yang benar akan memberimu poin tambahan" << endl;
    cout << "Setiap tebakan yang salah akan mengurangi total poinmu" << endl;
    cout << "Kamu dapat meminta bantuan dengan bayaran sejumlah poin" << endl;
    cout << "Ingat!!! Poin itu penting loh :)" << endl;
    end();

    head(2);
    cout << "Setelah selesai, durasi menebak akan dihitung" << endl;
    cout << "Apabila menebak terlalu lama, poinmu akan berkurang" << endl;
    cout << "Jadi jangan terlalu lama mikir ya :)" << endl;
    end();

    head(2);
    cout << "Tujuan game ini sederhana:" << endl;
    cout << "Kumpulkan poin sebanyak-banyaknya" << endl;
    cout << "Tingkatkan rank setinggi-tingginya" << endl;
    cout << "Dan jadilah top leaderboard" << endl;
    cout << "Selamat bermain!" << endl;
    end();
}

void penjelasanRank(){
    head(11);
    cout << "Terdapat 7 tingkatan rank pada game ini:\n" << endl;
    cout << "1. Loser    -->  poin dibawah 000" << endl;
    cout << "2. Bronze   -->  poin 000 --> 199" << endl;
    cout << "3. Silver   -->  poin 200 --> 399" << endl;
    cout << "4. Gold     -->  poin 400 --> 599" << endl;
    cout << "5. Diamond  -->  poin 600 --> 799" << endl;
    cout << "6. Legend   -->  poin 800 --> 999" << endl;
    cout << "7. Glory    -->  poin diatass 999" << endl;
    end();
}