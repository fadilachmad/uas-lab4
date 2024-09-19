#include "resource.h"
#include "dataset.h"

class LaunchGame {

public:

    struct player{
        string namaAkun;
        string waktuPembuatanAkun;
        string rankSekarang;
        string rankTertinggi;
        int poinSekarang;
        int poinTertinggi;
        int jumlahTotalPermainan;
        int jumlahTotalPermainanSempurna;
        int waktuMenebakTercepat;
        int waktuMenebakTerlama;
        int totalDurasiBermain;
        float rataRataDurasiBermain;
        int totalBantuan;
        float rataRataBantuan;
        int totalHurufSalah;
        float rataRataHurufSalah;
    };

    void transferDataDariFile(string namaPemain, player &data){
        fstream file;
        file.open(namaPemain + "Statistik.txt", ios::in);
        file >> data.namaAkun;
        file >> data.waktuPembuatanAkun;
        file >> data.rankSekarang;
        file >> data.rankTertinggi;
        file >> data.poinSekarang;
        file >> data.poinTertinggi;
        file >> data.jumlahTotalPermainan;
        file >> data.jumlahTotalPermainanSempurna;
        file >> data.waktuMenebakTercepat;
        file >> data.waktuMenebakTerlama;
        file >> data.totalDurasiBermain;
        file >> data.rataRataDurasiBermain;
        file >> data.totalBantuan;
        file >> data.rataRataBantuan;
        file >> data.totalHurufSalah;
        file >> data.rataRataHurufSalah;
        file.close();
    }

    void transferDataMenujuFile(player &data){
        fstream file;
        file.open(data.namaAkun + "Statistik.txt", ios::out);
        file << data.namaAkun << endl;
        file << data.waktuPembuatanAkun << endl;
        file << data.rankSekarang << endl;
        file << data.rankTertinggi << endl;
        file << data.poinSekarang << endl;
        file << data.poinTertinggi << endl;
        file << data.jumlahTotalPermainan << endl;
        file << data.jumlahTotalPermainanSempurna << endl;
        file << data.waktuMenebakTercepat << endl;
        file << data.waktuMenebakTerlama << endl;
        file << data.totalDurasiBermain << endl;
        file << data.rataRataDurasiBermain << endl;
        file << data.totalBantuan << endl;
        file << data.rataRataBantuan << endl;
        file << data.totalHurufSalah << endl;
        file << data.rataRataHurufSalah << endl;
        file.close();
    }

    void tampilkanStatistik(string namaPemain, player &data){
        transferDataDariFile(namaPemain, data);
        head(9);
        cout << "Nama Akun                  :  " << data.namaAkun << endl;
        cout << "Waktu Pembuatan Akun       :  " << data.waktuPembuatanAkun << endl;
        cout << "Rank Sekarang              :  " << data.rankSekarang.substr(1, data.rankSekarang.size()) << endl;
        cout << "Rank Tertinggi             :  " << data.rankTertinggi.substr(1, data.rankTertinggi.size()) << endl;
        cout << "Poin Sekarang              :  " << data.poinSekarang << " poin" << endl;
        cout << "Poin Tertinggi             :  " << data.poinTertinggi << " poin" << endl;
        cout << "Jumlah Permainan           :  " << data.jumlahTotalPermainan << " game" << endl;
        cout << "Jumlah Permainan Sempurna  :  " << data.jumlahTotalPermainanSempurna << " game" << endl;
        end();

        head(9);
        cout << fixed << setprecision(2);
        cout << "Waktu Menebak Tercepat     :  " << konversiWaktu(data.waktuMenebakTercepat) << endl;
        cout << "Waktu Menebak Terlama      :  " << konversiWaktu(data.waktuMenebakTerlama) << endl;
        cout << "Total Durasi Bermain       :  " << konversiWaktu(data.totalDurasiBermain) << endl;
        cout << "Rata-Rata Durasi Bermain   :  " << data.rataRataDurasiBermain << " detik/game" << endl;
        cout << "Total Bantuan              :  " << data.totalBantuan << " kali" << endl;
        cout << "Rata-Rata Bantuan          :  " << data.rataRataBantuan << " kali/game" << endl;
        cout << "Total Tebakan Salah        :  " << data.totalHurufSalah << " huruf" << endl;
        cout << "Rata-Rata Tebakan Salah    :  " << data.rataRataHurufSalah << " huruf/game" << endl;
        end();
    }

