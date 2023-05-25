#include <iostream>  // File Header, cout, cin, endl
#include <stdlib.h>  // Yg berfungsi untuk operasi pembanding dan konversi
using namespace std; // Agar Compiler Dapat Mengenali Beberapa Perintah : cout, cin dll.

// Membuat fungsi
void term() // Dibuat Oleh Praditus Egi Dannuarta
{
    system("CLS"); // Menghapus riwayat
    cout << " ======================================================================================" << endl;
    cout << "|\t\t\t\t\t\t\t\t\t\t\t|" << endl;
    cout << "|\t\t\t\t\t\t\t\t\t\t\t|" << endl;
    cout << "|\tSelamat Datang Di Website Pemesanan Tiket Dunia Fantasi\t\t\t\t|" << endl;
    cout << "|\t\t\t\t\t\t\t\t\t\t\t|" << endl;
    cout << "|\t\t\t\t\t\t\t\t\t\t\t|" << endl;
    cout << "|\t\t\t\t\t\t\t\t\t\t\t|" << endl;
    cout << "|\tSyarat Dan Ketentuan Pengunjunng Dunia Fantasi\t\t\t\t\t|" << endl;
    cout << "|\t\t\t\t\t\t\t\t\t\t\t|" << endl;
    cout << "|\t1. Dilarang membawa senjata tajam\t\t\t\t\t\t|" << endl;
    cout << "|\t2. Anak dibawah 12 tahun wajib didampingi oleh orang tua atau wali\t\t|" << endl;
    cout << "|\t3. Jangan membunuh sesuatu kecuali waktu\t\t\t\t\t|" << endl;
    cout << "|\t4. Jangan mengambil apapun kecuali gambar\t\t\t\t\t|" << endl;
    cout << "|\t5. Jangan meninggalkan sesuatu kecuali jejak dan kenangan\t\t\t|" << endl;
    cout << "|\t\t\t\t\t\t\t\t\t\t\t|" << endl;
    cout << "|\t\t\t\t\t\t\t\t\t\t\t|" << endl;
    cout << " ======================================================================================" << endl;
    cout << "\n\n\tApakah anda menyetujuinya y/t? : ";
}

