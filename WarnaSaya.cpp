#include <iostream>

using namespace std;

int main () {

    char ans;
    string NAME;
    string age;
    char alp;


    //Lobby
    cout << "---------------------------------------------------" << endl;
    cout << "Selamat Datang ke quiz kami. Kat sini kita cakap melayu." << endl;
    cout << endl;
    cout << "Siapa nama awak?" << endl;
    cout << "Nama saya ialah ";
    cin >> NAME;

    cout << endl;

    cout << " 'ialah' HAHAHAHAH skema siak ko." << endl;
    cout << "Eh " << NAME << "." << endl;
    cout << "Umur berapa ko?" << endl;
    cout << endl;
    cout << "Umur saya ";
    cin >> age;

    cout << endl;

    cout << "---------------------------------------------------" << endl; 
    cout << "Oh....Saya 18...." << endl;
    cout << endl;
    cout << "Pilih jawapan anda :" << endl;
    cout << "A. Bila masa aku tanya kau. " << endl;
    cout << "B. Saya pun! " << endl;
    cout << "C. Oh.... " << endl;
    cout << "D. Teruskan mengetahui lebih lanjut tentang pencipta quiz" << endl;
    cout << "Jawapan anda :";
    cin >> ans;

         if ( ans == 'A' || ans == 'a' ) {
            cout << "---------------------------------------------------" << endl;
            cout << NAME << " : Bila masa aku tanya kau." << endl;
            cout << endl;
            cout << "Cakap pon salah. Tak cakap nanti kau jugak tertanya-tanya." << endl;
            cout << endl;
         }
         else if ( ans == 'B' || ans == 'b' ) {
            cout << "---------------------------------------------------" << endl;
            cout << NAME << " : Saya pun! " << endl;
            cout << endl;
            cout << "Tadi bukan dah cakap ke.";
            cout << endl;
         }
         else if ( ans == 'C' || ans == 'c' ) {
            cout << "---------------------------------------------------" << endl;
            cout << NAME << " : Oh....." << endl;
            cout << "Ha.....Camtu la...Hahahaha.." << endl;
            cout << endl;
         }
         else if ( ans == 'D' || ans == 'd' ) {
            cout << "---------------------------------------------------" << endl;
            cout << "Saya ni... harini hari ketiga saya belajar buat benda ni..." << endl;
            cout << endl;
            cout << "Tekan A untuk mulakan quiz, B untuk teruskan mengetahui lebih lanjut." << endl;
            cout << "Jawapan anda : ";
            cin >> ans;
            cout << endl;

               if ( ans == 'A' || ans == 'a' ) {
            
               }

               else if ( ans == 'B' || ans == 'b' ) {
                cout << "---------------------------------------------------" << endl;
                cout << "Lepastu baru saya start belajar di U bulan depan.. " << endl;
                cout << "Memang belum biasa lagi ni. Saya ni suka main tulis-tulis kat status." << endl;
                cout << "Jadi sekarang ni hobi baru saya lah. Dahla baru beli laptop. Hobi baru pun dapat. Hehe.." << endl;
                cout << endl;
                cout << "Pilih jawapan anda." << endl;
                cout << "A. Oh..." << endl;
                cout << "B. Wah.. lagi-lagi." << endl;
                cout << endl;
                cin >> ans;

                cout << endl;
                   if ( ans == 'A' || ans == 'B' ) {
                    
                   }

                   else if ( ans == 'B' || ans == 'b' ) {
                    cout << "---------------------------------------------------" << endl;
                    cout << "Wah awak ni suka tau pasal saya ke. Followlah ig saya yenniemin." << endl;
                    cout << "YouTube pun saya nama sama. Spotify pun sama. Saya ada buat lagu." << endl;
                    cout << "Saya rajin post. Tapi kebanyakkan gambar muka saya lah. Hahaha" << endl;
                    cout << "Tapi.. Saya ni fan Kpop tau...Kalau awak tak suka Kpop takpelah.." << endl;
                    cout << endl;
                   }
               }

    
         }




    
     //mark1-Biru
     //mark2-Merah
     //mark3-Hijau
     //mark4-Hitam
     //mark5-Putih

    int mark1 = 0;
    int mark2 = 0;
    int mark3 = 0;
    int mark4 = 0;
    int mark5 = 0;
    char jaw;

    // Quiz Start
    // Q1
    cout << "---------------------------------------------------" << endl;
    cout << "---------------------------------------------------" << endl;
    cout << "Jom mulakan quiz ini!" << endl;
    cout << "Baiklah, " << NAME << "." << endl;
    cout << endl;
    cout << "Pilih satu makanan mengikut pilihan di bawah." << endl;
    cout << "A. Aiskrim" << endl;
    cout << "B. Sayur" << endl;
    cout << "C. Taknak makan" << endl;
    cout << "D. Ayam Goreng" << endl;
    cout << "E. Ubat Cap Ibu dan Anak" << endl;
    cout << endl;
    cout << "Jawapan anda : " << endl;
    cin >> jaw;

        if ( jaw == 'A' || jaw == 'a' ) {
             mark1++;
        }
        else if ( jaw == 'B' || jaw == 'b' ) {
             mark2++;
        }
        else if ( jaw == 'C' || jaw == 'c' ) {
             mark3++;
        }
        else if ( jaw == 'D' || jaw == 'd' ) {
             mark5++;
        }
        else if ( jaw == 'E' || jaw == 'e' ) {
             mark4++;
        }
        else {

        }

        cout << endl;
        // Q2
        cout << "---------------------------------------------------" << endl;
        cout << "Pilih satu." << endl;
        cout << "A. BTS" << endl;
        cout << "B. Billie Eilish" << endl;
        cout << "C. Justin Bieber" << endl;
        cout << "D. Ismail Izzani" << endl;
        cout << "E. IVE" << endl;
        cout << endl;
        cout << "Jawapan anda : ";
        cin >> jaw;

        if ( jaw == 'A' || jaw == 'a' ) {
             mark1++;
        }
        else if ( jaw == 'B' || jaw == 'b' ) {
             mark4++;
        }
        else if ( jaw == 'C' || jaw == 'c' ) {
             mark3++;
        }
        else if ( jaw == 'D' || jaw == 'd' ) {
             mark2++;
        }
        else if ( jaw == 'E' || jaw == 'e' ) {
             mark5++;
        }
        else {

        }

        cout << endl;
        // Q3
        cout << "---------------------------------------------------" << endl;
        cout << NAME << " berjalan untuk pergi ke pasar." << endl;
        cout << "Tiba-tiba, seekor kucing berwarna biru hitam datang ke " << NAME << " untuk meminta makanan." << endl;
        cout << NAME << " hanya mempunyai seringgit lima puluh sen di dalam begnya." << endl;
        cout << "Apakah " << NAME << " patut buat?" << endl;
        cout << endl;
        cout << "A. Ajak kucing tersebut ikut pergi ke pasar." << endl;
        cout << "B. Berikan kucing tersebut lima puluh sen." << endl;
        cout << "C. Minta nombor akaun bank kucing tersebut." << endl;
        cout << "D. Abaikan kucing tersebut." << endl;
        cout << "E. Bebel kepada kucing tersebut 'Ha tulah kau. Masa sekolah taknak belajar betul-betul.'" << endl;
        cout << endl;
        cout << "Jawapan anda : " << endl;
        cin >> jaw;

        if ( jaw == 'A' || jaw == 'a' ) {
             mark5++;
        }
        else if ( jaw == 'B' || jaw == 'b' ) {
             mark1++;
        }
        else if ( jaw == 'C' || jaw == 'c' ) {
             mark2++;
        }
        else if ( jaw == 'D' || jaw == 'd' ) {
             mark3++;
        }
        else if ( jaw == 'E' || jaw == 'e' ) {
             mark4++;
        }
        else {

        }

        cout << endl;
        // Q4
        cout << "---------------------------------------------------" << endl;
        cout << "Haiwan kegemaran saya ialah...." << endl;
        cout << endl;
        cout << "A. Anjing" << endl;
        cout << "B. Monyet" << endl;
        cout << "C. Ikan" << endl;
        cout << "D. Platipus" << endl;
        cout << "E. Cicak" << endl;
        cout << endl;
        cout << "Jawapan anda : ";
        cin >> jaw;

        if ( jaw == 'A' || jaw == 'a' ) {
             mark1++;
        }
        else if ( jaw == 'B' || jaw == 'b' ) {
             mark3++;
        }
        else if ( jaw == 'C' || jaw == 'c' ) {
             mark5++;
        }
        else if ( jaw == 'D' || jaw == 'd' ) {
             mark2++;
        }
        else if ( jaw == 'E' || jaw == 'e' ) {
             mark4++;
        }
        else {

        }

        cout << endl;
        // Q5
        cout << "---------------------------------------------------" << endl;
        cout << "Siapakah yang mencipta Sanitizer?" << endl;
        cout << endl;
        cout << "A. Jungwon ENHYPEN" << endl;
        cout << "B. Mark Zuckerberg" << endl;
        cout << "C. Randy Orton" << endl;
        cout << "D. Charles Babbage" << endl;
        cout << "E. John Vincent Atanasoff" << endl;
        cout << endl;
        cout << "Jawapan anda : ";
        cin >> jaw;

         if ( jaw == 'A' || jaw == 'a' ) {
             mark2++;
        }
        else if ( jaw == 'B' || jaw == 'b' ) {
             mark5++;
        }
        else if ( jaw == 'C' || jaw == 'c' ) {
             mark1++;
        }
        else if ( jaw == 'D' || jaw == 'd' ) {
             mark3++;
        }
        else if ( jaw == 'E' || jaw == 'e' ) {
             mark4++;
        }
        else {

        }

         cout << endl;
        // Q6
        cout << "---------------------------------------------------" << endl;
        cout << " 1 + 1 = " << endl;
        cout << endl;
        cout << "A. 11" << endl;
        cout << "B. 6" << endl;
        cout << "C. 2" << endl;
        cout << "D. 100" << endl;
        cout << "E. 42" << endl;
        cout << endl;
        cout << "Jawapan anda : ";
        cin >> jaw;

         if ( jaw == 'A' || jaw == 'a' ) {
             mark5++;
        }
        else if ( jaw == 'B' || jaw == 'b' ) {
             mark1++;
        }
        else if ( jaw == 'C' || jaw == 'c' ) {
             mark3++;
        }
        else if ( jaw == 'D' || jaw == 'd' ) {
             mark2++;
        }
        else if ( jaw == 'E' || jaw == 'e' ) {
             mark4++;
        }
        else {

        }





        // END SCREEN
        cout << endl;
        cout << "---------------------------------------------------" << endl;
        cout << "ooooooooooooooooooooooooooooooooooooooooooooooooooo" << endl;

        cout << endl;
              if ( mark1 >= mark2 && mark1 >= mark3 && mark1 >= mark4 && mark1 >= mark5 ) {
                cout << NAME << ", warna anda adalah" << endl;
                cout << "BIRU" << endl;
                cout << endl;
                cout << "Anda adalah seorang yang emo. Sikit-sikit merajuk." << endl;
                cout << "Saya menyampah orang seperti anda." << endl;
                cout << "Tapi orang seperti anda adalah orang yang baik!" << endl;
                cout << endl;
              }
              else if ( mark2 >= mark1 && mark2 >= mark3 && mark2 >= mark4 && mark2 >= mark5 ) {
                cout << NAME << ", warna anda adalah" << endl;
                cout << "MERAH" << endl;
                cout << endl;
                cout << "Anda adalah seorang yang mempunyai disiplin yang kuat!" << endl;
                cout << "Anda juga bijak dalam menentukan masa depan anda." << endl;
                cout << "Anda hebat!" << endl;
                cout << endl;
              }
              else if ( mark3 >= mark2 && mark3 >= mark1 && mark3 >= mark4 && mark3 >= mark5 ) {
                cout << NAME << ", warna anda adalah" << endl;
                cout << "HIJAU" << endl;
                cout << endl;
                cout << "Anda adalah orang yang acah dan membosankan." << endl;
                cout << "Anda juga rasa diri anda hebat tapi sebenarnya anda tak hebat." << endl;
                cout << endl;
              }
              else if ( mark4 >= mark2 && mark4 >= mark3 && mark4 >= mark1 & mark4 >= mark5 ) {
                cout << NAME << ", warna anda adalah" << endl;
                cout << "HITAM" << endl;
                cout << endl;
                cout << "Anda pelik." << endl;
                cout << "Saya teringin nak ada kawan seperti anda," << NAME << "." << endl;
                cout << "Jadilah kawan saya." << endl;
                cout << endl;
              }
              else if ( mark5 >= mark2 && mark5 >= mark3 && mark5 >= mark4 && mark5 >= mark1 ) {
                cout << NAME << ", warna anda adalah" << endl;
                cout << "PUTIH" << endl;
                cout << endl;
                cout << "Anda seorang yang comel," << endl;
                cout << "Anda juga suka berkawan dengan orang." << endl;
                cout << "Walau bagaimanapun," << endl;
                cout << "Anda tidak akan suka berkawan dengan orang seperti saya." << endl;
                cout << endl;
              }
              else {

              }
                cout << endl;
              




     return 0;
}