#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <alloc.h>

int pil;
void pilih();
void buat_baru();
void tambah_belakang();
void tambah_depan();
void hapus_belakang();
void hapus_depan();
void tampil();

struct simpul
{
 char nim[8], nama [20];
    int umur;
 struct simpul *next;
} mhs, *baru, *awal=NULL, *akhir=NULL,*hapus,*bantu;
/*ANTOK 11030013*/


int main()
{
 do
 {
   clrscr();
   cout<<"================================="<<endl;
   cout<<"         Contoh Program"<<endl;
   cout<<"   SINGLE LINKED LIST CIRCULAR"<<endl;
   cout<<"         Antok 11030013      "<<endl;
   cout<<"================================="<<endl;
   cout<<"1. Tambah Depan"<<endl;
   cout<<"2. Tambah Belakang"<<endl;
   cout<<"3. Hapus Depan"<<endl;
   cout<<"4. Hapus Belakang"<<endl;
   cout<<"5. Tampilkan"<<endl;
   cout<<"6. Selesai"<<endl;
   cout<<"=================================="<<endl;
   cout<<"             Publis by           "<<endl;
   cout<<"www.cobacoba-tutorial.blogspot.com"<<endl;
   cout<<"=================================="<<endl;
   cout<<"Masukan Pilihan Anda : ";
   cin>>pil;
   pilih();
 } while(pil!=6);
 return 0;
}

void pilih()
{
    if(pil==1)
        tambah_depan();
    else if(pil==2)
   tambah_belakang();
    else if(pil==3)
        hapus_depan();
     else if(pil==4)
   hapus_belakang();
  else if(pil==5)
        tampil();
    else
   cout<<"selesai";
}

void buat_baru()
{
 baru=(simpul*)malloc(sizeof(struct simpul));
    cout<<"input nim   : ";cin>>baru->nim;
 cout<<"input nama  : ";cin>>baru->nama;
    cout<<"input umur  : ";cin>>baru->umur;
    baru->next=NULL;
}

void tambah_belakang()
{
    buat_baru();
 if(awal==NULL)
    {
   awal=baru;
    }
    else
 {
        akhir->next=baru;
 }
    akhir=baru;
    akhir->next=NULL;
 cout<<endl<<endl;
    tampil();
}

void tambah_depan()
{
 buat_baru();
    if(awal==NULL)
    {
        awal=baru;
   akhir=baru;
        akhir->next=NULL;
 }
    else
 {
        baru->next=awal;
        awal=baru;
    }
 cout<<endl<<endl;
    tampil();
}

void hapus_depan()
{
 if (awal==NULL)
        cout<<"Kosong";
 else
    {
        hapus=awal;
        awal=awal->next;
   free(hapus);
    }
   cout<<endl<<endl;
 tampil();
}
/*ANTOK 11030013*/
void hapus_belakang()
{
    if (awal==NULL)
   cout<<"Kosong";
    else if(awal==akhir)
    {
   hapus=awal;
         awal=awal->next;
         free(hapus);
 }
    else
    {
   hapus=awal;
   while(hapus->next!=akhir)
    hapus=hapus->next;
        akhir=hapus;
   hapus=akhir->next;
        akhir->next=NULL;
   free(hapus);
    }
 cout<<endl<<endl;
    tampil();
}

void tampil()
{
  if (awal==NULL)
   cout<<"Kosong";
  else
  {
   bantu=awal;
   while(bantu!=NULL)
   {
    cout<<"nim : "<<bantu->nim;
    cout<<"  nama : "<<bantu->nama;
    cout<<"  umur : "<<bantu->umur<<endl;
    bantu=bantu->next;
   }
  }
  ge
