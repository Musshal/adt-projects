/* Program   : listrec.cpp */
/* Deskripsi : file BODY modul list rekursif */
/* NIM/Nama  : 24060118120042/Musthafa Kamal Faishal */
/* Tanggal   : 2/12/2020 */
/***********************************/

#include <iostream>
#include <cstdlib>
#include "listrec.hpp"
using namespace std;

/* menghasilkan true jika list kosong */
bool IsEmpty (List L)
{
	/* kamus lokal */
	
	/* algoritma */
	return (L == Nil);
}

/* Mengirimkan address hasil alokasi sebuah elemen */
/* Jika alokasi berhasil, maka address tidak nil, dan misalnya */
/* menghasilkan P, maka info(P)=X, Next(P)=Nil */
/* Jika alokasi gagal, mengirimkan Nil */
address Alokasi (infotype X)
{
	/* kamus lokal */
	address P;
	
	/* algoritma */
	P = (address) malloc(sizeof(ElmtList));
	if (P != Nil){
		info(P) = X;
		next(P) = Nil;
	}
	return (P);
}

/* I.S. P terdefinisi */
/* F.S. P dikembalikan ke sistem */
/* Melakukan dealokasi/pengembalian address P */
void Dealokasi (address P)
{
	/* kamus lokal */
	
	/* algoritma */
	free(P);
}

/* I.S. L terdefinisi */
/* F.S. Setiap elemen list diprint */
void Printlist (List L)
{
	/* kamus lokal */
	
	/* algoritma */
	if (!IsEmpty(L)){
		cout << info(L);
		Printlist(next(L));
	}
}

/* Mengirimkan banyaknya elemen list L, Nol jika L kosong */
int NBElmtlist (List L)
{
	/* kamus lokal */
	
	/* algoritma */
	if (IsEmpty(L)){
		return 0;
	}
	else{
		return (1+NBElmtlist(next(L)));
	}
}

/* I.S. L terdefinisi */
/* F.S. N berisi banyaknya elemen list */
void NBElmtlist1 (List L, int N)
{
	/* kamus lokal */
	int N1;
	
	/* algoritma */
	if (IsEmpty(L)){
		N = 0;
	}
	else{
		NBElmtlist1(next(L), N1);
		N = 1+N1;
	}
}

/* I.S. L terdefinisi */
/* F.S. N berisi banyaknya elemen list */
void NBElmtlistAcc (List L, int Acc, int N)
{
	/* kamus lokal */
	
	/* algoritma */
	if (IsEmpty(L)){
		N = Acc;
	}
	else{
		Acc++;
		NBElmtlistAcc(next(L), Acc, N);
	}
}

/* Mengirim true jika X adalah anggota list, false jika tidak */
bool Search (List L, infotype X)
{
	/* kamus lokal */
	
	/* algoritma */
	if (IsEmpty(L)){
		return (false);
	}
	else{
		if (info(L) == X){
			return (true);
		}
		else{
			return (Search(next(L), X));
		}
	}
}

/* Mengirimkan elemen pertama sebuah list L yang tidak kosong */
infotype FirstElmt (List L)
{
	/* kamus lokal */
	
	/* algoritma */
	return (info(L));
}

/* Mengirimkan elemen terakhir sebuah list L yang tidak kosong */
infotype LastElmt (List L)
{
	/* kamus lokal */
	address Last;
	
	/* algoritma */
	Last = L;
	if (next(Last) == Nil){
		return (info(Last));
	}
	else{
		return (LastElmt(next(Last)));
	}
}

/* Mengirimkan list L tanpa elemen pertamanya, mungkin yang dikirimkan adalah
sebuah list kosong */
List Tail (List L)
{
	/* kamus lokal */
	
	/* algoritma */
	return (next(L));
}

/* Mengirimkan List L tanpa elemen terakhirnya, mungkin yang dikirimkan adalah
sebuah list kosong */
List Head (List L)
{
	/* kamus lokal */
	
	/* algoritma */
	if (next(L) == Nil){
		return (Nil);
	}
	else{
		return Konso(Head(next(L)), FirstElmt(L));
	}
}

/* Mengirimkan list L dengan tambahan e sebagai elemen pertamanya */
/* Jika alokasi gagal, mengirimkan L */
List Konso (List L, infotype E)
{
	/* kamus lokal */
	address P;
	
	/* algoritma */
	P = Alokasi(E);
	if (P == Nil){
		return (L);
	}
	else{
		next(P) = L;
		return (P);
	}
}

/* Mengirimkan list L dengan tambahan e sebagai elemen terakhir */
/* Jika alokasi gagal, mengirimkan L */
List Kons (List L, infotype E)
{
	/* kamus lokal */
	address P, Last;
	
	/* algoritma */
	P = Alokasi(E);
	if (P == Nil){
		return (L);
	}
	else{
		if (IsEmpty(L)){
			return (L);
		}
		else{
			Last = L;
			while (next(Last) != Nil){
				Last = next(Last);
			}
			next(Last) = P;
			return (L);
		}
	}
}

/* Mengirimkan salinan list L */
/* Jika alokasi gagal, mengirimkan L */
List Copy (List L)
{
	/* kamus lokal */
	
	/* algoritma */
	if (IsEmpty(L)){
		return (L);
	}
	else{
		return (Konso(Copy(Tail(L)), FirstElmt(L)));
	}
}

/* I.S. Lin terdefinisi */
/* F.S. Lout berisi salinan dari Lin */
/* Proses : menyalin Lin ke Lout */
/* Jika alokasi gagal, Lout adalah ??? */
void MengCopy (List Lin, List Lout)
{
	/* kamus lokal */
	List Ltemp;
	
	/* algoritma */
	if (IsEmpty(Lin)){
		Lout = Lin;
	}
	else{
		Copy(Tail(Lin));
		Lout = Konso(Ltemp, FirstElmt(Lin));
	}
}

/* Mengirimkan salinan hasil konkatenasi list L1 dan L2 */
List Concat (List L1, List L2)
{
	/* kamus lokal */
	
	/* algoritma */
	if (IsEmpty(L1)){
		return (Copy(L2));
	}
	else{
		return (Konso(Concat(Tail(L1), L2), FirstElmt(L1)));
	}
}

/* Mengirimkan salinan hasil konkatenasi list L1 dan L2 */
List Concat1 (List L1, List L2)
{
	/* kamus lokal */
	
	/* algoritma */
	if (IsEmpty(L2)){
		return (L1);
	}
	else{
		return (Kons(Concat(L1, Head(L2)), LastElmt(L2)));
	}
}

/* I.S. L1, L2 terdefinisi */
/* F.S. LHsl adalah hasil melakukan konkatenasi L1 dan L2 dengan cara “disalin” */
/* Proses : Menghasilkan salinan hasil konkatenasi list L1 dan L2 */
void Meng_Concat (List L1, List L2, List LHsl)
{
	/* kamus lokal */
	
	/* algoritma */
	if (IsEmpty(L2)){
		LHsl = Copy(L2);
	}
	else{
		LHsl = Konso(Concat(L1, Tail(L2)), FirstElmt(L1));
	}
}
