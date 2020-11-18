/* Program   : listl.cpp */
/* Deskripsi : file BODY modul list berkait */
/* NIM/Nama  : 24060118120042/Musthafa Kamal Faishal */
/* Tanggal   : 7/11/2020 */
/***********************************/

#include <iostream>
#include <cstdlib>
#include "listl.hpp"
using namespace std;

bool ListEmpty (List L)
{
	/* kamus lokal */

	/* algoritma */
	return (First(L) == NIL);
}

void CreateList (List *L)
{
	/* kamus lokal */

	/* algoritma */
	First(*L) = NIL;
}

address Alokasi (infotype X)
{
	/* kamus lokal */
	address P;

	/* algoritma */
	P = (address) malloc(sizeof(ElmtList));
	if (P != NIL){
		info(P) = X;
		next(P) = NIL;
		return P;
	}
	else{
		return NIL;
	}
}

void Dealokasi (address P)
{
	/* kamus lokal */

	/* algoritma */
	free(P);
}

address Search (List L, infotype X)
{
    /* kamus lokal */
    address P;
    bool Found;

    /* algoritma */
    P = First(L);
    Found = false;
    while ((P != NIL) && (!Found)){
      if (X == info(P)) {
        Found = true;
      }
      else{
        P = next(P);
      }
    }
    return (P);
}

bool FSearch (List L, address P)
{
	/* kamus lokal */
	address Pcheck;
	bool Found;
	
	/* algoritma */
	Pcheck = First(L);
	Found = false;
	while ((Pcheck != NIL)&&(!Found)){
		if (Pcheck == P){
			Found = true;
		}
		else{
			Pcheck = next(Pcheck);
		}
	}
	return (Found);
}

address SearchPrec (List L, infotype X)
{
    /* kamus lokal */
    address P;
    bool Found;

    /* algoritma */
    P = First(L);
    Found = false;
    if (P == NIL){
      return NIL;
    }
    else{
    	while ((next(P) != NIL) && (!Found)){
    		if (X == info(next(P))) {
    			Found = true;
    		}
    		else{
    			P = next(P);
    		}
    	}
    }
    if (next(P) == NIL) {
    	return NIL;
    }
    else{
    	return P;
    }
}

void InsVFirst (List *L, infotype X)
{
	/* kamus lokal */
	address P;

	/* algoritma */
	P = Alokasi(X);
	if (P != NIL){
		InsertFirst(L, P);
	}
}

void InsVLast (List *L, infotype X)
{
	/* kamus lokal */
	address P;

	/* algoritma */
	P = Alokasi(X);
	if (P != NIL){
		InsertLast(L, P);
	}
}

void DelVFirst (List *L, infotype *X)
{
	/* kamus lokal */
	address P;

	/* algoritma */
	P = First(*L);
	*X = info(P);
	First(*L) = next(First(*L));
	next(P) = NIL;
	Dealokasi(P);
}

void DelVLast (List *L, infotype *X)
{
	/* kamus lokal */
	address Last, PrecLast;

	/* algoritma */
	Last = First(*L);
	PrecLast = NIL;
	while (next(Last) != NIL){
		PrecLast = Last;
		Last = next(Last);
	}
	(*X) = info(Last);
	if (PrecLast == NIL){
		First(*L) = NIL;
	}
	else{
		next(PrecLast) = NIL;
	}
}

void InsertFirst (List *L, address P)
{
	/* kamus lokal */

	/* algoritma */
	next(P) = First(*L);
	First(*L) = P;
}

void InsertAfter (List *L, address P, address Prec)
{
	/* kamus lokal */
	
	/* algoritma */
	next(P) = next(Prec);
	next(Prec) = P;
}

void InsertLast (List *L, address P)
{
	/* kamus lokal */
	address Last;
	
	/* algoritma */
	Last = First(*L);
	if (ListEmpty(*L)){
		InsertFirst(L, P);
	}
	else{
		while (next(Last) != NIL){
			Last = next(Last);
		}
		InsertAfter(L, P, Last);
	}
}

void DelFirst (List *L, address P)
{
	/* kamus lokal */
	
	/* algoritma */
	P = First(*L);
	First(*L) = next(First(*L));
}

void DelP (List *L, infotype X)
{
	/* kamus lokal */
	address P, Prec;

	/* algoritma */
	P = Search(*L,X);
	if (P == First(*L)){
    	DelFirst(L, P);
  	}
  	else{
    	Prec = SearchPrec(*L, X);
    	DelAfter(L, P, Prec);
  	}
}

void DelLast (List *L, address P)
{
	/* kamus lokal */
	address Last, PrecLast;
	
	/* algoritma */
	Last = First(*L);
	PrecLast = NIL;
	while (next(Last) != NIL){
		PrecLast = Last;
		Last = next(Last);
	}
	P = Last;
	if (PrecLast = NIL){
		First(*L) = NIL;
	}
	else{
		next(PrecLast) = NIL;
	}
}

void DelAfter (List *L, address Pdel, address Prec)
{
	/* kamus lokal */
	
	/* algoritma */
	Pdel = next(Prec);
	next(Prec) = next(next(Prec));
	next(Pdel) = NIL;
}

void Printinfo (List L)
{
	/* kamus lokal */
	address P;
	
	/* algoritma */
	P = First(L);
	if (P != NIL){
		while (next(P) != NIL){
			cout << info(P) << ", ";
			P = next(P);
		}
		cout << info(P);
	}
}

int NbElmt(List L)
{
	/* kamus lokal */
	address P;
	int i;
	
	/* algoritma */
	i = 0;
	P = First(L);
	while (P != NIL){
		i++;
		P = next(P);
	}
	return (i);
}