int main() // Fungsi Utama Yang Dibaca Kompiler Pertama Kali
{
    const int adm = 2000, diskon = 25000;                                                                     // konstanta tipe integer
    int i, n, awal, tanggal, metode, paket, sub_total = 0, total = 0, stock[4], harga[4];                     // Tipe data integer untuk menyimpan nilai bilangan bulat
    string user = "", pw = "", username, password, jenis[4], username1, password1, email, koderahasia, promo; // Tipe data yang menyimpan text atau kumpulan dari karakter
    char ulangi = 'y', syarat, kodelagi;                                                                      // Tipe data untuk satu karakter
    float saldo = 900000;                                                                                     // Tipe data float untuk menyimpan nilai bilangan pecahan atau real

    // Array dibuat oleh Agus Heryanto_22.11.4661
    // Barang
    jenis[0] = "Ini tidak akan ditampilkan";
    jenis[1] = "REGULER";
    jenis[2] = "EKSEKUTIF";
    jenis[3] = "VVIP";

    // Harga
    harga[0] = 0;
    harga[1] = 50000;
    harga[2] = 75000;
    harga[3] = 100000;

    // Tersedia
    stock[0] = 0;
    stock[1] = 5;
    stock[2] = 3;
    stock[3] = 10;

    // Fitur Create Account Dibuat Oleh Agus Heryanto_22.11.4661
    start:         // Fungsi goto
    system("cls"); // Menghapus riwayat aktifitas program sebelumnya
    cout << " ======================================================================================" << endl;
    cout << "|\t\t\t\t\t\t\t\t\t\t\t|" << endl;
    cout << "|\t\t\t\t\t\t\t\t\t\t\t|" << endl;
    cout << "|\t\t\t\t[1] Masuk Ke Akun Anda\t\t\t\t\t|" << endl;
    cout << "|\t\t\t\t\t\t\t\t\t\t\t|" << endl;
    cout << "|\t\t\t\tAtau\t\t\t\t\t\t\t|" << endl;
    cout << "|\t\t\t\t\t\t\t\t\t\t\t|" << endl;
    cout << "|\t\t\t\t[2] Buat Akun\t\t\t\t\t\t|" << endl;
    cout << "|\t\t\t\t\t\t\t\t\t\t\t|" << endl;
    cout << "|\t\t\t\t\t\t\t\t\t\t\t|" << endl;
    cout << " ======================================================================================" << endl;
    cout << "\n\t\t\t\tMasukan Pilihan : ";
    cin >> awal;
    if (awal == 1)
    {
        goto login;
    }
    else if (awal == 2)
    {
        goto daftar;
    }
    else
    {
        cout << "Menu Tidak Tersedia" << endl;
        goto start;
    }
    daftar:
    system("cls");
    cout << "\n=====Buat Akun=====" << endl;
    cout << "\nMasukan Username : ";
    cin >> user;
    if (user != "suga")
    {
        cout << "\nMasukan Password : ";
        cin >> pw;
        if (pw != "")
        {
            cout << "\nSelamat Akun Anda Telah Terdaftar" << endl;
            cin.ignore(); // yang digunakan untuk mengabaikan atau menghapus satu atau lebih karakter dari buffer input
            cout << "\n\nKlik Enter Untuk Login" << endl;
            cin.get();
            goto login;
        }
    }
    else
    {
        cout << "Username Anda Telah Terdaftar" << endl;
        cin.ignore();
        cout << "\nKlik Enter Untuk Ke Menu Login" << endl;
        cin.get();
    }
    // Fitur Login Dibuat Oleh Agus Heryanto _22.11.4661
    login: // Fungsi goto
    system("CLS");
    cout << "=====LOGIN=====" << endl;
    cout << "\nMasukan Username" << endl;
    cout << "\nUsername : ";
    cin >> username1;
    if (username1 == "suga" || username1 == user)
    {
        pw:
        system("CLS");
        for (i = 0; i < 3; i++) // Perulangan
        {                       // Loop
            cout << "Masukan Password" << endl;
            cout << "\nPassword : ";
            cin >> password1;
            if (password1 == "suga" || password1 == pw)
            {
                do
                {
                    // Fitur Menu Dibuat Oleh Praditus Egi Danuarta_22.11.4662
                    menu:
                    term();
                    cin >> syarat;
                    // Pemilihan
                    if (syarat == 'Y' || syarat == 'y')
                    { // Selection & (||) Pembanding OR
                        date:
                        system("CLS");
                        cout << " ======================================================================================" << endl;
                        cout << "|\t\t\t\t\t\t\t\t\t\t\t|" << endl;
                        cout << "|\t\t\t\t\t\t\t\t\t\t\t|" << endl;
                        cout << "|\t\t\tSilahkan Pilih Tanggal Yang Tersedia\t\t\t\t|" << endl;
                        cout << "|\t\t\t\t\t\t\t\t\t\t\t|" << endl;
                        cout << "|\t\t\t\t\t\t\t\t\t\t\t|" << endl;
                        cout << "|\t\t\t[1]\t[2]\t[3]\t[4]\t[5]\t\t\t\t|" << endl;
                        cout << "|\t\t\t\t\t\t\t\t\t\t\t|" << endl;
                        cout << "|\t\t\t[6]\t[7]\t[8]\t[9]\t[10]\t\t\t\t|" << endl;
                        cout << "|\t\t\t\t\t\t\t\t\t\t\t|" << endl;
                        cout << "|\t\t\t[11]\t[12]\t[13]\t[14]\t[15]\t\t\t\t|" << endl;
                        cout << "|\t\t\t\t\t\t\t\t\t\t\t|" << endl;
                        cout << "|\t\t\t[16]\t[17]\t[18]\t[19]\t[20]\t\t\t\t|" << endl;
                        cout << "|\t\t\t\t\t\t\t\t\t\t\t|" << endl;
                        cout << "|\t\t\t[21]\t[22]\t[23]\t[24]\t[25]\t\t\t\t|" << endl;
                        cout << "|\t\t\t\t\t\t\t\t\t\t\t|" << endl;
                        cout << "|\t\t\t[26]\t[27]\t[28]\t[29]\t[30]\t\t\t\t|" << endl;
                        cout << "|\t\t\t\t\t\t\t\t\t\t\t|" << endl;
                        cout << "|\t\t\t\t\t\t\t\t\t\t\t|" << endl;
                        cout << " ======================================================================================" << endl;
                        cout << "\n\n\t\t\tPilih tanggal : ";
                        cin >> tanggal;
                        if (tanggal <= 25 && tanggal != 0)
                        {
                            paket:
                            system("CLS");
                            cout << " ======================================================================================" << endl;
                            cout << "|\t\t\t\t\t\t\t\t\t\t\t|" << endl;
                            cout << "|\t\t\t\t\t\t\t\t\t\t\t|" << endl;
                            cout << "|\t\t\t[1] Reguler RP " << harga[1] << " (Tersedia " << stock[1] << " Tiket)\t\t\t\t|" << endl;
                            cout << "|\t\t\t\t\t\t\t\t\t\t\t|" << endl;
                            cout << "|\t\t\t[2] Eksekutif RP " << harga[2] << " (Tersedia " << stock[2] << " Tiket)\t\t\t|" << endl;
                            cout << "|\t\t\t\t\t\t\t\t\t\t\t|" << endl;
                            cout << "|\t\t\t[3] VVIP RP " << harga[3] << " (Tersedia " << stock[3] << " Tiket)\t\t\t\t|" << endl;
                            cout << "|\t\t\t\t\t\t\t\t\t\t\t|" << endl;
                            cout << "|\t\t\t[4] Kembali Ke Halaman Sebelumnya\t\t\t\t|" << endl;
                            cout << "|\t\t\t\t\t\t\t\t\t\t\t|" << endl;
                            cout << "|\t\t\t[5] Keluar\t\t\t\t\t\t\t|" << endl;
                            cout << "|\t\t\t\t\t\t\t\t\t\t\t|" << endl;
                            cout << "|\t\t\t\t\t\t\t\t\t\t\t|" << endl;
                            cout << " ======================================================================================" << endl;
                            cout << "\n\n\t\t\tPilih paket : ";
                            cin >> i;
                            if (i <= 3 && i != 0 && i > 0)
                            {
                                // Fitur Tiket Dibuat Oleh Agus Heryanto_22.11.4661
                                jumlahtiket:
                                system("CLS");
                                cout << "Anda Memilih Paket " << jenis[i] << " IDR " << harga[i] << endl;
                                cout << "\nMasukan jumlah tiket : ";
                                cin >> n;
                                if (n <= stock[i] && n != 0)
                                {
                                    stock[i] = stock[i] - n;
                                    sub_total = sub_total + (harga[i] * n);
                                    cout << "Sub Total RP " << sub_total << endl;
                                }
                                else if (n <= 0)
                                {
                                    goto jumlahtiket;
                                }
                                else
                                {
                                    system("cls");
                                    cout << "\nAnda Memesan Tiket Melebihi Stock !!!" << endl;
                                    cout << "\nMohon untuk Memesan Ulang Tiket Sesuai Stock Yang Tersedia" << endl;
                                    cin.ignore();
                                    cout << "\n\nKlik Enter Untuk Memesan Ulang Tiket" << endl;
                                    cin.get();
                                    goto jumlahtiket;
                                }
                                identitas:
                                system("CLS");
                                cout << "Masukan Email Anda = ";
                                cin >> email;
                                metode:
                                system("CLS");
                                cout << " ======================================================================================" << endl;
                                cout << "|\t\t\t\t\t\t\t\t\t\t\t|" << endl;
                                cout << "|\t\t\t\t\t\t\t\t\t\t\t|" << endl;
                                cout << "|\t\t\t[1] DufanPay\t\t\t\t\t\t\t|" << endl;
                                cout << "|\t\t\t\t\t\t\t\t\t\t\t|" << endl;
                                cout << "|\t\t\t[2] Transfer\t\t\t\t\t\t\t|" << endl;
                                cout << "|\t\t\t\t\t\t\t\t\t\t\t|" << endl;
                                cout << "|\t\t\t[3] Keluar\t\t\t\t\t\t\t|" << endl;
                                cout << "|\t\t\t\t\t\t\t\t\t\t\t|" << endl;
                                cout << "|\t\t\t\t\t\t\t\t\t\t\t|" << endl;
                                cout << " ======================================================================================" << endl;
                                cout << "\n\t\t\tMasukan Pilihan = ";
                                cin >> metode;
                                // Fitur DufanPay Dibuat Oleh Rizky Fadly Pramudya W_22.11.4659
                                if (metode == 1)
                                {
                                    detail:
                                    system("CLS");
                                    cout << " ======================================================================================" << endl;
                                    cout << "|\t\t\t\t\t\t\t\t\t\t\t|" << endl;
                                    cout << "|\t\t\t\t\t\t\t\t\t\t\t|" << endl;
                                    cout << "|\t\t\tSaldo Akun DufanPay = " << " RP " << saldo << " \t\t\t\t|" << endl;
                                    cout << "|\t\t\t\t\t\t\t\t\t\t\t|" << endl;
                                    cout << "|\t\t\t\t\t\t\t\t\t\t\t|" << endl;
                                    cout << "|\t\t\tDetail Pemesanan :\t\t\t\t\t\t|" << endl;
                                    cout << "|\t\t\t\t\t\t\t\t\t\t\t|" << endl;
                                    cout << "|\t\t\tEmail Pembeli = " << email << " \t\t\t\t\t\t|" << endl;
                                    cout << "|\t\t\t\t\t\t\t\t\t\t\t|" << endl;
                                    cout << "|\t\t\tBiaya Administrasi = " << " RP " << adm << " \t\t\t\t\t|" << endl;
                                    cout << "|\t\t\t\t\t\t\t\t\t\t\t|" << endl;
                                    cout << "|\t\t\tSub Total = " << " RP " << (harga[i] * n) << " \t\t\t\t\t\t|" << endl;
                                    cout << "|\t\t\t\t\t\t\t\t\t\t\t|" << endl;
                                    cout << "|\t\t\t\t\t\t\t\t\t\t\t|" << endl;
                                    cout << " ======================================================================================" << endl;
                                    cout << "\n\n\t\t\tMasukan Kode Promo = ";
                                    cin >> promo;
                                    // Fitur Promo Dibuat Oleh Muhammad Rafli Akbar_22.11.4655
                                    if (promo == "PROMOTAHUNBARU")
                                    {
                                        cin.ignore();
                                        cout << "\nKode Promo Berhasil Digunakan" << endl;
                                        cout << "\n\nKlik Enter Untuk Melanjutkan" << endl;
                                        cin.get();

                                        // Dengan Promo
                                        detailandpromo:
                                        system("CLS");
                                        cout << " ======================================================================================" << endl;
                                        cout << "|\t\t\t\t\t\t\t\t\t\t\t|" << endl;
                                        cout << "|\t\t\t\t\t\t\t\t\t\t\t|" << endl;
                                        cout << "|\t\t\tSaldo Akun DufanPay = " << " RP " << saldo << "\t\t\t\t|" << endl;
                                        cout << "|\t\t\t\t\t\t\t\t\t\t\t|" << endl;
                                        cout << "|\t\t\t\t\t\t\t\t\t\t\t|" << endl;

                                        // Proses
                                        saldo = saldo - (harga[i] * n) - diskon - adm;
                                        total = (total + (harga[i] * n) + adm) - (diskon * n);

                                        cout << "|\t\t\tDetail Pemesanan :" << "\t\t\t\t\t\t|" << endl;
                                        cout << "|\t\t\t\t\t\t\t\t\t\t\t|" << endl;
                                        cout << "|\t\t\t\t\t\t\t\t\t\t\t|" << endl;
                                        cout << "|\t\t\tEmail Pembeli = " << email << "\t\t\t\t\t\t|" << endl;
                                        cout << "|\t\t\tBiaya Administrasi = " << " RP " << adm << "\t\t\t\t\t|"<< endl;
                                        cout << "|\t\t\tPromo Akhir Tahun = " << " RP " << (diskon * n) << " \t\t\t\t\t|" << endl;
                                        cout << "|\t\t\tTotal Pembayaran = " << " RP " << total << " \t\t\t\t\t|" << endl;
                                        cout << "|\t\t\t\t\t\t\t\t\t\t\t|" << endl;
                                        cout << "|\t\t\t\t\t\t\t\t\t\t\t|" << endl;
                                        cout << " ======================================================================================" << endl;
                                        cout << "\n\n\t\t\tKlik Enter Untuk Melanjutkan" << endl;
                                        cin.get();
                                        goto code;
                                    }
                                    else
                                    {
                                        cout << "\n\t\t\tMohon Maaf Promo Kadaluarsa" << endl;
                                        cin.ignore(); // yang digunakan untuk mengabaikan atau menghapus satu atau lebih karakter dari buffer input
                                        cout << "\n\n\t\t\tKlik Enter Untuk Melanjutkan Tanpa Promo" << endl;
                                        cin.get();

                                        // Tanpa Promo
                                        detailwithoutpromo:
                                        system("CLS");
                                        cout << " ======================================================================================" << endl;
                                        cout << "|\t\t\t\t\t\t\t\t\t\t\t|" << endl;
                                        cout << "|\t\t\t\t\t\t\t\t\t\t\t|" << endl;
                                        cout << "|\t\t\tSaldo Akun DufanPay = " << saldo << " \t\t\t\t\t|" <<  endl;
                                        cout << "|\t\t\t\t\t\t\t\t\t\t\t|" << endl;
                                        cout << "|\t\t\t\t\t\t\t\t\t\t\t|" << endl;
                                        cout << "|\t\t\t\t\t\t\t\t\t\t\t|" << endl;
                                        // Proses
                                        saldo = saldo - (harga[i] * n) - adm;
                                        total = (total + (harga[i] * n) + adm);

                                        cout << "|\t\t\tDetail Pemesanan :" << " \t\t\t\t\t\t|" <<  endl;
                                        cout << "|\t\t\t\t\t\t\t\t\t\t\t|" << endl;
                                        cout << "|\t\t\tEmail Pembeli = " << email << " \t\t\t\t\t\t|" <<  endl;
                                        cout << "|\t\t\t\t\t\t\t\t\t\t\t|" << endl;
                                        cout << "|\t\t\tBiaya Administrasi = " << " RP " << adm << " \t\t\t\t\t|" <<  endl;
                                        cout << "|\t\t\t\t\t\t\t\t\t\t\t|" << endl;
                                        cout << "|\t\t\tTotal Pembayaran = " << " RP " << total << " \t\t\t\t\t|" << endl;
                                        cout << "|\t\t\t\t\t\t\t\t\t\t\t|" << endl;
                                        cout << "|\t\t\t\t\t\t\t\t\t\t\t|" << endl;
                                        cout << " ======================================================================================" << endl;
                                        cout << "\n\n\t\t\tKlik Enter Untuk Melanjutkan" << endl;
                                        cin.get();
                                        goto code;
                                    }
                                    // Fitur Kode Rahasia Dibuat Oleh Rendi Rizki_22.11.4657
                                    code:
                                    system("CLS");
                                    cout << "Masukan Kode Rahasia = ";
                                    cin >> koderahasia;
                                    if (koderahasia == "janganbanyakjajan" && saldo >= 0)
                                    {
                                        system("CLS");
                                        cout << "\nPembayaran Anda Berhasil" << endl;
                                        cout << "\nSilahkan Cek Email Anda Untuk Mengklaim Tiket Digital" << endl;
                                        cout << "\n\nSisa Saldo DufanPay Anda = " << saldo << endl;
                                    }
                                    else if (koderahasia == "janganbanyakjajan" && saldo < 0)
                                    {
                                    saldokurang:
                                        system("cls");
                                        cout << "Saldo Anda Tidak Cukup Untuk Melakukan Pembelian -_-" << endl;
                                        return 0;
                                    }
                                    else
                                    {
                                        system("cls");
                                        cout << "\nKode Yang Anda Masukan Salah" << endl;
                                        cout << "\nApakah Anda Ingin Memasukan Ulang Kode Rahasia y/t? = ";
                                        cin >> kodelagi;
                                        if (kodelagi == 'y' || kodelagi == 'Y')
                                        {
                                            goto code;
                                        }
                                        else
                                        {
                                            return 0;
                                        }
                                    }
                                }
                                // Fitur Transfer Dibuat Oleh Syifaur Rahman Tharif_22.11.4660
                                else if (metode == 2)
                                {
                                    transfer:
                                    system("cls");
                                    cout << "Silahkan Transfer Ke Rekening Dibawah Ini" << endl;
                                    cout << "22114660 - Syifaur Taurif Rahman" << endl;
                                    cin.ignore();
                                    cout << "\n\nKlik enter untuk mengecek status pembayaran" << endl;
                                    cin.get();
                                    cout << "\nPembayaran Anda Terverifikasi" << endl;
                                    cout << "\nSilahkan Cek Email Anda Untuk Mengklaim Tiket Digital" << endl;
                                }
                                else if (metode == 3)
                                {
                                    cout << "Anda Telah Keluar" << endl;
                                    return 0;
                                }
                                else
                                {
                                    system("CLS");
                                    cout << "Menu Tidak Tersedia" << endl;
                                    cin.ignore();
                                    cout << "Klik Enter Untuk Kembali Ke Menu Sebelumnya" << endl;
                                    cin.get();
                                    goto metode;
                                }
                            }
                            else if (i == 4)
                            {
                                goto date;
                            }
                            else if (i == 5)
                            {
                                system("cls");
                                cout << "\nAnda Telah Keluar" << endl;
                                return 0;
                            }
                            else
                            {
                                cout << "Pilihan Tidak Tersedia" << endl;
                                goto paket;
                            }
                        }
                        else if (tanggal < 0)
                        {
                            goto date;
                        }
                        else
                        {
                            system("CLS");
                            cout << "Pilihan Tidak Tersedia" << endl;
                            goto date;
                        }
                    }
                    else
                    {
                        goto menu;
                    }
                    // Fitur Beli lagi Dibuat Oleh Dico Fathathul Rizki_22.11.5656
                    cout << "\n\n Apakah anda ingin berbelanja lagi y/t? : ";
                    cin >> ulangi;
                    i++;
                } while (ulangi == 'Y' || ulangi == 'y');
                system("CLS");
                cout << "Terimakasih Telah Melakukan Transaksi >_<" << endl;
                return 0;
            }
            else
            {
                cout << "\nPassword Salah, Silahkan Coba Lagi" << endl;
                cout << endl;
            }
        }
        cout << "\nAnda Telah Memasukan Password Salah Sebanyak " << i << " kali !!! " << endl;
        cout << "Jika Anda Memiliki Kendala Atau Lupa Dengan Password Akun Anda" << endl;
        cout << "Bisa Menghubungi Akun Instagram Developer Kami @agusheryanto182" << endl;
        return 0;
    }
    else
    {
        cout << "\nUsername Salah, Silahkan Coba Lagi" << endl;
        cin.ignore();
        cout << "\n\nKlik Enter Untuk Coba Lagi" << endl;
        cin.get();
        system("CLS");
        goto login;
    }
}