    int pilihanUser(string teks, int batasBawah, int batasAtas){
        string pilihan;
        do{
            cout << teks;
            cin >> pilihan;
        }while(pilihan.size() > 1 or !isdigit(pilihan[0]) or stoi(pilihan) < batasBawah or stoi(pilihan) > batasAtas);
        return stoi(pilihan);
    }

    int kategoriGame(){
        head(8);
        cout << "Pilih kategori game!" << endl;
        cout << "0. Kembali" << endl;
        cout << "1. Buah" << endl;   
        cout << "2. Hewan" << endl;   
        cout << "3. Negara" << endl; 
        return pilihanUser("\nPilihan kamu: ", 0, 3);
    }

    int tingkatKesulitanGame(){
        head(8);
        cout << "Pilih tingkat kesulitan game!" << endl;
        cout << "0. Kembali" << endl;
        cout << "1. Mudah" << endl;   
        cout << "2. Sedang" << endl;   
        cout << "3. Sulit" << endl; 
        return pilihanUser("\nPilihan kamu: ", 0, 3);
    }

    void pengaturan(int level, int kategori, int &poinBenar, string &jenisObjek, vector<string> &objek){
        if (kategori == 1) {
            objek = Buah;
            jenisObjek = "Buah";
        } else if (kategori == 2) {
            objek = Hewan;
            jenisObjek = "Hewan";
        } else {
            objek = Negara;
            jenisObjek = "Negara";
        }

        if (level == 1) {
            poinBenar = 10;
        } else if (level == 2) {
            poinBenar = 25;
        } else {
            poinBenar = 50;
        }
    }

    void penjelasanAturan(int poin1, int poin2, int poin3){
        cout << "\nAturan: " << endl;
        cout << "Poin bertambah " << poin1 << " jika menebak kata dengan benar!" << endl;
        cout << "Poin berkurang " << poin2 << " jika salah menebak sebuah huruf!"<< endl;
        cout << "Jika durasi menebak terlalu lama, poin akan berkurang!" << endl;
        cout << "Input \"1\" untuk meminta bantuan dengan bayaran " << poin3 << " poin!" << endl;
    }

    void hasilTebakan(int sizeObjek, string papanTebakan){
        head(8);
        cout << "Jawaban tebakan: " << endl;
        for(int i = 0; i < sizeObjek; i++){
            cout << papanTebakan[i] << " ";
        }
        cout << "\n\nSelamat! Tebakanmu benar!" << endl;
    }

    void permainanSempurna(){
        cout << "\n==========PERFECT==========" << endl;
        cout << "Kamu menebak tanpa ada kesalahan/bantuan sedikitpun!" << endl;
        cout << "Kamu jenius! Manusia yang terlahir seribu tahun sekali!" << endl;
    }

    void perubahanRank(string rankLama, string rankBaru){
        if(rankBaru > rankLama){
            cout << "\n==========SELAMAT==========" << endl;
            cout << "Rank anda meningkat:" << endl;
        }else{
            cout << "\n==========KASIHAN==========" << endl;
            cout << "Rank anda menurun:" << endl;
        }
            cout << rankBaru.substr(1, rankBaru.size()) << " <-- " << rankLama.substr(1, rankLama.size()) << endl;
    }

    string konversiWaktu(int waktu){
        string hasilKonversi;
        if(waktu > 3599){
            hasilKonversi += to_string(waktu / 3600) + " jam ";
            waktu %= 3600;
            if(waktu == 0){
                return hasilKonversi;
            }
        }
        if(waktu > 59){
            hasilKonversi += to_string(waktu / 60) + " menit ";
            waktu %= 60;
            if(waktu == 0){
                return hasilKonversi;
            }
        }
        hasilKonversi += to_string(waktu) + " detik";
        return hasilKonversi;
    }

    void ringkasanPermainan(int poin1, int poin2, int poin3, int poin4,  int poin5,  int poin6, int poin7, int poin8,  int poin9){
        cout << "\nRingkasan permainan:" << endl;
        cout << "Durasi kamu menebak: " << konversiWaktu(poin1) << endl;
        cout << "Poin kamu bertambah " << poin2 << " dari hasil tebakan yang benar!" << endl;
        if(poin3 > 0){
            cout << "Poin kamu berkurang " << poin4 << " dari hasil tebakan yang salah!" << endl;
        }
        if(poin5 > 0){
            cout << "Poin kamu berkurang " << poin6 << " dari hasil penggunaan bantuan!" << endl;
        }
        if(poin7 > 0){
            cout << "Poin kamu berkurang " << poin7 << " karena durasi yang terlalu lama!" << endl;
        }
        cout << "\nTotal poin yang kamu dapatkan adalah: " << poin8 << endl;
        cout << "Maka, jumlah poin kamu sekarang adalah: " << poin9 << endl;
    }

