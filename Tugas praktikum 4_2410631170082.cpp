#include <iostream>
using namespace std;

// Soal Nomor 1

bool isPrime(int num)
{
    if (num <= 1)
    {
          return false;
    }

    for (int i = 2; i * i <= num; i++)
    {
      if (num % i == 0)
      {
          return false;
      }
    }

    return true;
}

int main()
{
    int batas;

    cout << "Masukkan batas: ";
    cin >> batas;

    // Ganjil

    cout << "Bilangan ganjil dengan batas " << batas << ":" << endl;
    for (int i = 1; i <= batas; i +=2)
    {
        if (i == batas - 1 || i == batas)
        {
            cout << i << endl;
        }
        else
        {
            cout << i << ", ";
        }

    }

    // Genap

    cout << "Bilangan genap dengan batas " << batas << ":" << endl;
    for (int i = 2; i <= batas; i +=2)
    {
        if (i == batas - 1 || i == batas)
        {
            cout << i << endl;
        }
        else
        {
            cout << i << ", ";
        }
    }

    // Prima

    cout << "Bilangan prima dengan batas " << batas << ":"<< endl;
    for (int i = 2; i <= batas; i++)
    {
        if (isPrime(i))
        {
            if (i == batas - 1 || i == batas - 2 || i == batas - 3 || i == batas - 4 || i == batas - 5 || i == batas)
            {
                cout << i << endl;
            }
            else
            {
                cout << i << ", ";
            }
        }


    }


// Soal Nomor 2

    int angka, angkaPertama = 1, angkaKedua = 2, seterusnya;

    cout<<"Masukkan jumlah suku deret Fibonacci: ";
    cin>> angka;

    cout<<"Deret Fibonacci: " <<endl;
    for (int i=1; i<= angka; i++)
    {
        if ( i == angka)
        {
            cout<< angkaPertama;
        }
        else
        {
            cout<< angkaPertama <<", ";
        }

        seterusnya = angkaPertama + angkaKedua;
        angkaPertama = angkaKedua;
        angkaKedua = seterusnya;
    }
        cout<<endl;

// Soal Nomor 3

    int tinggi;

    cout << "Masukkan tinggi segitiga: ";
    cin >> tinggi;

    for (int i = 1; i <= tinggi; i++)
       {
        // Spasi
        for (int j = 1; j <= tinggi - i; j++)
       {
            cout << " ";
       }

        // Bintang
        for (int k = 1; k <= 2*i - 1; k++)
       {
            cout << "*";
       }

            cout << endl;
       }
    return 0;
}


