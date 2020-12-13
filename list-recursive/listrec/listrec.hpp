/* File     : listrec.hpp */
/* Deskripsi: contoh ADT list rekursif dengan representasi fisik pointer */
/*            Representasi address dengan pointer */
/*            infotype adalah integer */
/* NIM/Nama : 24060118120042/Musthafa Kamal Faishal */
/* Tanggal  : 2/12/2020 */

#ifndef listrec_H
#define listrec_H

/* konsotanta */
#define Nil NULL

/* selektor */
#define info(P) (P)->info
#define next(P) (P)->next

/* deklarasi tipe */
typedef int infotype;
typedef struct tElmtlist *address;
typedef struct tElmtlist{	infotype info;
							address next;	} ElmtList;
							
/* Definisi list : */
/* List kosong : First(L) = Nil */
/* Setiap elemen dengan address P dapat diacu info(P), Next(P) */
/* Elemen terakhir list : jika addressnya Last, maka Next(Last)=Nil*/
typedef address List;

/* PROTOTYPE */
/****************** TEST LIST KOSONG ******************/
bool IsEmpty (List L) ;
/* menghasilkan true jika list kosong */

/****************** Manajemen Memori ******************/
address Alokasi (infotype X);
/* Mengirimkan address hasil alokasi sebuah elemen */
/* Jika alokasi berhasil, maka address tidak nil, dan misalnya */
/* menghasilkan P, maka info(P)=X, Next(P)=Nil */
/* Jika alokasi gagal, mengirimkan Nil */
void Dealokasi (address P);
/* I.S. P terdefinisi */
/* F.S. P dikembalikan ke sistem */
/* Melakukan dealokasi/pengembalian address P */

/****************** PROSES SEMUA ELEMEN LIST ******************/
/* I.S. L terdefinisi */
/* F.S. Setiap elemen list diprint */
void Printlist (List L);
/* Mengirimkan banyaknya elemen list L, Nol jika L kosong */
int NBElmtlist (List L);
/* I.S. L terdefinisi */
/* F.S. N berisi banyaknya elemen list */
void NBElmtlist1 (List L, int N);
/* I.S. L terdefinisi */
/* F.S. N berisi banyaknya elemen list */
void NBElmtlistAcc (List L, int Acc, int N);

/****************** PENCARIAN SEBUAH ELEMEN LIST ******************/
/* Mengirim true jika X adalah anggota list, false jika tidak */
bool Search (List L, infotype X);

/*** Fungsi Dasar untuk Pemrosesan List secara Rekursif ***/
/*** Selektor ***/
/* Mengirimkan elemen pertama sebuah list L yang tidak kosong */
infotype FirstElmt (List L);
/* Mengirimkan elemen terakhir sebuah list L yang tidak kosong */
infotype LastElmt (List L);
/* Mengirimkan list L tanpa elemen pertamanya, mungkin yang dikirimkan adalah
sebuah list kosong */
List Tail (List L);
/* Mengirimkan List L tanpa elemen terakhirnya, mungkin yang dikirimkan adalah
sebuah list kosong */
List Head (List L);

/*** konstruktor ***/
/* Mengirimkan list L dengan tambahan e sebagai elemen pertamanya */
/* Jika alokasi gagal, mengirimkan L */
List Konso (List L, infotype E);
/* Mengirimkan list L dengan tambahan e sebagai elemen terakhir */
/* Jika alokasi gagal, mengirimkan L */
List Kons (List L, infotype E);

/****************** PROSES TERHADAP LIST ******************/
/* Mengirimkan salinan list L */
/* Jika alokasi gagal, mengirimkan L */
List Copy (List L);
/* I.S. Lin terdefinisi */
/* F.S. Lout berisi salinan dari Lin */
/* Proses : menyalin Lin ke Lout */
/* Jika alokasi gagal, Lout adalah ??? */
void MengCopy (List Lin, List Lout);
/* Mengirimkan salinan hasil konkatenasi list L1 dan L2 */
List Concat (List L1, List L2);
/* Mengirimkan salinan hasil konkatenasi list L1 dan L2 */
List Concat1 (List L1, List L2);
/* I.S. L1, L2 terdefinisi */
/* F.S. LHsl adalah hasil melakukan konkatenasi L1 dan L2 dengan cara “disalin” */
/* Proses : Menghasilkan salinan hasil konkatenasi list L1 dan L2 */
void Meng_Concat (List L1, List L2, List LHsl);

#endif
