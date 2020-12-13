/* Program   : mlistrec.cpp */
/* Deskripsi : file DRIVER modul list linear berkait secara rekursif */
/* NIM/Nama  : 24060118120042/Musthafa Kamal Faishal */
/* Tanggal   : 2/12/2020 */
/***********************************/

#include <iostream>
#include "listrec.hpp"
using namespace std;



void header(){
	system("cls");
	cout << "---------------------------------------------------" << endl;
	cout << "|            TUGAS ADT LIST REKURSIF              |" << endl;
	cout << "---------------------------------------------------" << endl;
	cout << "|DOSEN PENGAMPU: Dr. ARIS PUJI WIDODO, S.Si., M.T.|" << endl;
	cout << "|  ASISTENSI MUH IKRAM NATSIR (17) & KHAIDIL (17) |" << endl;
	cout << "---------------------------------------------------" << endl;
	cout << "|  OLEH: MUSTHAFA KAMAL FAISHAL - 24060118120042  |" << endl;
	cout << "---------------------------------------------------" << endl;
}

int main()
{
	/* kamus */
	List L, L1, L2, Lin, Lout, LHsl, Lt;
	address P;
	int pilihan, N, Acc;
	infotype X, E;
	
	/* program utama */
	system("cls");
	menu:
	header();
	cout << "\nMenu: \n" << endl;
	cout << "1. Cek Isi List\n2. Menampilkan Isi List" << endl;
	cout << "3. Menampilkan Jumlah Elemen List Tipe 1" << endl;
	cout << "4. Menampilkan Jumlah Elemen List Tipe 2" << endl;
	cout << "5. Menampilkan Jumlah Elemen List Tipe 3" << endl;
	cout << "6. Cek Elemen di dalam Sebuah List" << endl;
	cout << "7. Menampilkan Elemen Pertama List" << endl;
	cout << "8. Menampilkan Elemen Terakhir List" << endl;
	cout << "9. Menampilkan List tanpa Elemen Pertama" << endl;
	cout << "10. Menampilkan List tanpa Elemen Terakhir" << endl;
	cout << "11. Menampilkan List dengan Tambahan Masukan Elemen sebagai Elemen Pertama" << endl;
	cout << "12. Menampilkan List dengan Tambahan Masukan Elemen sebagai Elemen Terakhir" << endl;
	cout << "13. Menampilkan Salinan List" << endl;
	cout << "14. Menampilkan Salinan List ke List Lt" << endl;
	cout << "15. Menampilkan Salinan Hasil Konkatenasi Dua List Tipe 1" << endl;
	cout << "16. Menampilkan Salinan Hasil Konkatenasi Dua List Tipe 2" << endl;
	cout << "17. Menghasilkan Salinan Hasil Konkatenasi Dua List" << endl;
	cout << "99. Keluar" << endl;
	cout << "\nInput Pilihan: "; cin >> pilihan;
	cout << endl;
	switch(pilihan){
		case 1:
			header();
			cout << "\n-- Cek Isi List --\n" << endl;
			cout << "Pilih List:\n" << endl;
			cout << "1. L1\n2. L2" << endl;
			cout << "\nInput Pilihan: "; cin >> pilihan;
			cout << endl;
			switch(pilihan){
				case 1:
					if (IsEmpty(L1)){
						cout << "List L1 kosong!\n" << endl;
					}
					else{
						cout << "List L1 berisi!\n" << endl;
					}
					break;
				case 2:
					if (IsEmpty(L2)){
						cout << "List L2 kosong!\n" << endl;
					}
					else{
						cout << "List L2 berisi!\n" << endl;
					}
					break;
				default:
					cout << "Input tidak valid!\n" << endl;
					break;
			}
			system("pause");
			break;
		case 2:
			header();
			cout << "\n-- Menampilkan Isi List --\n" << endl;
			cout << "Pilih List:\n" << endl;
			cout << "1. L1\n2. L2" << endl;
			cout << "\nInput Pilihan: "; cin >> pilihan;
			cout << endl;
			switch(pilihan){
				case 1:
					if (!IsEmpty(L1)){
						cout << "L1: ";
						Printlist(L1);
						cout << endl << endl;
					}
					else{
						cout << "List L1 kosong!\n" << endl;
					}
					break;
				case 2:
					if (!IsEmpty(L2)){
						cout << "L2: ";
						Printlist(L2);
						cout << endl << endl;
					}
					else{
						cout << "List L2 kosong!\n" << endl;
					}
					break;
				default:
					cout << "Input tidak valid!\n" << endl;
					break;
			}
			system("pause");
			break;
		case 3:
			header();
			cout << "\n-- Menampilkan Jumlah Elemen List Tipe 1 --\n" << endl;
			cout << "Pilih List:\n" << endl;
			cout << "1. L1\n2. L2" << endl;
			cout << "\nInput Pilihan: "; cin >> pilihan;
			cout << endl;
			switch(pilihan){
				case 1:
					if (!IsEmpty(L1)){
						cout << "Jumlah elemen L1: " << NBElmtlist(L1) << endl;
						cout << endl;
					}
					else{
						cout << "List L1 kosong!\n" << endl;
					}
					break;
				case 2:
					if (!IsEmpty(L2)){
						cout << "Jumlah elemen L2: " << NBElmtlist(L2) << endl;
						cout << endl;
					}
					else{
						cout << "List L2 kosong!\n" << endl;
					}
					break;
				default:
					cout << "Input tidak valid!\n" << endl;
					break;
			}
			system("pause");
			break;
		case 4:
			header();
			cout << "\n-- Menampilkan Jumlah Elemen List Tipe 2 --\n" << endl;
			cout << "Pilih List:\n" << endl;
			cout << "1. L1\n2. L2" << endl;
			cout << "\nInput Pilihan: "; cin >> pilihan;
			cout << endl;
			switch(pilihan){
				case 1:
					if (!IsEmpty(L1)){
						NBElmtlist1(L1, N);
						cout << "Jumlah elemen L1 di dalam N: " << N << endl;
						cout << endl;
					}
					else{
						cout << "List L1 kosong!\n" << endl;
					}
					break;
				case 2:
					if (!IsEmpty(L2)){
						NBElmtlist1(L2, N);
						cout << "Jumlah elemen L2 di dalam N: " << N << endl;
						cout << endl;
					}
					else{
						cout << "List L2 kosong!\n" << endl;
					}
					break;
				default:
					cout << "Input tidak valid!\n" << endl;
					break;
			}
			system("pause");
			break;
		case 5:
			header();
			cout << "\n-- Menampilkan Jumlah Elemen List Tipe 3 --\n" << endl;
			cout << "Pilih List:\n" << endl;
			cout << "1. L1\n2. L2" << endl;
			cout << "\nInput Pilihan: "; cin >> pilihan;
			cout << endl;
			switch(pilihan){
				case 1:
					if (!IsEmpty(L1)){
						NBElmtlistAcc(L1, Acc, N);
						cout << "Jumlah elemen L1 di dalam N: " << N << endl;
						cout << endl;
					}
					else{
						cout << "List L1 kosong!\n" << endl;
					}
					break;
				case 2:
					if (!IsEmpty(L2)){
						NBElmtlistAcc(L2, Acc, N);
						cout << "Jumlah elemen L2 di dalam N: " << N << endl;
						cout << endl;
					}
					else{
						cout << "List L2 kosong!\n" << endl;
					}
					break;
				default:
					cout << "Input tidak valid!\n" << endl;
					break;
			}
			system("pause");
			break;
		case 6:
			header();
			cout << "\n-- Cek Elemen di dalam Sebuah List --\n" << endl;
			cout << "Pilih List:\n" << endl;
			cout << "1. L1\n2. L2" << endl;
			cout << "\nInput Pilihan: "; cin >> pilihan;
			cout << endl;
			switch(pilihan){
				case 1:
					if (!IsEmpty(L1)){
						Search(L1, X);
						cout << endl << endl;
					}
					else{
						cout << "List L1 kosong!\n" << endl;
					}
					break;
				case 2:
					if (!IsEmpty(L2)){
						Search(L2, X);
						cout << endl << endl;
					}
					else{
						cout << "List L2 kosong!\n" << endl;
					}
					break;
				default:
					cout << "Input tidak valid!\n" << endl;
					break;
			}
			system("pause");
			break;
		case 7:
			header();
			cout << "\n-- Menampilkan Elemen Pertama List --\n" << endl;
			cout << "Pilih List:\n" << endl;
			cout << "1. L1\n2. L2" << endl;
			cout << "\nInput Pilihan: "; cin >> pilihan;
			cout << endl;
			switch(pilihan){
				case 1:
					if (!IsEmpty(L1)){
						cout << "Elemen Pertama L1: " << FirstElmt(L1) << endl;
						cout << endl;
					}
					else{
						cout << "List L1 kosong!\n" << endl;
					}
					break;
				case 2:
					if (!IsEmpty(L2)){
						cout << "Elemen pertama L2: " << FirstElmt(L2) << endl;
						cout << endl;
					}
					else{
						cout << "List L2 kosong!\n" << endl;
					}
					break;
				default:
					cout << "Input tidak valid!\n" << endl;
					break;
			}
			system("pause");
			break;
		case 8:
			header();
			cout << "\n-- Menampilkan Elemen Terakhir List --\n" << endl;
			cout << "Pilih List:\n" << endl;
			cout << "1. L1\n2. L2" << endl;
			cout << "\nInput Pilihan: "; cin >> pilihan;
			cout << endl;
			switch(pilihan){
				case 1:
					if (!IsEmpty(L1)){
						cout << "Elemen terakhir L1: " << LastElmt(L1) << endl;
						cout << endl;
					}
					else{
						cout << "List L1 kosong!\n" << endl;
					}
					break;
				case 2:
					if (!IsEmpty(L2)){
						cout << "Elemen terakhir L2: " << LastElmt(L2) << endl;
						cout << endl;
					}
					else{
						cout << "List L2 kosong!\n" << endl;
					}
					break;
				default:
					cout << "Input tidak valid!\n" << endl;
					break;
			}
			system("pause");
			break;
		case 9:
			header();
			cout << "\n-- Menampilkan Isi List tanpa Elemen Pertama --\n" << endl;
			cout << "Pilih List:\n" << endl;
			cout << "1. L1\n2. L2" << endl;
			cout << "\nInput Pilihan: "; cin >> pilihan;
			cout << endl;
			switch(pilihan){
				case 1:
					if (!IsEmpty(L1)){
						cout << "L1: " << Tail(L1) << endl;
						cout << endl;
					}
					else{
						cout << "List L1 kosong!\n" << endl;
					}
					break;
				case 2:
					if (!IsEmpty(L2)){
						cout << "L2: " << Tail(L2) << endl;
						cout << endl;
					}
					else{
						cout << "List L2 kosong!\n" << endl;
					}
					break;
				default:
					cout << "Input tidak valid!\n" << endl;
					break;
			}
			system("pause");
			break;
		case 10:
			header();
			cout << "\n-- Menampilkan Isi List tanpa Elemen Terakhir --\n" << endl;
			cout << "Pilih List:\n" << endl;
			cout << "1. L1\n2. L2" << endl;
			cout << "\nInput Pilihan: "; cin >> pilihan;
			cout << endl;
			switch(pilihan){
				case 1:
					if (!IsEmpty(L1)){
						cout << "L1: " << Head(L1) << endl;
						cout << endl;
					}
					else{
						cout << "List L1 kosong!\n" << endl;
					}
					break;
				case 2:
					if (!IsEmpty(L2)){
						cout << "L2: " << Head(L2) << endl;
						cout << endl;
					}
					else{
						cout << "List L2 kosong!\n" << endl;
					}
					break;
				default:
					cout << "Input tidak valid!\n" << endl;
					break;
			}
			system("pause");
			break;
		case 11:
			header();
			cout << "\n-- Menampilkan List dengan Tambahan Masukan Elemen sebagai Elemen Pertama --\n" << endl;
			cout << "Pilih List:\n" << endl;
			cout << "1. L1\n2. L2" << endl;
			cout << "\nInput Pilihan: "; cin >> pilihan;
			cout << endl;
			switch(pilihan){
				case 1:
					cout << "Input elemen yang ingin ditambahkan: "; cin >> E;
					cout << endl;
					Konso(L1, E);
					break;
				case 2:
					cout << "Input elemen yang ingin ditambahkan: "; cin >> E;
					cout << endl;
					Konso(L2, E);
					break;
				default:
					cout << "Input tidak valid!\n" << endl;
					break;
			}
			system("pause");
			break;
		case 12:
			header();
			cout << "\n-- Menampilkan List dengan Tambahan Masukan Elemen sebagai Elemen Terakhir --\n" << endl;
			cout << "Pilih List:\n" << endl;
			cout << "1. L1\n2. L2" << endl;
			cout << "\nInput Pilihan: "; cin >> pilihan;
			cout << endl;
			switch(pilihan){
				case 1:
					cout << "Input elemen yang ingin ditambahkan: "; cin >> E;
					cout << endl;
					Kons(L1, E);
					break;
				case 2:
					cout << "Input elemen yang ingin ditambahkan: "; cin >> E;
					cout << endl;
					Kons(L2, E);
					break;
				default:
					cout << "Input tidak valid!\n" << endl;
					break;
			}
			system("pause");
			break;
		case 13:
			header();
			cout << "\n-- Menampilkan Salinan List --\n" << endl;
			cout << "Pilih List:\n" << endl;
			cout << "1. L1\n2. L2" << endl;
			cout << "\nInput Pilihan: "; cin >> pilihan;
			cout << endl;
			switch(pilihan){
				case 1:
					if (!IsEmpty(L1)){
						Copy(L1);
						cout << endl << endl;
					}
					else{
						cout << "List L1 kosong!\n" << endl;
					}
					break;
				case 2:
					if (!IsEmpty(L2)){
						Copy(L2);
						cout << endl;
					}
					else{
						cout << "List L2 kosong!\n" << endl;
					}
					break;
				default:
					cout << "Input tidak valid!\n" << endl;
					break;
			}
			system("pause");
			break;
		case 14:
			header();
			cout << "\n-- Menampilkan Salinan List ke List Lt --\n" << endl;
			cout << "Pilih List:\n" << endl;
			cout << "1. L1\n2. L2" << endl;
			cout << "\nInput Pilihan: "; cin >> pilihan;
			cout << endl;
			switch(pilihan){
				case 1:
					if (!IsEmpty(L1)){
						MengCopy(L1, Lt);
						cout << "List L1 berhasil disalin ke Lt!" << endl;
						cout << endl;
					}
					else{
						cout << "List L1 kosong!\n" << endl;
					}
					break;
				case 2:
					if (!IsEmpty(L2)){
						MengCopy(L2, Lt);
						cout << "List L2 berhasil disalin ke Lt!" << endl;
						cout << endl;
					}
					else{
						cout << "List L2 kosong!\n" << endl;
					}
					break;
				default:
					cout << "Input tidak valid!\n" << endl;
					break;
			}
			system("pause");
			break;
		case 15:
			header();
			cout << "\n-- Menampilkan Salinan Hasil Konkatenasi Dua List Tipe 1 --\n" << endl;
			cout << "Pilih List:\n" << endl;
			cout << "1. L1 dengan L2\n2. L2 dengan L1" << endl;
			cout << "\nInput Pilihan: "; cin >> pilihan;
			cout << endl;
			switch(pilihan){
				case 1:
					Concat(L1, L2);
					cout << endl;
					break;
				case 2:
					Concat(L2, L1);
					cout << endl;
					break;
				default:
					cout << "Input tidak valid!\n" << endl;
					break;
			}
			system("pause");
			break;
		case 16:
			header();
			cout << "\n-- Menampilkan Salinan Hasil Konkatenasi Dua List Tipe 2 --\n" << endl;
			cout << "Pilih List:\n" << endl;
			cout << "1. L1 dengan L2\n2. L2 dengan L1" << endl;
			cout << "\nInput Pilihan: "; cin >> pilihan;
			cout << endl;
			switch(pilihan){
				case 1:
					Concat1(L1, L2);
					cout << endl;
					break;
				case 2:
					Concat1(L2, L1);
					cout << endl;
					break;
				default:
					cout << "Input tidak valid!\n" << endl;
					break;
			}
			system("pause");
			break;
		case 17:
			header();
			cout << "\n-- Menghasilkan Salinan Hasil Konkatenasi Dua List --\n" << endl;
			cout << "Pilih List:\n" << endl;
			cout << "1. L1 dengan L2\n2. L2 dengan L1" << endl;
			cout << "\nInput Pilihan: "; cin >> pilihan;
			cout << endl;
			switch(pilihan){
				case 1:
					Meng_Concat(L1, L2, Lt);
					cout << endl;
					break;
				case 2:
					Meng_Concat(L2, L1, Lt);
					cout << endl;
					break;
				default:
					cout << "Input tidak valid!\n" << endl;
					break;
			}
			system("pause");
			break;
		case 99:
			cout << "Terima kasih!" << endl;
			exit(0);
		default:
			cout << "Input tidak valid!\n" << endl;
			system("pause");
			break;
	}
	getchar();
	system("cls");
	goto menu;
	
	return 0;
}