    void gameStart(int level, int kategori, player &data){
        int poinBenar;
        string jenisObjek;
        vector<string> objek;

        pengaturan(level, kategori, poinBenar, jenisObjek, objek);

        loopRestartGame:
            cin.ignore();
            srand(time(0));

            bool aturan = false;
            bool firstTime = true;
            
            int jumlahSalah = 0;
            int jumlahBenar = 0;
            int jumlahBantuan = 0;
            int durasiAwal = time(0);
            int indeksObjek = rand() % objek.size();
            int sizeObjek = objek[indeksObjek].size();

            string tebakanSalah;
            string papanTebakan;
            string objekTebakan = objek[indeksObjek];

            loopGame:
                head(8);
                cout << "Poin yang kamu miliki: " << data.poinSekarang << endl << endl;
                cout << jenisObjek << " ini memiliki jumlah karakter sebanyak: " << sizeObjek << endl;

                cout << endl;
                for(int i = 0; i < sizeObjek; i++){
                    if(firstTime){
                        if(objekTebakan[i] != ' '){
                            papanTebakan += '_';
                        }else{
                            papanTebakan += ' ';
                            jumlahBenar++;
                        }
                    }
                    cout << papanTebakan[i] << " ";
                }
                cout << endl;

                if(jumlahSalah > 0){
                    cout << "\nHuruf salah:" << endl;
                    for(int i = 0; i < jumlahSalah; i++){
                        cout << tebakanSalah[i];
                        if(i < jumlahSalah-1){
                            cout << "-";
                        }
                    }
                    cout << endl;
                }

                if(aturan){
                    penjelasanAturan(poinBenar, poinBenar/10, poinBenar/3);                  
                }

                if(!aturan){
                    cout << "\nTekan \"0\" untuk melihat aturan!" << endl;
                }else{
                    cout << "\nTekan \"0\" untuk menutup aturan!" << endl;
                }
                cout << "Tekan \"1\" untuk meminta bantuan!" << endl;

                string tebakanTemp;
                cout << "\nInput sebuah huruf tebakan: ";
                getline(cin, tebakanTemp);
    
                if(tebakanTemp.size() > 1){
                    cout << "\nInput hanya diperbolehkan sebuah karakter!" << endl;
                    end();
                    goto loopGame;            
                }

                char tebakanUser = toupper(tebakanTemp[0]);

                if(tebakanUser == '0'){
                    if(!aturan){
                        aturan = true;
                    }else{
                        aturan = false;
                    }
                    goto loopGame;
                }else if(tebakanUser == '1'){
                    if(data.poinSekarang <= 0){
                        cout << "\nPoinmu tidak cukup untuk meminta bantuan!" << endl;
                        end();
                        goto loopGame;
                    }
                    while(true){
                        int indeksBantuan = rand() % sizeObjek;
                        if(papanTebakan[indeksBantuan] == '_'){
                            tebakanUser = objekTebakan[indeksBantuan];
                            jumlahBantuan++;
                            break;
                        }
                    }
                }

                if(!isalpha(tebakanUser)){
                    cout << "\nInput hanya diperbolehkan karakter bertipe alphabet!" << endl;
                    end();
                    goto loopGame;    
                }

                string semuaTebakan = papanTebakan + tebakanSalah;
                for(int i = 0; i < semuaTebakan.size(); i++){
                    if(semuaTebakan[i] == tebakanUser){
                        cout << "\nKamu sudah menebak huruf tersebut!" << endl;
                        end();
                        goto loopGame;
                    }
                }

                bool userSalah = true;
                for(int i = 0; i < sizeObjek; i++){
                    if(objekTebakan[i] == tebakanUser){
                        jumlahBenar++;
                        papanTebakan[i] = tebakanUser;
                        firstTime = false;
                        userSalah = false;
                    }
                }

                if(userSalah){
                    tebakanSalah += tebakanUser;
                    jumlahSalah++;
                }

                if(jumlahBenar == sizeObjek){
                    int poinSalah = jumlahSalah * (poinBenar/10);
                    int poinBantuan = jumlahBantuan * (poinBenar/3);

                    int poinDurasi = 0;
                    int durasiAkhir = time(0);
                    int durasiMenebak = durasiAkhir - durasiAwal;
                    if(durasiMenebak > sizeObjek*2){
                        poinDurasi += (durasiMenebak-sizeObjek*2) * (poinBenar/200.0);
                    }

                    int totalPoin = poinBenar - poinSalah - poinBantuan - poinDurasi;

                    data.poinSekarang += totalPoin;
                    data.poinTertinggi = max(data.poinSekarang, data.poinTertinggi);

                    string tempRankSekarang = data.rankSekarang;

                    if(data.poinSekarang < 0){
                        data.rankSekarang = "1Loser";
                    }else if(data.poinSekarang < 200){
                        data.rankSekarang = "2Bronze";
                    }else if(data.poinSekarang < 400){
                        data.rankSekarang = "3Silver";
                    }else if(data.poinSekarang < 600){
                        data.rankSekarang = "4Gold";
                    }else if(data.poinSekarang < 800){
                        data.rankSekarang = "5Diamond";
                    }else if(data.poinSekarang < 1000){
                        data.rankSekarang = "6Legend";
                    }else{
                        data.rankSekarang = "7Glory";
                    }
                    data.rankTertinggi = max(data.rankSekarang, data.rankTertinggi);

                    bool rankBerubah = false;
                    if(tempRankSekarang != data.rankSekarang){
                        rankBerubah = true;
                    }

                    data.jumlahTotalPermainan++;
                    if(totalPoin == poinBenar){
                        data.jumlahTotalPermainanSempurna++;
                    }

                    if(data.waktuMenebakTercepat == 0){
                        data.waktuMenebakTercepat = durasiMenebak;
                    }else{
                        data.waktuMenebakTercepat = min(durasiMenebak, data.waktuMenebakTercepat);
                    }
                    data.waktuMenebakTerlama = max(durasiMenebak, data.waktuMenebakTerlama);

                    data.totalDurasiBermain += durasiMenebak;
                    data.rataRataDurasiBermain = float(data.totalDurasiBermain) / float(data.jumlahTotalPermainan);

                    data.totalBantuan += jumlahBantuan;
                    data.rataRataBantuan = float(data.totalBantuan) / float(data.jumlahTotalPermainan);

                    data.totalHurufSalah += jumlahSalah;
                    data.rataRataHurufSalah = float(data.totalHurufSalah) / float(data.jumlahTotalPermainan);

                    transferDataMenujuFile(data);

                    if(totalPoin == poinBenar or rankBerubah){
                        hasilTebakan(sizeObjek, papanTebakan);
                        if(totalPoin == poinBenar){
                            permainanSempurna();
                        }
                        if(rankBerubah){
                            perubahanRank(tempRankSekarang, data.rankSekarang);
                        }
                        end();
                    }

                    hasilTebakan(sizeObjek, papanTebakan);
                    ringkasanPermainan(durasiMenebak, poinBenar, jumlahSalah, poinSalah, 
                    jumlahBantuan, poinBantuan, poinDurasi, totalPoin, data.poinSekarang);

                    cout << "\nPilih salah satu!" << endl;
                    cout << "0. Kembali" << endl;
                    cout << "1. Ulang" << endl;
                    if(pilihanUser("\nPilihan kamu: ", 0, 1) == 1){
                        goto loopRestartGame;
                    }else{
                        return;
                    }
                }

                goto loopGame;            
    }