infotype Max (List L)
{
	/* kamus lokal */
	infotype max;
	address P;
	
	/* algoritma */
	P = First(L);
	max = info(P);
	P = next(P);
	while (P != NIL){
		if (max < info(P)){
			max = info(P);
		}
		P = next(P);
	}
	return (max);
}

address AdrMax (List L)
{
	/* kamus lokal */
	infotype max;
	address P;
	
	/* algoritma */
	max = Max(L);
	P = Search(L, max);
	return (P);
}

infotype Min (List L)
{
	/* kamus lokal */
	infotype min;
	address P;
	
	/* algoritma */
	P = First(L);
	min = info(P);
	P = next(P);
	while (P != NIL){
		if (min > info(P)){
			min = info(P);
		}
		P = next(P);
	}
	return (min);
}

address AdrMin (List L)
{
	/* kamus lokal */
	infotype min;
	address P;
	
	/* algoritma */
	min = Min(L);
	P = Search(L, min);
	return (P);
}

infotype Average (List L)
{
	/* kamus lokal */
	float sum;
	address P;
	
	/* algoritma */
	P = First(L);
	sum = info(P);
	P = next(P);
	while (P != NIL){
		sum += info(P);
		P = next(P);
	}
	return (sum/NbElmt(L));
}

void DelAll (List *L)
{
	/* kamus lokal */
	address P;
	
	/* algoritma */
	P = First(*L);
	while (P != NIL){
		First(*L) = next(First(*L));
		next(P) = NIL;
		Dealokasi(P);
		P = First(*L);
	}
}

void InversList (List *L)
{
	/* kamus lokal */
	int i;
	address P;
	infotype tmp[NbElmt(*L)];
	
	/* algoritma */
	P = First(*L);
	i = 0;
	while (P != NIL){
		tmp[i] = info(P);
		P = next(P);
		i++;
	}
	P = First(*L);
	if (P != NIL){
		for (i=NbElmt(*L)-1;i>=0;i--){
			info(P) = tmp[i];
			P = next(P);
		}
	}
}

List FInversList (List L)
{
	/* kamus lokal */
	List Li;
	address P, Pt;
	bool failed;
	
	/* algoritma */
	failed = false;
	CreateList(&Li);
	P = First(L);
	while (P!=NIL && !failed){
		Pt = Alokasi(info(P));
		if (Pt != NIL){
			InsertFirst(&Li, Pt);
			P = next(P);
		}
		else{
			DelAll(&Li);
			failed = true;
		}
	}
	return Li;
}

void CopyList (List* L1, List * L2)
{
	/* kamus lokal */
	
	/* algoritma */
	First(*L2) = First(*L1);
}

List FCopyList (List L )
{
	/* kamus lokal */
	address P, Pt;
	List Lt;
	bool Failed;
	
	/* algoritma */
	Failed = false;
	CreateList(&Lt);
	P = First(L);
	while (P!=NIL && !Failed){
		Pt = Alokasi(info(P));
		if (Pt != NIL){
			InsertLast(&Lt, Pt);
			P = next(P);
		}
		else{
			Failed = true;
			DelAll(&Lt);
		}
	}
	return Lt;
}

void CpAlokList (List Lin, List * Lout)
{
	/* kamus lokal */
	address P, Pt;
	bool Failed;
	
	/* algoritma */
	CreateList(Lout);
	Failed = false;
	P = First(Lin);
	while (P!=NIL && !Failed){
		Pt = Alokasi(info(P));
		if (Pt != NIL){
			InsertLast(Lout, Pt);
			P = next(P);
		}
		else{
			Failed = true;
			DelAll(Lout);
		}
	}
}

void Konkat (List L1, List L2, List * L3)
{
	/* Kamus Lokal */
	address P, Pt;
	bool Failed;
	
	/* Algoritma */
	CreateList(L3);
	Failed = false;
	P = First(L1);
	while ((P != NIL)&&(!Failed)){
		Pt = Alokasi(info(P));
		if (Pt != NIL){
			InsertLast(L3,Pt);
			P = next(P);
		}
		else{
			Failed = true;
			DelAll(L3);
		}
	}
	if (!Failed){
		P = First(L2);
		while ((P != NIL)&&(!Failed)){
			Pt = Alokasi(info(P));
			if (Pt != NIL){
				InsertLast(L3,Pt);
				P = next(P);
			}
			else{
				Failed = true;
				DelAll(L3);
			}
		}
	}
}

void Konkat1 (List * L1, List * L2, List * L3)
{
	/* kamus lokal */
	address P;
	
	/* algoritma */
	P = First(*L1);
	CreateList(L3);
	First(*L3) = First(*L1);
	if (P != NIL){
		while (next(P) != NIL){
			P = next(P);
		}
	}
	next(P) = First(*L2);
	CreateList(L1);
	CreateList(L2);
}

void PecahList (List *L1, List * L2, List L)
{
	/* kamus lokal */
	address P, Pt;
	bool Failed;
	int i, N;
	
	/* algoritma */
	CreateList(L1);
	CreateList(L2);
	Failed = false;
	i = 1;
	N = NbElmt(L)/2;
	P = First(L);
	while (P!=NIL && !Failed){
		Pt = Alokasi(info(P));
		if (i <= N){
			if (Pt != NIL){
				InsertLast(L1, Pt);
				P = next(P);
				i++;
			}
			else{
				Failed = true;
				DelAll(L1);
			}
		}
		else{
			if (Pt != NIL){
				InsertLast(L2, Pt);
				P = next(P);
				i++;
			}
			else{
				Failed = true;
				DelAll(L2);
			}
		}
	}
}
