#include "text.h"
#include "game.h"
#include "resource.h"

struct data{
    string akun;
    string password;
};

struct peringkat{
    int poin;
    string nama;
    string rank;
};

void cekUkuranLayar(){
    int lebarLayar, panjangLayar;
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    do{
        Sleep(100);
        system("cls");
        
        GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
        lebarLayar = csbi.dwSize.X;
        panjangLayar = csbi.dwSize.Y;

        if(lebarLayar >= 60 and panjangLayar >= 20){
            return;
        }

        int centerVertical = (panjangLayar-8) / 2;
        int centerHorizontal = (lebarLayar-27) / 2 + 27;
        
        for(int i = 0; i < centerVertical; i++){
            cout << endl;
        }

        cout << setw(centerHorizontal) << "Sebelum game akan dimulai,        " << endl;
        cout << setw(centerHorizontal) << "harap perbesar ukuran layar!      " << endl << endl;
        cout << setw(centerHorizontal) << "Ukuran lebar layar minimal    : 60" << endl;
        cout << setw(centerHorizontal) << "Ukuran panjang layar minimal  : 20" << endl << endl;
        cout << setw(centerHorizontal-2) << "Ukuran lebar layar saat ini   : " << lebarLayar << endl;
        cout << setw(centerHorizontal-2) << "Ukuran panjang layar saat ini : " << panjangLayar << endl;
    }while(lebarLayar < 60 or panjangLayar < 20);
}

void swapPemain(int &pemain1, int &pemain2){
    int temp = pemain1;
    pemain1 = pemain2;
    pemain2 = temp;
}

void swapPemain(string &pemain1, string &pemain2){
    string temp = pemain1;
    pemain1 = pemain2;
    pemain2 = temp;
}

int jumlahAkun(data *player){
    int jumlahAkun = 0;
    for(int i = 0; i < 10; i++){
        if(player[i].akun != ""){
            jumlahAkun++;
        }
    } 
    return jumlahAkun;
}

int pilihanUser(string teks, int batasBawah, int batasAtas){
    string pilihan;
    do{
        cout << teks;
        cin >> pilihan;
    }while(pilihan.size() > 1 or !isdigit(pilihan[0]) or stoi(pilihan) < batasBawah or stoi(pilihan) > batasAtas);
    return stoi(pilihan);
}

int pilihAkun(data *player, int headPilihan, bool butuhPassword){
    head(headPilihan);
    if(jumlahAkun(player) == 0){
        cout << "Tidak ada akun yang terdaftar!" << endl;
        end();
        return -1;
    }

    loopPilihAkun:
        head(headPilihan);
        cout << "Pilih salah satu!" << endl;
        cout << "0. Kembali" << endl;
        for(int i = 0; i < jumlahAkun(player); i++){
            cout << i+1 << ". " << player[i].akun << endl;
        }

        int inputAkun = pilihanUser("\nPilihan akun: ", 0, jumlahAkun(player));

        if(inputAkun == 0){
            return -1;
        }

        inputAkun -= 1;

        if(butuhPassword){
            bool passwordSalah;
            string inputPassword;

            do{
                head(7);
                cout << "Input 0 untuk kembali!" << endl << endl;
                cout << "Nama akun       : " << player[inputAkun].akun << endl;
                cout << "Input password  : ";
                cin >> inputPassword;

                if(inputPassword == "0"){
                    goto loopPilihAkun;
                }

                passwordSalah = false;
                if(inputPassword != player[inputAkun].password){
                    passwordSalah = true;
                }

                if(passwordSalah){
                    cout << "\nPassword salah!" << endl;
                    end();
                }
            }while(passwordSalah);
        }

    return inputAkun;
}

void memuatAkunDariFile(data *player){
    for(int i = 0; i < 10; i++){
        player[i].akun = "";
        player[i].password = "";
    }

    fstream fileAkun, filePassword;
    fileAkun.open("listAkun.txt", ios::in);
    filePassword.open("listPassword.txt", ios::in);
    int i = 0;
    while(fileAkun >> player[i].akun and filePassword >> player[i].password){
        i++;
    } 
    fileAkun.close();
    filePassword.close();
}

