/* Program   : mlistl.cpp */
/* Deskripsi : file DRIVER modul list berkait */
/* NIM/Nama  : 24060118120042/Musthafa Kamal Faishal */
/* Tanggal   : 7/11/2020 */
/***********************************/

#include <iostream>
#include <cstdlib>
#include "listl.hpp"
#include "boolean.hpp"
using namespace std;

void header(){
	system("cls");
	cout << "---------------------------------------------------" << endl;
    cout << "|              PRAKTIKUM MINGGU KE-7              |" << endl;
	cout << "---------------------------------------------------" << endl;
	cout << "|   	          TUGAS ADT LISTL                 |" << endl;
	cout << "|DOSEN PENGAMPU: Dr. ARIS PUJI WIDODO, S.Si., M.T.|" << endl;
	cout << "|  ASISTENSI MUH IKRAM NATSIR (17) & KHAIDIL (17) |" << endl;
	cout << "---------------------------------------------------" << endl;
	cout << "|  OLEH: MUSTHAFA KAMAL FAISHAL - 24060118120042  |" << endl;
	cout << "---------------------------------------------------" << endl;
}

int main()
{
	/* kamus */
	List L1, L2, L3, Lt;
	address P, Prec, Pdel;
	int pilihan, pilihan2, X, Y;

	/* program utama */
	system("cls");
	CreateList(&L1);
	CreateList(&L2);
	CreateList(&L3);
	CreateList(&Lt);
	menu:
	header();
	cout << "\nL1: ";
	Printinfo(L1);
	cout << "\nL2: ";
	Printinfo(L2);
	cout << "\nL3: ";
	Printinfo(L3);
	cout << "\nLt: ";
	Printinfo(Lt);
	cout << endl;
	cout << "\nMenu: \n" << endl;
	cout << "1. Membuat List Kosong\n2. Cek Isi List" << endl;
	cout << "3. Menampilkan isi List" << endl;
	cout << "4. Mencari Alamat Elemen Tertentu" << endl;
	cout << "5. Mencari Alamat Sebelum Elemen Tertentu" << endl;
	cout << "6. Menampilkan Jumlah Elemen di dalam List" << endl;
	cout << "7. Menampilkan Elemen Maksimum di dalam List" << endl;
	cout << "8. Menampilkan Elemen Minimum di dalam List" << endl;
	cout << "9. Menampilkan Rata-Rata Elemen di dalam List" << endl;
	cout << "10. Menambah Elemen di Depan" << endl;
	cout << "11. Menambah Elemen di Belakang" << endl;
	cout << "12. Menghapus Elemen di Depan" << endl;
	cout << "13. Menghapus Elemen di Belakang" << endl;
	cout << "14. Menghapus Alamat Sesuai dengan Elemen yang Ditentukan" << endl;
	cout << "15. Menghapus Semua Elemen List\n16. Invers List" << endl;
	cout << "17. Menghasilkan List Hasil Invers List Lain ke List Lt" << endl;
	cout << "18. Menyalin List tanpa Alokasi" << endl;
	cout << "19. Menyalin List dengan Alokasi" << endl;
	cout << "20. Menghasilkan List Hasil Penyalinan List Lain ke List Lt" << endl;
	cout << "21. Menyambung List tanpa Alokasi" << endl;
	cout << "22. Menyambung List dengan Alokasi" << endl;
	cout << "23. Memecah List\n99. Keluar" << endl;
	cout << "\nInput Pilihan: "; cin >> pilihan;
	cout << endl;
	switch(pilihan){
		case 1:
			header();
			cout << "\n-- Membuat List Kosong --\n" << endl;
			cout << "Pilih List:\n" << endl;
			cout << "1. L1\n2. L2\n3. L3\n4. Lt" << endl;
			cout << "\nInput Pilihan: "; cin >> pilihan;
			cout << endl;
			switch(pilihan){
				case 1:
					CreateList(&L1);
					cout << "List kosong L1 dibuat!\n" << endl;
					break;
				case 2:
					CreateList(&L2);
					cout << "List kosong L2 dibuat!\n" << endl;
					break;
				case 3:
					CreateList(&L3);
					cout << "List kosong L3 dibuat!\n" << endl;
					break;
				case 4:
					CreateList(&Lt);
					cout << "List kosong Lt dibuat!\n" << endl;
					break;
				default:
					cout << "Input tidak valid!\n" << endl;
					break;
			}
			system("pause");
			break;
		case 2:
			header();
			cout << "\n-- Cek Isi List --\n" << endl;
			cout << "Pilih List:\n" << endl;
			cout << "1. L1\n2. L2\n3. L3\n4. Lt" << endl;
			cout << "\nInput Pilihan: "; cin >> pilihan;
			cout << endl;
			switch(pilihan){
				case 1:
					if (ListEmpty(L1)){
						cout << "List L1 kosong!\n" << endl;
					}
					else{
						cout << "List L1 berisi\n" << endl;
					}
					break;
				case 2:
					if (ListEmpty(L2)){
						cout << "List L2 kosong!\n" << endl;
					}
					else{
						cout << "List L2 berisi\n" << endl;
					}
					break;
				case 3:
					if (ListEmpty(L3)){
						cout << "List L3 kosong!\n" << endl;
					}
					else{
						cout << "List L3 berisi\n" << endl;
					}
					break;
				case 4:
					if (ListEmpty(Lt)){
						cout << "List Lt kosong!\n" << endl;
					}
					else{
						cout << "List Lt berisi\n" << endl;
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
			cout << "\n-- Menampilkan Isi List --\n" << endl;
			cout << "Pilih List:\n" << endl;
			cout << "1. L1\n2. L2\n3. L3\n4. Lt" << endl;
			cout << "\nInput Pilihan: "; cin >> pilihan;
			cout << endl;
			switch(pilihan){
				case 1:
					if (!ListEmpty(L1)){
						cout << "L1: ";
						Printinfo(L1);
						cout << endl;
						cout << endl;
					}
					else{
						cout << "List L1 kosong!\n" << endl;
					}
					break;
				case 2:
					if (!ListEmpty(L2)){
						cout << "L2: ";
						Printinfo(L2);
						cout << endl;
						cout << endl;
					}
					else{
						cout << "List L2 kosong!\n" << endl;
					}
					break;
				case 3:
					if (!ListEmpty(L3)){
						cout << "L3: ";
						Printinfo(L3);
						cout << endl;
						cout << endl;
					}
					else{
						cout << "List L3 kosong!\n" << endl;
					}
					break;
				case 4:
					if (!ListEmpty(Lt)){
						cout << "Lt: ";
						Printinfo(Lt);
						cout << endl;
						cout << endl;
					}
					else{
						cout << "List Lt kosong!\n" << endl;
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
			cout << "\n-- Mencari Alamat Elemen Tertentu --\n" << endl;
			cout << "Pilih List:\n" << endl;
			cout << "1. L1\n2. L2\n3. L3\n4. Lt" << endl;
			cout << "\nInput Pilihan: "; cin >> pilihan;
			cout << endl;
			switch(pilihan){
				case 1:
					if (!ListEmpty(L1)){
						cout << "Input elemen untuk mencari alamat: ";
						cin >> X;
						P = Search(L1, X);
						cout << endl;
						cout << P << endl;
						cout << endl;
					}
					else{
						cout << "List L1 kosong!\n" << endl;
					}
					break;
				case 2:
					if (!ListEmpty(L2)){
						cout << "Input elemen untuk mencari alamat: ";
						cin >> X;
						P = Search(L2, X);
						cout << endl;
						cout << P << endl;
						cout << endl;
					}
					else{
						cout << "List L2 kosong!\n" << endl;
					}
					break;
				case 3:
					if (!ListEmpty(L3)){
						cout << "Input elemen untuk mencari alamat: ";
						cin >> X;
						P = Search(L3, X);
						cout << endl;
						cout << P << endl;
						cout << endl;
					}
					else{
						cout << "List L3 kosong!\n" << endl;
					}
					break;
				case 4:
					if (!ListEmpty(Lt)){
						cout << "Input elemen untuk mencari alamat: ";
						cin >> X;
						P = Search(Lt, X);
						cout << endl;
						cout << P << endl;
						cout << endl;
					}
					else{
						cout << "List Lt kosong!\n" << endl;
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
			cout << "\n-- Mencari Alamat Sebelum Elemen Tertentu --\n" << endl;
			cout << "Pilih List:\n" << endl;
			cout << "1. L1\n2. L2\n3. L3\n4. Lt" << endl;
			cout << "\nInput Pilihan: "; cin >> pilihan;
			cout << endl;
			switch(pilihan){
				case 1:
					if (!ListEmpty(L1)){
						cout << "Input elemen untuk mencari alamat sebelum: ";
						cin >> X;
						P = SearchPrec(L1, X);
						cout << endl;
						cout << P << endl;
						cout << endl;
					}
					else{
						cout << "List L1 kosong!\n" << endl;
					}
					break;
				case 2:
					if (!ListEmpty(L2)){
						cout << "Input elemen untuk mencari alamat sebelum: ";
						cin >> X;
						P = SearchPrec(L2, X);
						cout << endl;
						cout << P << endl;
						cout << endl;
					}
					else{
						cout << "List L2 kosong!\n" << endl;
					}
					break;
				case 3:
					if (!ListEmpty(L3)){
						cout << "Input elemen untuk mencari alamat sebelum: ";
						cin >> X;
						P = SearchPrec(L3, X);
						cout << endl;
						cout << P << endl;
						cout << endl;
					}
					else{
						cout << "List L3 kosong!\n" << endl;
					}
					break;
				case 4:
					if (!ListEmpty(Lt)){
						cout << "Input elemen untuk mencari alamat sebelum: ";
						cin >> X;
						P = SearchPrec(Lt, X);
						cout << endl;
						cout << P << endl;
						cout << endl;
					}
					else{
						cout << "List Lt kosong!\n" << endl;
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
			cout << "\n-- Menampilkan Jumlah Elemen di dalam List --\n" << endl;
			cout << "Pilih List:\n" << endl;
			cout << "1. L1\n2. L2\n3. L3\n4. Lt" << endl;
			cout << "\nInput Pilihan: "; cin >> pilihan;
			cout << endl;
			switch(pilihan){
				case 1:
					if (!ListEmpty(L1)){
						cout << "Jumlah elemen L1: " << NbElmt(L1) << endl;
						cout << endl;
					}
					else{
						cout << "List L1 kosong!\n" << endl;
					}
					break;
				case 2:
					if (!ListEmpty(L2)){
						cout << "Jumlah elemen L2: " << NbElmt(L2) << endl;
						cout << endl;
					}
					else{
						cout << "List L2 kosong!\n" << endl;
					}
					break;
				case 3:
					if (!ListEmpty(L3)){
						cout << "Jumlah elemen L3: " << NbElmt(L3) << endl;
						cout << endl;
					}
					else{
						cout << "List L3 kosong!\n" << endl;
					}
					break;
				case 4:
					if (!ListEmpty(Lt)){
						cout << "Jumlah elemen Lt: " << NbElmt(Lt) << endl;
						cout << endl;
					}
					else{
						cout << "List Lt kosong!\n" << endl;
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
			cout << "\n-- Menampilkan Elemen Maksimum di dalam List --\n" << endl;
			cout << "Pilih List:\n" << endl;
			cout << "1. L1\n2. L2\n3. L3\n4. Lt" << endl;
			cout << "\nInput Pilihan: "; cin >> pilihan;
			cout << endl;
			switch(pilihan){
				case 1:
					if (!ListEmpty(L1)){
						cout << "Elemen maksimum L1: " << Max(L1) << endl;
						cout << endl;
					}
					else{
						cout << "List L1 kosong!\n" << endl;
					}
					break;
				case 2:
					if (!ListEmpty(L2)){
						cout << "Elemen maksimum L2: " << Max(L2) << endl;
						cout << endl;
					}
					else{
						cout << "List L2 kosong!\n" << endl;
					}
					break;
				case 3:
					if (!ListEmpty(L3)){
						cout << "Elemen maksimum L3: " << Max(L3) << endl;
						cout << endl;
					}
					else{
						cout << "List L3 kosong!\n" << endl;
					}
				case 4:
					if (!ListEmpty(Lt)){
						cout << "Elemen maksimum Lt: " << Max(Lt) << endl;
						cout << endl;
					}
					else{
						cout << "List Lt kosong!\n" << endl;
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
			cout << "\n-- Menampilkan Elemen Minimum di dalam List --\n" << endl;
			cout << "Pilih List:\n" << endl;
			cout << "1. L1\n2. L2\n3. L3\n4. Lt" << endl;
			cout << "\nInput Pilihan: "; cin >> pilihan;
			cout << endl;
			switch(pilihan){
				case 1:
					if (!ListEmpty(L1)){
						cout << "Elemen minimum L1: " << Min(L1) << endl;
						cout << endl;
					}
					else{
						cout << "List L1 kosong!\n" << endl;
					}
					break;
				case 2:
					if (!ListEmpty(L2)){
						cout << "Elemen minimum L2: " << Min(L2) << endl;
						cout << endl;
					}
					else{
						cout << "List L1 kosong!\n" << endl;
					}
					break;
				case 3:
					if (!ListEmpty(L3)){
						cout << "Elemen minimum L3: " << Min(L3) << endl;
						cout << endl;
					}
					else{
						cout << "List L1 kosong!\n" << endl;
					}
					break;
				case 4:
					if (!ListEmpty(Lt)){
						cout << "Elemen minimum Lt: " << Min(Lt) << endl;
						cout << endl;
					}
					else{
						cout << "List Lt kosong!\n" << endl;
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
			cout << "\n-- Menampilkan Rata-Rata Elemen di dalam List --\n" << endl;
			cout << "Pilih List:\n" << endl;
			cout << "1. L1\n2. L2\n3. L3\n4. Lt" << endl;
			cout << "\nInput Pilihan: "; cin >> pilihan;
			cout << endl;
			switch(pilihan){
				case 1:
					if (!ListEmpty(L1)){
						cout << "Rata-rata elemen L1: " << Average(L1) << endl;
						cout << endl;
					}
					else{
						cout << "List L1 kosong!\n" << endl;
					}
					break;
				case 2:
					if (!ListEmpty(L2)){
						cout << "Rata-rata elemen L2: " << Average(L2) << endl;
						cout << endl;
					}
					else{
						cout << "List L2 kosong!\n" << endl;
					}
					break;
				case 3:
					if (!ListEmpty(L3)){
						cout << "Rata-rata elemen L3: " << Average(L3) << endl;
						cout << endl;
					}
					else{
						cout << "List L3 kosong!\n" << endl;
					}
					break;
				case 4:
					if (!ListEmpty(Lt)){
						cout << "Rata-rata elemen Lt: " << Average(Lt) << endl;
						cout << endl;
					}
					else{
						cout << "List Lt kosong!\n" << endl;
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
			cout << "\n-- Menambah Elemen di Depan --\n" << endl;
			cout << "Pilih List:\n" << endl;
			cout << "1. L1\n2. L2\n3. L3\n4. Lt" << endl;
			cout << "\nInput Pilihan: "; cin >> pilihan;
			cout << endl;
			switch(pilihan){
				case 1:
					cout << "Input elemen yang ingin ditambahkan: ";
					cin >> X;
					cout << endl;
					InsVFirst(&L1, X);
					break;
				case 2:
					cout << "Input elemen yang ingin ditambahkan: ";
					cin >> X;
					cout << endl;
					InsVFirst(&L2, X);
					break;
				case 3:
					cout << "Input elemen yang ingin ditambahkan: ";
					cin >> X;
					cout << endl;
					InsVFirst(&L3, X);
					break;
				case 4:
					cout << "Input elemen yang ingin ditambahkan: ";
					cin >> X;
					cout << endl;
					InsVFirst(&Lt, X);
					break;
				default:
					cout << "Input tidak valid!\n" << endl;
					break;
			}
			system("pause");
			break;
		case 11:
			header();
			cout << "\n-- Menambah Elemen di Depan --\n" << endl;
			cout << "Pilih List:\n" << endl;
			cout << "1. L1\n2. L2\n3. L3\n4. Lt" << endl;
			cout << "\nInput Pilihan: "; cin >> pilihan;
			cout << endl;
			switch(pilihan){
				case 1:
					cout << "Input elemen yang ingin ditambahkan: ";
					cin >> X;
					cout << endl;
					InsVLast(&L1, X);
					break;
				case 2:
					cout << "Input elemen yang ingin ditambahkan: ";
					cin >> X;
					cout << endl;
					InsVLast(&L2, X);
					break;
				case 3:
					cout << "Input elemen yang ingin ditambahkan: ";
					cin >> X;
					cout << endl;
					InsVLast(&L3, X);
					break;
				case 4:
					cout << "Input elemen yang ingin ditambahkan: ";
					cin >> X;
					cout << endl;
					InsVLast(&Lt, X);
					break;
				default:
					cout << "Input tidak valid!\n" << endl;
					break;
			}
			system("pause");
			break;
		case 12:
			header();
			cout << "\n-- Menghapus Elemen di Depan --\n" << endl;
			cout << "Pilih List:\n" << endl;
			cout << "1. L1\n2. L2\n3. L3\n4. Lt" << endl;
			cout << "\nInput Pilihan: "; cin >> pilihan;
			cout << endl;
			switch(pilihan){
				case 1:
					if (!ListEmpty(L1)){
						DelVFirst(&L1, &Y);
						cout << "Elemen di depan berhasil dihapus!\n" << endl;
					}
					else{
						cout << "List L1 kosong!\n" << endl;
					}
					break;
				case 2:
					if (!ListEmpty(L2)){
						DelVFirst(&L2, &Y);
						cout << "Elemen di depan berhasil dihapus!\n" << endl;
					}
					else{
						cout << "List L2 kosong!\n" << endl;
					}
					break;
				case 3:
					if (!ListEmpty(L3)){
						DelVFirst(&L3, &Y);
						cout << "Elemen di depan berhasil dihapus!\n" << endl;
					}
					else{
						cout << "List L3 kosong!\n" << endl;
					}
					break;
				case 4:
					if (!ListEmpty(Lt)){
						DelVFirst(&Lt, &Y);
						cout << "Elemen di depan berhasil dihapus!\n" << endl;
					}
					else{
						cout << "List Lt kosong!\n" << endl;
					}
					break;
				default:
					cout << "Input tidak valid!\n" << endl;
					break;
			}
			system("pause");
			break;
		case 13:
			header();
			cout << "\n-- Menghapus Elemen di Belakang --\n" << endl;
			cout << "Pilih List:\n" << endl;
			cout << "1. L1\n2. L2\n3. L3\n4. Lt" << endl;
			cout << "\nInput Pilihan: "; cin >> pilihan;
			cout << endl;
			switch(pilihan){
				case 1:
					if (!ListEmpty(L1)){
						DelVLast(&L1, &Y);
						cout << "Elemen di belakang berhasil dihapus!\n" << endl;
					}
					else{
						cout << "List L1 kosong!\n" << endl;
					}
					break;
				case 2:
					if (!ListEmpty(L2)){
						DelVLast(&L2, &Y);
						cout << "Elemen di belakang berhasil dihapus!\n" << endl;
					}
					else{
						cout << "List L2 kosong!\n" << endl;
					}
					break;
				case 3:
					if (!ListEmpty(L3)){
						DelVLast(&L3, &Y);
						cout << "Elemen di belakang berhasil dihapus!\n" << endl;
					}
					else{
						cout << "List L3 kosong!\n" << endl;
					}
					break;
				case 4:
					if (!ListEmpty(Lt)){
						DelVLast(&Lt, &Y);
						cout << "Elemen di belakang berhasil dihapus!\n" << endl;
					}
					else{
						cout << "List Lt kosong!\n" << endl;
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
			cout << "\n-- Menghapus Alamat Sesuai dengan Elemen yang Ditentukan --\n" << endl;
			cout << "Pilih List:\n" << endl;
			cout << "1. L1\n2. L2\n3. L3\n4. Lt" << endl;
			cout << "\nInput Pilihan: "; cin >> pilihan;
			cout << endl;
			switch(pilihan){
				case 1:
					if (!ListEmpty(L1)){
						cout << "Input elemen untuk menghapus address: ";
						cin >> Y;
						if (Search(L1, Y)){
							DelP(&L1, Y);
							cout << "\nElemen berhasil dihapus!" << endl;	
						}
						else{
							cout << "\nElemen tidak ditemukan!" << endl;
						}
					}
					else{
						cout << "List L1 kosong!" << endl;
					}
					cout << endl;
					break;
				case 2:
					if (!ListEmpty(L2)){
						cout << "Input elemen untuk menghapus address: ";
						cin >> Y;
						if (Search(L2, Y)){
							DelP(&L2, Y);
							cout << "\nElemen berhasil dihapus!" << endl;	
						}
						else{
							cout << "\nElemen tidak ditemukan!" << endl;
						}
					}
					else{
						cout << "List L2 kosong!" << endl;
					}
					cout << endl;
					break;
				case 3:
					if (!ListEmpty(L3)){
						cout << "Input elemen untuk menghapus address: ";
						cin >> Y;
						if (Search(L3, Y)){
							DelP(&L3, Y);
							cout << "\nElemen berhasil dihapus!" << endl;	
						}
						else{
							cout << "\nElemen tidak ditemukan!" << endl;
						}
					}
					else{
						cout << "List L3 kosong!" << endl;
					}
					cout << endl;
					break;
				case 4:
					if (!ListEmpty(Lt)){
						cout << "Input elemen untuk menghapus address: ";
						cin >> Y;
						if (Search(Lt, Y)){
							DelP(&Lt, Y);
							cout << "\nElemen berhasil dihapus!" << endl;	
						}
						else{
							cout << "\nElemen tidak ditemukan!" << endl;
						}
					}
					else{
						cout << "List Lt kosong!" << endl;
					}
					cout << endl;
					break;
				default:
					cout << "Input tidak valid!\n" << endl;
					break;
			}
			system("pause");
			break;
		case 15:
			header();
			cout << "\n-- Menghapus Semua Elemen List --\n" << endl;
			cout << "Pilih List:\n" << endl;
			cout << "1. L1\n2. L2\n3. L3\n4. Lt" << endl;
			cout << "\nInput Pilihan: "; cin >> pilihan;
			cout << endl;
			switch(pilihan){
				case 1:
					if (!ListEmpty(L1)){
						DelAll(&L1);
						cout << "Semua elemen L1 berhasil dihapus!" << endl;
					}
					else{
						cout << "List L1 kosong!" << endl;
					}
					cout << endl;
					break;
				case 2:
					if (!ListEmpty(L2)){
						DelAll(&L2);
						cout << "Semua elemen L2 berhasil dihapus!" << endl;
					}
					else{
						cout << "List L2 kosong!" << endl;
					}
					cout << endl;
					break;
				case 3:
					if (!ListEmpty(L3)){
						DelAll(&L3);
						cout << "Semua elemen L3 berhasil dihapus!" << endl;
					}
					else{
						cout << "List L3 kosong!" << endl;
					}
					cout << endl;
					break;
				case 4:
					if (!ListEmpty(Lt)){
						DelAll(&Lt);
						cout << "Semua elemen Lt berhasil dihapus!" << endl;
					}
					else{
						cout << "List Lt kosong!" << endl;
					}
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
			cout << "\n-- Invers List --\n" << endl;
			cout << "Pilih List:\n" << endl;
			cout << "1. L1\n2. L2\n3. L3\n4. Lt" << endl;
			cout << "\nInput Pilihan: "; cin >> pilihan;
			cout << endl;
			switch(pilihan){
				case 1:
					if (!ListEmpty(L1)){
						InversList(&L1);
						cout << "Semua elemen L1 berhasil di-invers!" << endl;
					}
					else{
						cout << "List L1 kosong!" << endl;
					}
					cout << endl;
					break;
				case 2:
					if (!ListEmpty(L2)){
						InversList(&L2);
						cout << "Semua elemen L2 berhasil di-invers!" << endl;
					}
					else{
						cout << "List L2 kosong!" << endl;
					}
					cout << endl;
					break;
				case 3:
					if (!ListEmpty(L3)){
						InversList(&L3);
						cout << "Semua elemen L3 berhasil di-invers!" << endl;
					}
					else{
						cout << "List L3 kosong!" << endl;
					}
					cout << endl;
					break;
				case 4:
					if (!ListEmpty(Lt)){
						InversList(&Lt);
						cout << "Semua elemen Lt berhasil di-invers!" << endl;
					}
					else{
						cout << "List Lt kosong!" << endl;
					}
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
			cout << "\n-- Menghasilkan List Hasil Invers List Lain ke List Lt --\n" << endl;
			cout << "Pilih List:\n" << endl;
			cout << "1. L1\n2. L2\n3. L3" << endl;
			cout << "\nInput Pilihan: "; cin >> pilihan;
			cout << endl;
			switch(pilihan){
				case 1:
					if (!ListEmpty(L1)){
						Lt = FInversList(L1);
						cout << "Lt: ";
						Printinfo(Lt);
						cout << endl;
					}
					else{
						cout << "List L1 kosong!" << endl;
					}
					cout << endl;
					break;
				case 2:
					if (!ListEmpty(L2)){
						Lt = FInversList(L2);
						cout << "Lt: ";
						Printinfo(Lt);
					}
					else{
						cout << "List L2 kosong!" << endl;
					}
					cout << endl;
					break;
				case 3:
					if (!ListEmpty(L3)){
						Lt = FInversList(L3);
						cout << "Lt: ";
						Printinfo(Lt);
					}
					else{
						cout << "List L3 kosong!" << endl;
					}
					cout << endl;
					break;
				default:
					cout << "Input tidak valid!\n" << endl;
					break;
			}
			system("pause");
			break;
		case 18:
			header();
			cout << "\n-- Menyalin List dengan Alokasi ke List Lt --\n" << endl;
			cout << "Pilih List:\n" << endl;
			cout << "1. L1\n2. L2\n3. L3" << endl;
			cout << "\nInput Pilihan: "; cin >> pilihan;
			cout << endl;
			switch(pilihan){
				case 1:
					if (!ListEmpty(L1)){
						CopyList(&L1, &Lt);
						cout << "List berhasil disalin!" << endl;
					}
					else{
						cout << "List L1 kosong!" << endl;
					}
					cout << endl;
					break;
				case 2:
					if (!ListEmpty(L2)){
						CopyList(&L2, &Lt);
						cout << "List berhasil disalin!" << endl;
					}
					else{
						cout << "List L2 kosong!" << endl;
					}
					cout << endl;
					break;
				case 3:
					if (!ListEmpty(L3)){
						CopyList(&L3, &Lt);
						cout << "List berhasil disalin!" << endl;
					}
					else{
						cout << "List L3 kosong!" << endl;
					}
					cout << endl;
					break;
				default:
					cout << "Input tidak valid!\n" << endl;
					break;
			}
			system("pause");
			break;
		case 19:
			header();
			cout << "\n-- Menyalin List dengan Alokasi ke List Lt --\n" << endl;
			cout << "Pilih List:\n" << endl;
			cout << "1. L1\n2. L2\n3. L3" << endl;
			cout << "\nInput Pilihan: "; cin >> pilihan;
			cout << endl;
			switch(pilihan){
				case 1:
					if (!ListEmpty(L1)){
						CpAlokList(L1, &Lt);
						cout << "List berhasil disalin!" << endl;
					}
					else{
						cout << "List L1 kosong!" << endl;
					}
					cout << endl;
					break;
				case 2:
					if (!ListEmpty(L2)){
						CpAlokList(L2, &Lt);
						cout << "List berhasil disalin!" << endl;
					}
					else{
						cout << "List L2 kosong!" << endl;
					}
					cout << endl;
					break;
				case 3:
					if (!ListEmpty(L3)){
						CpAlokList(L3, &Lt);
						cout << "List berhasil disalin!" << endl;
					}
					else{
						cout << "List L3 kosong!" << endl;
					}
					cout << endl;
					break;
				default:
					cout << "Input tidak valid!\n" << endl;
					break;
			}
			system("pause");
			break;
		case 20:
			header();
			cout << "\n-- Menghasilkan List Lt Hasil Penyalinan List Lain --\n" << endl;
			cout << "Pilih List:\n" << endl;
			cout << "1. L1\n2. L2\n3. L3" << endl;
			cout << "\nInput Pilihan: "; cin >> pilihan;
			cout << endl;
			switch(pilihan){
				case 1:
					if (!ListEmpty(L1)){
						Lt = FCopyList(L1);
						cout << "List berhasil disalin!" << endl;
					}
					else{
						cout << "List L1 kosong!" << endl;
					}
					cout << endl;
					break;
				case 2:
					if (!ListEmpty(L2)){
						Lt = FCopyList(L2);
						cout << "List berhasil disalin!" << endl;
					}
					else{
						cout << "List L2 kosong!" << endl;
					}
					cout << endl;
					break;
				case 3:
					if (!ListEmpty(L3)){
						Lt = FCopyList(L3);
						cout << "List berhasil disalin!" << endl;
					}
					else{
						cout << "List L3 kosong!" << endl;
					}
					cout << endl;
					break;
				default:
					cout << "Input tidak valid!\n" << endl;
					break;
			}
			system("pause");
			break;
		case 21:
			header();
			cout << "\n-- Menyambung List tanpa Alokasi --\n" << endl;
			cout << "Pilih List Pertama:\n" << endl;
			cout << "1. L1\n2. L2\n3. L3" << endl;
			cout << "\nInput Pilihan: "; cin >> pilihan;
			cout << endl;
			switch(pilihan){
				case 1:
					if (!ListEmpty(L1)){
						header();
						cout << "\nPilih List Kedua:\n" << endl;
						cout << "1. L2\n2. L3" << endl;
						cout << "\nInput Pilihan: "; cin >> pilihan2;
						switch(pilihan2){
							case 1:
								if (!ListEmpty(L2)){
									Konkat1(&L1,&L2,&Lt);
									cout << "\nList berhasil disambung!\n" << endl;
									break;
								}
								else{
									cout << "\nList L2 kosong!\n" << endl;
								}
								break;
							case 2:
								if (!ListEmpty(L3)){
									Konkat1(&L1,&L3,&Lt);
									cout << "\nList berhasil disambung!\n" << endl;
									break;
								}
								else{
									cout << "\nList L3 kosong!\n" << endl;
								}
								break;
						}
					}
					else{
						cout << "List L1 kosong!\n" << endl;
					}
					break;
				case 2:
					if (!ListEmpty(L2)){
						header();
						cout << "\nPilih List Kedua:\n" << endl;
						cout << "1. L1\n2. L3" << endl;
						cout << "\nInput Pilihan: "; cin >> pilihan2;
						switch(pilihan2){
							case 1:
								if (!ListEmpty(L1)){
									Konkat1(&L2,&L1,&Lt);
									cout << "\nList berhasil disambung!\n" << endl;
									break;
								}
								else{
									cout << "\nList L1 kosong!\n" << endl;
								}
								break;
							case 2:
								if (!ListEmpty(L3)){
									Konkat1(&L2,&L3,&Lt);
									cout << "\nList berhasil disambung!\n" << endl;
									break;
								}
								else{
									cout << "\nList L3 kosong!\n" << endl;
								}
								break;
						}
					}
					else{
						cout << "List L2 kosong!\n" << endl;
					}
					break;
				case 3:
					if(!ListEmpty(L3)){
						header();
						cout << "\nPilih List Kedua:\n" << endl;
						cout << "1. L1\n2. L2" << endl;
						cout << "\nInput Pilihan: "; cin >> pilihan2;
						cout << "Pilih List Kedua:\n" << endl;
						cout << "1. L1\n2. L3" << endl;
						cout << "\nInput Pilihan: "; cin >> pilihan2;
						switch(pilihan2){
							case 1:
								if (!ListEmpty(L1)){
									Konkat1(&L3,&L1,&Lt);
									cout << "\nList berhasil disambung!\n" << endl;
									break;
								}
								else{
									cout << "\nList L1 kosong!\n" << endl;
								}
								break;
							case 2:
								if (!ListEmpty(L3)){
									Konkat1(&L3,&L2,&Lt);
									cout << "\nList berhasil disambung!\n" << endl;
									break;
								}
								else{
									cout << "\nList L2 kosong!\n" << endl;
								}
								break;
						}
					}
					else{
						cout << "List L3 kosong!\n" << endl;
					}
					break;
			}
			system("pause");
			break;
		case 22:
			header();
			cout << "\n-- Menyambung List dengan Alokasi --\n" << endl;
			cout << "Pilih List Pertama:\n" << endl;
			cout << "1. L1\n2. L2\n3. L3" << endl;
			cout << "\nInput Pilihan: "; cin >> pilihan;
			cout << endl;
			switch(pilihan){
				case 1:
					if (!ListEmpty(L1)){
						header();
						cout << "\n-- Menyambung List dengan Alokasi --\n" << endl;
						cout << "Pilih List Kedua:\n" << endl;
						cout << "1. L2\n2. L3" << endl;
						cout << "\nInput Pilihan: "; cin >> pilihan2;
						switch(pilihan2){
							case 1:
								if (!ListEmpty(L2)){
									Konkat(L1,L2,&Lt);
									cout << "List berhasil disambung!\n" << endl;
									break;
								}
								else{
									cout << "\nList L2 kosong!\n" << endl;
								}
								break;
							case 2:
								if (!ListEmpty(L3)){
									Konkat(L1, L3, &Lt);
									cout << "List berhasil disambung!\n" << endl;
									break;
								}
								else{
									cout << "\nList L3 kosong!\n" << endl;
								}
								break;
						}
					}
					else{
						cout << "List L1 kosong!\n" << endl;
					}
					break;
				case 2:
					if (!ListEmpty(L2)){
						header();
						cout << "\n-- Menyambung List dengan Alokasi --\n" << endl;
						cout << "Pilih List Kedua:\n" << endl;
						cout << "1. L1\n2. L3" << endl;
						cout << "\nInput Pilihan: "; cin >> pilihan2;
						switch(pilihan2){
							case 1:
								if (!ListEmpty(L1)){
									Konkat(L2, L1, &Lt);
									cout << "List berhasil disambung!\n" << endl;
									break;
								}
								else{
									cout << "\nList L1 kosong!\n" << endl;
								}
								break;
							case 2:
								if (!ListEmpty(L3)){
									Konkat(L2, L3, &Lt);
									cout << "List berhasil disambung!\n" << endl;
									break;
								}
								else{
									cout << "\nList L3 kosong!\n" << endl;
								}
								break;
						}
					}
					else{
						cout << "List L2 kosong!\n" << endl;
					}
					break;
				case 3:
					if(!ListEmpty(L3)){
						header();
						cout << "\n-- Menyambung List dengan Alokasi --\n" << endl;
						cout << "Pilih List Kedua:\n" << endl;
						cout << "1. L1\n2. L2" << endl;
						cout << "\nInput Pilihan: "; cin >> pilihan2;
						cout << "Pilih List Kedua:\n" << endl;
						cout << "1. L1\n2. L3" << endl;
						cout << "\nInput Pilihan: "; cin >> pilihan2;
						switch(pilihan2){
							case 1:
								if (!ListEmpty(L1)){
									Konkat(L3, L1, &Lt);
									cout << "List berhasil disambung!\n" << endl;
									break;
								}
								else{
									cout << "\nList L1 kosong!\n" << endl;
								}
								break;
							case 2:
								if (!ListEmpty(L3)){
									Konkat(L3, L2, &Lt);
									cout << "List berhasil disambung!\n" << endl;
									break;
								}
								else{
									cout << "\nList L2 kosong!\n" << endl;
								}
								break;
						}
					}
					else{
						cout << "List L3 kosong!\n" << endl;
					}
					break;
			}
			system("pause");
			break;
		case 23:
			header();
			cout << "\n-- Memecah List --\n" << endl;
			cout << "Pilih List Pertama:\n" << endl;
			cout << "1. L1\n2. L2\n3. L3" << endl;
			cout << "\nInput Pilihan: "; cin >> pilihan;
			cout << endl;
			if (!ListEmpty(Lt)){
				switch(pilihan){
				case 1:
					header();
					cout << "\n-- Memecah List --\n" << endl;
					cout << "Pilih List Kedua:\n" << endl;
					cout << "1. L2\n2. L3" << endl;
					cout << "\nInput Pilihan: "; cin >> pilihan2;
					switch(pilihan2){
						case 1:
							PecahList(&L1, &L2, Lt);
							cout << "\nList berhasil dipecah!\n" << endl;
							break;
						case 2:
							PecahList(&L1, &L3, Lt);
							cout << "\nList berhasil dipecah!\n" << endl;
							break;
						}
						break;
				case 2:
					header();
					cout << "\n-- Memecah List --\n" << endl;
					cout << "Pilih List Kedua:\n" << endl;
					cout << "1. L1\n2. L3" << endl;
					cout << "\nInput Pilihan: "; cin >> pilihan2;
					switch(pilihan2){
						case 1:
							PecahList(&L2, &L1, Lt);
							cout << "\nList berhasil dipecah!\n" << endl;
							break;
						case 2:
							PecahList(&L2, &L3, Lt);
							cout << "\nList berhasil dipecah!\n" << endl;
							break;
						}
						break;
				case 3:
					header();
					cout << "\n-- Memecah List --\n" << endl;
					cout << "Pilih List Kedua:\n" << endl;
					cout << "1. L1\n2. L3" << endl;
					cout << "\nInput Pilihan: "; cin >> pilihan2;
					switch(pilihan2){
						case 1:
							PecahList(&L3, &L1, Lt);
							cout << "\nList berhasil dipecah!\n" << endl;
							break;
						case 2:
							PecahList(&L3, &L2, Lt);
							cout << "\nList berhasil dipecah!\n" << endl;
							break;
						}
						break;
				}
				system("pause");
				break;
			}
			else{
				cout << "List Lt kosong!\n" << endl;
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
