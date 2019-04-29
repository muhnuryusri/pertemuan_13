#include <iostream>
#include <string>

using namespace std;

struct Mhs{
                    //membuat tipe data struct yang berfunsi menyimpan beberapa tipe data yang berbeda.
    int nim;
    Mhs*next;        //Nama_struct*next.
};

void printList(Mhs*n)      //Membuat fungsi printList
{
    while (n!= NULL)       //syarat n tidak sama dengan NULL
    {
        cout<<"NIM        : "<<n->nim<<" "<<endl;   //n-.data adalah sebuah variable yang akan di panggil
        n = n->next;
    }
}

int main ()        // program utama
{
    Mhs*head = NULL;    // 
    Mhs*second = NULL;  // nilai variabel head, second, dan third sama dengan NULL
    Mhs*third = NULL;   //

    head = new Mhs();   // 
    second = new Mhs(); // 
    third = new Mhs();  //

    head->nim = 1829141023; // memanggil nilai head.nim
    head->next = second;  // memanggil data menuju second.nim

    second->nim = 1829140014;
    second->next = third;

    third->nim = 1829141033;
    third->next = NULL;

    printList(head);

    cin.get();
    return 0;
}