void buatAkun(data *player){
    string namaAkun;
    string namaPassword;
    string konfirmasiPassword;

    head(4);
    if(jumlahAkun(player) == 10){
        cout << "Jumlah akun game sudah memenuhi batasan!" << endl;
        cout << "Hapus akun lama terlebih dahulu sebelum membuat akun baru!" << endl;
        end();
        return;
    }

    loopAkun:
        head(4);
        cout << "Input \"0\" untuk kembali!\n" << endl;
        cout << "Input nama akun      : ";
        cin >> namaAkun;

        if(namaAkun == "0"){
            return;
        }

        if(namaAkun.size() < 4){
            cout << "\nNama akun terlalu pendek!" << endl;
            cout << "Harap input nama akun lebih dari 3 karakter!" << endl;
            end();
            goto loopAkun;
        }

        for(int i = 0; i < namaAkun.size(); i++){
            namaAkun[i] = tolower(namaAkun[i]);
        }

        for(int i = 0; i < jumlahAkun(player); i++){
            if(player[i].akun == namaAkun){
                cout << "\nNama akun sudah terdaftar!" << endl;
                cout << "Harap input nama akun yang lain!" << endl;
                end();
                goto loopAkun;
            }
        }

    cout << "Input password       : ";
    cin >> namaPassword;

    cout << "Konfirmasi password  : ";
    cin >> konfirmasiPassword;

    if(namaPassword != konfirmasiPassword){
        cout << "Password tidak sesuai!" << endl;
        end();
        goto loopAkun;
    }

    fstream fileAkun, filePassword, fileStatistik;

    fileAkun.open("listAkun.txt", ios::app);
    fileAkun << namaAkun << endl;
    fileAkun.close();

    filePassword.open("listPassword.txt", ios::app);
    filePassword << namaPassword << endl;
    filePassword.close();

    time_t second = time(0);
    string realTime = ctime(&second);
    
    string temp[5];
    istringstream iss(realTime);
    iss >> temp[0] >> temp[1] >> temp[2] >> temp[3] >> temp[4];
    realTime = temp[0] + "-" + temp[2] + "-" + temp[1] + "-" + temp[4] + "-" + temp[3]; 

    fileStatistik.open(namaAkun + "Statistik.txt", ios::out);
    fileStatistik << namaAkun << endl; //nama akun
    fileStatistik << realTime << endl; //waktu pembuatan akun
    for(int i = 0; i < 2; i++){
        fileStatistik << "2Bronze" << endl; //rank sekarang dan tertinggi
    }
    for(int i = 0; i < 2; i++){
        fileStatistik << 100 << endl; //poin sekarang dan tertinggi
    }
    for(int i = 0; i < 10; i++){
        fileStatistik << 0 << endl; //statistik lainnya yang nilai default = 0
    }
    fileStatistik.close();

    cout << "\nAkun telah berhasil dibuat!" << endl;
    end();
}
-
void hapusAkun(data *player){
    int indexAkun = pilihAkun(player, 5, true);
    if(indexAkun == -1){
        return;
    }

    remove((player[indexAkun].akun + "Statistik.txt").c_str());

    for(int i = indexAkun; i < 9; i++){
        if(indexAkun != jumlahAkun(player)){
            player[i].akun = player[i+1].akun;
            player[i].password = player[i+1].password;
        }
    }

    player[9].akun = "";
    player[9].password = "";

    if(jumlahAkun(player) == 0){
        remove("listAkun.txt");
        remove("listPassword.txt");
    }else{
        fstream fileAkun, filePassword;
        fileAkun.open("listAkun.txt", ios::out);
        filePassword.open("listPassword.txt", ios::out);
        for(int i = 0; i < jumlahAkun(player); i++){
            fileAkun << player[i].akun << endl;
            filePassword << player[i].password << endl;
        }
        fileAkun.close();
        filePassword.close();
    }

    cout << "\nAkun telah berhasil dihapus!" << endl;
    end();
}

