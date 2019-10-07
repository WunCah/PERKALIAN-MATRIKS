#include<iostream>
using namespace std;
int main ()
{
	cout<< " Nur Wulan Cahyani \n";
	cout<< " 19051397010 \n";
	cout<< " D4 Manajemen Informatika \n";
    //deklarasi
    int barisA1, kolomA1, barisA2, kolomA2, temp,i,j, A1[10][10], A2[10][10], ahasil[10][10];

    //memasukkan jumlah baris dan kolom A1
    cout<<"Jumlah Baris dan Kolom A1\n";
    cout<<"Baris : ";
    cin>>barisA1;
    cout<<"Kolom:";
    cin>>kolomA1;
    cout<<endl;
    cout<<"Elemen Matrik\n";
    for(i=0;i<barisA1;i++)
    {
        for(j=0;j<kolomA1;j++)
        {
            cin>>A1[i][j];
        }
    }
    cout<<endl;
    for(i=0;i<barisA1;i++)
    {
        for(j=0;j<kolomA1;j++)
        {
            cout<<A1[i][j]<<"";
        }
        cout<<endl;
        {
            cout<<endl;
            //memasukkan jumlah baris dan kolom A2
            cout<<"Jumlah dan Baris kolom A2\n";
            cout<<"Baris:";
            cin>>barisA2;
            cout<<"Kolom:";
            cin>>kolomA2;
            cout<<endl;
            cout<<"Elemen Matrik\n";
            for(i=0;i<barisA2;i++)
            {

                for(j=0;j<kolomA2;j++)
                {
                    cout<<A2[i][j];
                }
            }
            cout<<endl;
            for(i=0;i<barisA2;i++)
            {
                for(j=0;j<kolomA2;j++)
                {
                    cout<<A2[i][j]<<"";
                }
                cout<<endl;
            }
            if(kolomA1==barisA2)
            {
                for(i=0;i<barisA2;i++)
                {
                    for(j=0;j<kolomA2;j++)
                    {
                        ahasil[i][j]=0;
                        for (int z=0;z<barisA2;z++)
                        {
                            temp=A1[i][j]*A2[z][j];
                            ahasil[i][j]=ahasil[i][j]+temp;
                        }
                    }
                }
                //tampilkan hasi penjumlahan matrik
                cout<<"Hasil Perkalian matriks:\n";
                for(i=0;i<barisA2;i++)
                {
                    for(j=0;j<kolomA2;j++)
                        {
                            cout<<ahasil[i][j]<<"\t";
                        }
                        cout<<endl;
                }
            }
            else
            {

                cout<<"Matriks Tidak Dapat Dikalikan";
            }
            return 0;
        }
    }
}