    void start(string namaPemain){
        player data;
        transferDataDariFile(namaPemain, data);

        loopMenu:
            head(8);
            cout << "Player  :  " << data.namaAkun << endl;
            cout << "Rank    :  " << data.rankSekarang.substr(1, data.rankSekarang.size()) << endl;
            cout << "Poin    :  " << data.poinSekarang << endl;

            cout << "\nPilih salah satu!" << endl;
            cout << "1. Bermain" << endl;
            cout << "2. Cara Bermain" << endl;
            cout << "3. Informasi Rank" << endl;
            cout << "4. Statistik Akun" << endl;
            cout << "5. Simpan dan Keluar" << endl;

            int pilihan = pilihanUser("\nPilihan kamu: ", 1, 5);
            if(pilihan == 1){
                loopKategori:
                    int kategori = kategoriGame();
                    if(kategori == 0){
                        goto loopMenu;
                    }
                    int level = tingkatKesulitanGame();
                    if(level == 0){
                        goto loopKategori;
                    }
                gameStart(level, kategori, data);
                goto loopMenu;
            }else if(pilihan == 2){
                penjelasan();
                goto loopMenu;
            }else if(pilihan == 3){
                penjelasanRank();
                goto loopMenu;
            }else if(pilihan == 4){
                tampilkanStatistik(namaPemain, data);
                goto loopMenu;
            }else{
                return;
            }
    }
};