void mainkanAkun(data *player, LaunchGame game){
    int indexAkun = pilihAkun(player, 6, true);
    if(indexAkun == -1){
        return;
    }

    game.start(player[indexAkun].akun);
}

void statistikAkun(data *player, LaunchGame game, LaunchGame::player statistik){
    loopStatistik:
        int indexAkun = pilihAkun(player, 9, false);
        if(indexAkun == -1){
            return;
        }

        game.tampilkanStatistik(player[indexAkun].akun, statistik);
        goto loopStatistik;
}

void leaderboard(data *player){
    if(jumlahAkun(player) == 0){
        head(10);
        cout << "Tidak ada akun yang terdaftar!" << endl;
        end();
        return;
    }else if(jumlahAkun(player) > 0 and jumlahAkun(player) < 3){
        head(10);
        cout << "Leaderboard masih belum dibuka!" << endl;
        cout << "Menunggu player lain untuk bergabung!" << endl;
        cout << "Dibutuhkan 3 player untuk membuka leaderboard!" << endl;
        cout << "\nJumlah player saat ini: " << jumlahAkun(player) << endl;
        end();
        return;
    }

    string temp;
    fstream file;
    peringkat pemain[jumlahAkun(player)];

    for(int i = 0; i < jumlahAkun(player); i++){
        file.open(player[i].akun + "Statistik.txt", ios::in);
        int barisFile = 0;

        while(file >> temp){
            barisFile++;
            if(barisFile == 1){
                pemain[i].nama = temp;
            }else if(barisFile == 3){
                pemain[i].rank = temp;
            }else if(barisFile == 5){
                pemain[i].poin = stoi(temp);
                break;
            }
        }
        file.close();
    }

    for(int i = 0; i < jumlahAkun(player); i++){
        for(int j = i+1; j < jumlahAkun(player); j++){
            if(pemain[i].poin < pemain[j].poin){
                swapPemain(pemain[i].poin, pemain[j].poin);
                swapPemain(pemain[i].nama, pemain[j].nama);
                swapPemain(pemain[i].rank, pemain[j].rank);
            }
        }
    }

    head(10);
    for(int i = 0; i < 3; i++){
        cout << "Peringkat " << i+1 << ": ";
        cout << pemain[i].nama << ", rank " << pemain[i].rank.substr(1, pemain[i].rank.size());
        cout << ", poin " << pemain[i].poin << endl;
    }
    end();
}

int main(){
    LaunchGame game;
    LaunchGame::player statistik;

    data player[10];
    data *pointerPlayer = player;

    cekUkuranLayar();
    opening();

    loopMenu:
        memuatAkunDariFile(pointerPlayer);

        head(3);
        cout << "Pilih salah satu!             " << endl;
        cout << "1. Buat Akun Game Baru        " << endl;
        cout << "2. Hapus Akun Game Lama       " << endl;
        cout << "3. Mainkan Akun Game Lama     " << endl;
        cout << "4. Lihat Statistik Akun Game  " << endl;
        cout << "5. Lihat Top Leaderboard Game " << endl;
        cout << "6. Simpan dan Keluar dari Game" << endl;
        int pilihan = pilihanUser("\nPilihan kamu: ", 1, 6);

        if(pilihan == 1){
            buatAkun(pointerPlayer);
            goto loopMenu;
        }else if(pilihan == 2){
            hapusAkun(pointerPlayer);
            goto loopMenu;
        }else if(pilihan == 3){
            mainkanAkun(pointerPlayer, game);
            goto loopMenu;
        }else if(pilihan == 4){
            statistikAkun(pointerPlayer, game, statistik);
            goto loopMenu;
        }else if(pilihan == 5){
            leaderboard(pointerPlayer);
            goto loopMenu;
        }else{
            exit(0);
        }

    return 0;
}