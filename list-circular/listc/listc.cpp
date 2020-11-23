/* Program   : listc.cpp */
/* Deskripsi : file BODY modul list circular berkait */
/* NIM/Nama  : 24060118120042/Musthafa Kamal Faishal */
/* Tanggal   : 18/11/2020 */
/***********************************/

#include <iostream>
#include <cstdlib>
#include "listc.hpp"
using namespace std;

bool ListEmpty (List L)
{
	/* kamus lokal */
	
	/* algoritma */
	return (First(L) == Nil);
}

void CreateList (List * L)
{
	/* kamus lokal */
	
	/* algoritma */
	First(*L) = Nil;
}

address Alokasi (infotype X)
{
	/* kamus lokal */
	address P;
	
	/* algoritma */
	P = (address) malloc(sizeof(ElmtList));
	if (P != Nil){
		info(P) = X;
		next(P) = Nil;
		return (P);
	}
	else{
		return (Nil);
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
	
	/* algoritma */
	P = First(L);
	if (!ListEmpty(L)){
		if (X == info(P)){
			return (P);
		}
		else{
			P = next(P);
			while (P != First(L)){
				if (X == info(P)){
					return (P);
				}
				else{
					P = next(P);
				}
			}
		}
	}
	else{
		return (Nil);
	}
}

bool FSearch (List L, address P)
{
	/* kamus lokal */
	address Pt;
	
	/* algoritma */
	if (!ListEmpty(L)){
		Pt = First(L);
		while (Pt != First(L)){
			if (Pt == P){
				return (true);
			}
			Pt = next(Pt);
		}
		return (false);
	}
	else{
		return (false);
	}
}

address SearchPrec (List L, infotype X, address *Prec)
{
	/* kamus lokal */
	address P;
	
	/* algoritma */
	if (!ListEmpty(L)){
		P = First(L);
		*Prec = Nil;
		if (X == info(P)){
			return (*Prec);
		}
		while (next(P) != First(L)){
			*Prec = P;
			P = next(P);
			if (X == info(P)){
				return (*Prec);
			}
		}
	}
	else{
		return (Nil);
	}
}

void InsVFirst (List * L, infotype X)
{
	/* kamus lokal */
	address P;
	
	/* algoritma */
	P = Alokasi(X);
	if (P != Nil){
		InsertFirst(L, P);
	}
}

void InsVLast (List * L, infotype X)
{
	/* kamus lokal */
	address P;
	
	/* algoritma */
	P = Alokasi(X);
	if (P != Nil){
		InsertLast(L, P);
	}
}

void DelVFirst (List * L, infotype * X)
{
	/* kamus lokal */
	address P;
	
	/* algoritma */
	DelFirst(L, &P);
	(*X) = info(P);
	Dealokasi(P);
}

void DelVLast (List * L, infotype * X)
{
	/* kamus lokal */
	address P;
	
	/* algoritma */
	DelLast(L, &P);
	(*X) = info(P);
	Dealokasi(P);
}

void InsertFirst (List * L, address P)
{
	/* kamus lokal */
	address Last;
	
	/* algoritma */
	if (!ListEmpty(*L)){
		Last = First(*L);
		while (next(Last) != First(*L)){
			Last = next(Last);
		}
		next(P) = First(*L);
		next(Last) = P;
	}
	else{
		next(P) = P;
	}
	First(*L) = P;
}

void InsertAfter (List * L, address P, address Prec)
{
	/* kamus lokal */
	
	/* algoritma */
	next(P) = next(Prec);
	next(Prec) = P;
}

void InsertLast (List * L, address P)
{
	/* kamus lokal */
	address Last;
	
	/* algoritma */
	if (!ListEmpty(*L)){
		Last = First(*L);
		while (next(Last) != First(*L)){
			Last = next(Last);
		}
		InsertAfter(L, P, Last);
	}
	else{
		InsertFirst(L, P);
	}
}

void DelFirst (List * L, address * P)
{
	/* kamus lokal */
	address Last;
	
	/* algoritma */
	(*P) = First(*L);
	if (next(First(*L)) == First(*L)){
		First(*L) = Nil;
	}
	else{
		Last = First(*L);
		while (next(Last) != First(*L)){
			Last = next(Last);
		}
		First(*L) = next(First(*L));
		next(Last) = First(*L);
	}
	next(*P) = Nil;
}

void DelP (List * L, infotype X)
{
	/* kamus lokal */
	address P, Prec;
	
	/* algoritma */
	if (Search(*L, X) != Nil){
		if (X == info(First(*L))){
			DelVFirst(L, &X);
		}
		else{
			Prec = First(*L);
			while (info(next(Prec)) != X){
				Prec = next(Prec);
			}
			P = next(Prec);
			next(Prec) = next(next(Prec));
			next(P) = Nil;
			Dealokasi(P);
		}
	}
}

void DelLast (List * L, address * P)
{
	/* kamus lokal */
	address Last, Prec;
	
	/* algoritma */
	Last = First(*L);
	Prec = Nil;
	while (next(Last) != First(*L)){
		Prec = Last;
		Last = next(Last);
	}
	(*P) = Last;
	if (Prec == Nil){
		First(*L) = Nil;
	}
	else{
		next(Prec) = First(*L);
	}
}

void DelAfter (List * L, address * Pdel, address Prec)
{
	/* kamus lokal */
	
	/* algoritma */
	if (next(Prec) != First(*L)){
		(*Pdel) = next(Prec);
		next(Prec) = next(next(Prec));
		next(*Pdel) = Nil;
	}
	else{
		(*Pdel) = next(Prec);
		next(Prec) = next(next(Prec));
		First(*L) = Prec;
		next(*Pdel) = Nil;
	}
}

void Printinfo (List L)
{
	/* kamus lokal */
	address P;
	
	/* algoritma */
	P = First(L);
	if (!ListEmpty(L)){
		cout << "[";
		cout << info(P);
		if (next(P) == First(L)){
		cout << "]";
		}
		else{
			cout << ",";
		}
		P = next(P);
		while (P != First(L)){
			cout << info(P);
			if (next(P) == First(L)){
				cout << "]";
			}
			else{
				cout << ",";
			}
			P = next(P);
		}
	}
	else{
		cout << "[]";
	}
}

int NbElmt(List L)
{
	/* kamus lokal */
	address P;
	int count;
	
	/* algoritma */
	if (!ListEmpty(L)){
		P = First(L);
		count = 1;
		while (next(P) != First(L)){
			count++;
			P = next(P);
		}
	}
	return (count);
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
	while (P != First(L)){
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
	while (P != First(L)){
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
	while (P != First(L)){
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
	while (!ListEmpty(*L)){
		DelFirst(L, &P);
		Dealokasi(P);
	}
	First(*L) = Nil;
}

void InversList (List *L)
{
	/* kamus lokal */
	address P, Prev, Current, Pt;
	int i;
	
	/* algoritma */
	P = First(*L);
	Pt = P;
	Current = P;
	P = next(P);
	i = 0;
	while (next(Pt) != First(*L)){
		Pt = next(Pt);
	}
	Prev = Pt;
	Pt = First(*L);
	while (P!=Pt || i==0){
		(*Current).next = Prev;
		Prev = Current;
		Current = P;
		P = next(P);
		i++;
	}
	(*Current).next = Prev;
	First(*L) = Current;
}

List FInversList (List L)
{
	/* kamus lokal */
	List Lt;
	address P, Pt;
	int i;
	
	/* algoritma */
	CreateList(&Lt);
	P = First(L);
	i = 0;
	while (P!=First(L) || i==0){
		Pt = Alokasi(info(P));
		if (Pt != Nil){
			InsertFirst(&Lt, Pt);
		}
		else{
			DelAll(&Lt);
			break;
		}
		P = next(P);
		i++;
	}
	return (Lt);
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
	List LCopy;
	address P, PCopy;
	bool fail;
	
	/* algoritma */
	CreateList(&LCopy);
	fail = false;
	P = First(L);
	if (!ListEmpty(L)){
		do{
			PCopy = Alokasi(info(P));
			if (PCopy != Nil){
				InsertLast(&LCopy, PCopy);
				P = next(P);
			}
			else{
				fail = true;
			}
		}
		while (P!=First(L) && !fail);
	}
	if (fail){
		DelAll(&LCopy);
	}
	return (LCopy);
}

void CpAlokList (List Lin, List * Lout)
{
	/* kamus lokal */
	
	/* algoritma */
	(*Lout) = FCopyList(Lin);
}

void Konkat (List L1, List L2, List * L3)
{
	/* kamus lokal */
 	address P, Pt;
 	bool gagal;
 	
 	/* algoritma */
	 CreateList(L3);
	 (*L3) = FCopyList(L1);
	 P = First(L2);
	 gagal = false;
	 if (!ListEmpty(L2)){
	 	do{
		 	Pt = Alokasi(info(P));
			 if (Pt == Nil){
			 	gagal = true;
				 break;
			}
			else{
				InsertLast(L3, Pt);
				P = next(P);
			}
		}
		while (P != First(L2));
	}
	if (gagal){
		DelAll(L3);
	}
}

void Konkat1 (List * L1, List * L2, List * L3)
{
	/* kamus lokal */
	address P, Pt;
	
	/* algoritma */
	CreateList(L3);
	CopyList(L1, L3);
	P = First(*L2);
	if (!ListEmpty(*L2)){
		do{
			Pt = next(P);
			InsertLast(L3, P);
			P = Pt;
		}
		while (P != First(*L2));
	}
	CreateList(L1);
	CreateList(L2);
}

void PecahList (List *L1, List * L2, List L)
{
	/* kamus lokal */
	div_t result;
	int mid;
	address P;
	infotype X;
	int i;
	
	/* algoritma */
	result = div(NbElmt(L), 2);
	mid = result.quot;
	CreateList(&(*L1));
	CreateList(&(*L2));
	P = First(L);
	for (i=1;i<=mid;i++){
		X = info(P);
		InsVLast(&(*L1), X);
		P = next(P);
	}
	while (P != First(L)){
		X = info(P);
		InsVLast(&(*L2), X);
		P = next(P);
	}
}
