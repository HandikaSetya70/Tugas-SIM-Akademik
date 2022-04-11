#include <iostream>
#include <vector>

#include "include/person.hpp"
#include "include/mahasiswa.hpp"
#include "include/dosen.hpp"
#include "include/tendik.hpp"

using namespace std;

int main(int argc, char** argv)
{
	vector<mahasiswa> recMhs;
	vector<dosen> recDosen;
	vector<tendik> recTendik;

	int menu_terpilih;

	while(1) {
		cout << "Welcome to Sepuluh Nopember Institute of Technology" << endl << endl;
		cout << "Data statistik:" << endl;
		cout << "  1. Jumlah Mahasiswa             : " << recMhs.size() << " Mahasiswa" << endl;
		cout << "  2. Jumlah Dosen                 : " << recDosen.size() << " Dosen" << endl;
		cout << "  3. Jumlah Tenaga Kependidikan   : " << recTendik.size() << " Tenaga Kependidikan" << endl;
		cout << endl;
		cout << "Menu: " << endl;
		cout << "  1. Tambah Mahasiswa" << endl;
		cout << "  2. Tambah Dosen" << endl;
		cout << "  3. Tambah Tenaga Kependidikan" << endl;
		cout << "  4. Tampilkan Semua Data Mahasiswa" << endl;
		cout << "  5. Tampilkan Semua Data Dosen" << endl;
		cout << "  6. Tampilkan Semua Data Tenaga Kependidikan" << endl;
		cout << "  7. Exit" << endl;
		cout << "-> Silahkan memilih salah satu: ";
		cin >> menu_terpilih;

		switch (menu_terpilih) {
			case 1:
			{
				reset1:
				system("cls");
				string id, nama, nrp, departemen;
				int dd, mm, yy, tahunmasuk, ee;
				cout << "Silahkan masukan data baru mahasiswa!" << endl;
				cout << "ID : ";
				cin >> id;
				cin.ignore();				
				cout << "Nama Lengkap : ";
				getline (cin, nama);
				cout << "Tanggal Lahir dipisahkan dengan spasi (tanggal bulan tahun) : ";
				cin >> dd >> mm >> yy;
				cout << "NRP : ";
				cin >> nrp;
				cin.ignore();
				cout << "Departemen : ";
				getline (cin, departemen);
				cout << "Tahun Masuk : ";
				cin>> tahunmasuk;
				cout << endl;
				cout << "Data berhasil dimasukkan! \n Data: ";
				cout << nama << " " << id << " " << dd << "-" << mm << "-" << yy << " " << nrp << " " << departemen << " " << tahunmasuk << endl; 
				cout << "Lanjutkan? input 1 untuk mengisi ulang dan apapun untuk melanjutkan :  ";
				cin >> ee;
				if (ee == 1){
					goto reset1;
				}
				mahasiswa datamhs(id, nama, dd, mm, yy, nrp, departemen, tahunmasuk);
				recMhs.push_back(datamhs);

			}
			break;
			
			case 2:
			{
				reset2:
				system("cls");
				string id, nama, npp, departemen, pendidikan;
				int dd, mm, yy, ee;
				cout << "Silahkan masukan data baru dosen!" << endl;
				cout << "ID : ";
				cin >> id;
				cin.ignore();
				cout << "Nama Lengkap : ";
				getline (cin, nama);
				cout << "Tanggal Lahir dipisahkan dengan spasi (tanggal bulan tahun) : ";
				cin >> dd >> mm >> yy;
				cout << "NPP : ";
				cin >> npp;
				cin.ignore();
				cout << "Departemen : ";
				getline (cin, departemen);
				cout << "Pendidikan : ";
				cin>> pendidikan;
				cout << endl;
				cout << "Data berhasil dimasukkan! \n Data: ";
				cout << nama << " " << id << " " << " " << npp << " " << departemen << " " << pendidikan << endl; 
				cout << "Lanjutkan? input 1 untuk mengisi ulang dan apapun untuk melanjutkan :  ";
				cin >> ee;
				if (ee == 1){
					goto reset2;
				}
				dosen datadsn(id, nama, dd, mm, yy, npp, departemen, pendidikan);
				recDosen.push_back(datadsn);

			}
			break;
			case 3:
			{
				reset3:
				system("cls");
				string id, nama, npp, unit;
				int dd, mm, yy, ee;
				cout << "Silahkan masukan data baru tenaga kependidikan!" << endl;
				cout << "ID: ";
				cin >> id;
				cin.ignore();
				cout << "Nama Lengkap : ";
				getline (cin, nama);
				cout << "Tanggal Lahir dipisahkan dengan spasi (tanggal bulan tahun) : ";
				cin >> dd >> mm >> yy;
				cout << "NPP : ";
				cin >> npp;
				cin.ignore();
				cout << "Unit : ";
				getline (cin, unit);
				cout << endl;
				cout << "Data berhasil dimasukkan! \n Data: ";
				cout << nama << " " << id << " " << " " << npp << " " << unit << endl; 
				cout << "Lanjutkan? input 1 untuk mengisi ulang dan apapun untuk melanjutkan :  ";
				cin >> ee;
				if (ee == 1){
					goto reset3;
				}
				tendik datatdk(id, nama, dd, mm, yy, npp, unit);
				recTendik.push_back(datatdk);

			}
			break;

			case 4:
			{
				system("cls");
				cout << "Data Semua Mahasiswa ITS" << endl;
				int i=0;
				while(i < recMhs.size())
				{
					cout << "ID 			: " << recMhs[i].getId() << endl;
					cout << "Nama 			: " << recMhs[i].getNama() << endl;
					cout << "Tanggal Lahir 	: " << recMhs[i].getTglLahir() << " " << recMhs[i].getBulanLahir() << " " << recMhs[i].getTahunLahir() << endl;
					cout << "NRP 			: " << recMhs[i].getNRP() << endl;
					cout << "Departemen 	: " << recMhs[i].getDepartemen() << endl;
					cout << "Tahun Masuk 	: " << recMhs[i].getTahunmasuk() << endl;
					cout << endl;

					i++;
				}
				cout << endl;

				break;
			}

			case 5:
			{
				system("cls");
				cout << "Data Semua Dosen ITS" << endl;
				int i=0;
				while(i < recDosen.size())
				{
					cout << "ID 			: " << recDosen[i].getId() << endl;
					cout << "Nama 			: " << recDosen[i].getNama() << endl;
					cout << "Tanggal Lahir 	: " << recDosen[i].getTglLahir() << " " << recDosen[i].getBulanLahir() << " " << recDosen[i].getTahunLahir() << endl;
					cout << "NPP 			: " << recDosen[i].getNPP() << endl;
					cout << "Departemen 	: " << recDosen[i].getDepartemen() << endl;
					cout << "Pendidikan		: " << recDosen[i].getPendidikan() << endl;
					cout << endl;

					i++;
				}
				cout << endl;
				break;
			}

			case 6:
			{
				system("cls");
				cout << "Data Semua Tenaga Kependidikan ITS" << endl;
				int i=0;
				while(i < recTendik.size())
				{
					cout << "ID 			: " << recTendik[i].getId() << endl;
					cout << "Nama 			: " << recTendik[i].getNama() << endl;
					cout << "Tanggal Lahir 	: " << recTendik[i].getTglLahir() << " " << recTendik[i].getBulanLahir() << " " << recTendik[i].getTahunLahir() << endl;
					cout << "NPP 			: " << recTendik[i].getNPP() << endl;
					cout << "Unit 			: " << recTendik[i].getUnit() << endl;
					cout << endl;

					i++;
				}
				cout << endl;
				break;

			}
			case 7:
			{
				exit(1);
			}
			default :
				{
					cout << "Input salah! Silahkan coba lagi" << endl;
				}
				break;
		}
	}

	return 0;
}
