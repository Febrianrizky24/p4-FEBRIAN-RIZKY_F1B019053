#include<iostream>
#include<iomanip>
#include<string>
#include<conio.h>

using namespace std;

int main()
{
	int i, nilai, benar=0, salah=0;
	string user, pass;
	char pilihanlogin, pilihan, jawab, pilih;
	ulang : 
	cout<<" SOAL QUIS TENTANG COVID 19\n";
	cout<<" TAHUN 2020-2021\n";
	cout<<" KELOMPOK 11\n";
	cout<<"\n";
	cout<<"Silahkan Login!\n";
	cout<<"\t\t\t\t\t\t\t\t\t\n";
	cout<<"Masukkan Ussername : ";cin>>user;cout<<"\n";
	cout<<"Masukkan Password  : ";cin>>pass;cout<<"\t\t\n";
			if (user == "febrian" && pass == "rizky")
			{
				cout<<"\t\t\t Login Berhasil\t\t\n";
			}
			else
			{
				cout<<"\t\t\t Ussername dan password anda salah silahkan coba kembali \t\t\n";
				cout<<"\t\t\t Coba lagi ?[y/t]  : ";cin>>pilihanlogin;cout<<"\t\t\n";
					if (pilihanlogin=='y' || pilihanlogin=='Y')
					{system("cls");
					goto ulang;}
					else{goto selesai;}
					if (pilihanlogin=='t' || pilihanlogin=='T')
					{goto selesai;}		
			}
			
			
	cout<<"-------------------------------------------------------------------------\n";
	system("cls");
	{
    ulangjwb :
	cout<<"PILIH SALAH SATU JAWABAN YANG MENURUT ANDA BENAR, ANTARA A, B, C, ATAU D!\n";
	cout<<"\n";
	cout<<"1. Apa nama lain corona??\n";
	string pilgan1[50]={"a. covid 19 ","b. sars","c. ebola","d. flu burung"};
	for (i=0;i<=3;i++)
	{cout<<pilgan1[i]<<"\n";}
    cout<<"Jawaban Anda : ";
    cin >> jawab;
        if(jawab == 'a' || jawab == 'a')
        {benar++;}
        else{
        salah++;}
    cout<<"=\n";        
    cout<<"2. Dimana Covid-19 pertama kali ditemukan??\n";
    string pilgan2[50]={"a. jakarta-Indonesia","b. milan-Italia","c. LA-Amerika","d. wuhan-China"};
	for (i=0;i<=3;i++)
	{cout<<pilgan2[i]<<"\n";}
    cout<<"Jawaban Anda : ";
    cin >> jawab;
        if(jawab == 'd' || jawab == 'D')
        {benar++;}
        else{
        salah++;}
    cout<<"\n";        
	cout<<"3. provinsi manakah diindonesia yang paling banyak terinveksi virus covid 19??\n";
	string pilgan3[50]={"a. jawa barat","b. Bali","c. jakarta","d. NTB"};
	for (i=0;i<=3;i++)
	{cout<<pilgan3[i]<<"\n";}
    cout<<"Jawaban Anda : ";
    cin >> jawab;
        if(jawab == 'c' || jawab == 'C')
        {benar++;}
        else{
        salah++;}
	cout<<"\n";				
	cout<<"4. Berikut ini cara memutus tali penularan covid-19, kecuali??\n";
	string pilgan4[50]={"a. Diam di rumah","b. Membuat acara yang dapat mengundang banyak orang","c. Mencuci tangan dengan sabun","d. Jaga jarak"};
    for (i=0;i<=3;i++)
	{cout<<pilgan4[i]<<"\n";}
	cout<<"Jawaban Anda : ";
    cin >> jawab;
        if(jawab == 'b' || jawab == 'B')
        {benar++;}
        else{
        salah++;}
    cout<<"\n";       
    cout<<"5. Apa penyebab penyebaran covid-19 sangat cepat??\n";
    string pilgan5[50]={"a. kurangnya kesadaran masyarakat atas himbauwan yang di berikan","b. pola hidup bersih","c. sering berolahraga","d. rebahan"};
	for (i=0;i<=3;i++)
	{cout<<pilgan5[i]<<"\n";}
    cout<<"Jawaban Anda : ";
    cin >> jawab;
            if(jawab == 'a' || jawab == 'A')
        {benar++;}
        else{
        salah++;}
	cout<<"\n";
	cout<<"6. Berikut ini gejala-gejala yang di alami orang yang terkena covid-19, kecuali??\n";
	string pilgan6[50]={"a. Batuk Kering","b. darah susah membeku","c. Demam","d. Pusing dan badan terasa lemas"};
	for (i=0;i<=3;i++)
	{cout<<pilgan6[i]<<"\n";}
	cout<<"Jawaban Anda : ";
    cin >> jawab;
        if(jawab == 'b' || jawab == 'B')
        {benar++;}
        else{
        salah++;}     
	cout<<"\n";
	cout<<"7. Siapa nama juru bicara pemerintah khusus penanganan covid-19??\n";
	string pilgan7[50]={"a. Yasonna Laoly","b. Anies Baswedan","c. Achmad Yurianto","d. Nadiem Makarim"};
	for (i=0;i<=3;i++)
	{cout<<pilgan7[i]<<"\n";}
    cout<<"Jawaban Anda : ";
    cin >> jawab;
        if(jawab == 'c' || jawab == 'C')
        {benar++;}
        else{
        salah++;}
	cout<<"\n";
	cout<<"8. Jika seseorang baru pulang dari daerah yang terjangkit covid-19 maka hal yang harus dilakukan adalah??\n";
	string pilgan8[50]={"a. Reuni dengan teman SMA","b. Traveling bersama sahabat","c. Bukber dengan teman SD","d. Mengkarantina diri selama 14 hari"};
    for (i=0;i<=3;i++)
	{cout<<pilgan8[i]<<"\n";}
	cout<<"Jawaban Anda : ";
    cin >> jawab;
            if(jawab == 'd' || jawab == 'D')
        {benar++;}
        else{
        salah++;}
	cout<<"\n";
	cout<<"9. sebutkan barang2 apa saja yang diperlukan untuk mengamankan diri agar terhindar dari virus covid 19 kecuali??\n";
	string pilgan9[50]={"a. bola basket","b. hand sanitizer","c. sarung tangan","d. masker"};
	for (i=0;i<=3;i++)
	{cout<<pilgan9[i]<<"\n";}
	cout<<"Jawaban Anda : ";
    cin >> jawab;
            if(jawab == 'a' || jawab == 'A')
        {benar++;}
        else{
        salah++;}
	cout<<"\n";
	cout<<"10. NTB merupakan salah satu daerah yang banyak terinfeksi covid-19 yaitu ke??\n";
	string pilgan10[50]={"a. 4","b. 5","c. 6","d. 7"};
	for (i=0;i<=3;i++)
	{cout<<pilgan10[i]<<"\n";}
	cout<<"Jawaban Anda : ";
    cin >> jawab;
            if(jawab == 'd' || jawab == 'D')
        {benar++;}
        else{
        salah++;} 
			
	cout<<"Apakah anda yakin dengan jawaban anda??[y/t]\n";cin>>pilihan;cout<<"\n";
					if (pilihan=='y' || pilihan=='Y')
					{goto nilai;}
					
					if (pilihan=='t' || pilihan=='T')
					{system("cls"); 
					goto ulangjwb;
					cout<<endl;}												       

	}		nilai :
					cout<<"\n";
					cout<<"Perolehan Nilai :"<<endl;
            		nilai = benar*10;
            		cout<<"    Jumlah Benar : "<<benar<<" soal "<<endl;
            		cout<<"    Jumlah Salah : "<<salah<<" soal "<<endl;
            		cout<<"    Nilai Anda   : "<<nilai<<"\n"<<endl;
			selesai : 
			cout<<endl;
			cout<<"Program Selesai, Terimakasi\n";
			cout<<endl;
	
}
