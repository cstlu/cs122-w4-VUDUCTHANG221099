#include <iostream>
#include<string>
using namespace std;
#include"Nhan_vien.h"
#include "Nhan_vien_bien_che.h"
#include "Nhan_vien_hop_dong.h"
#include "Nhan_vien_hoa_hong.h"
#include "Nhan_vien_hoa_hong_dac_biet.h"

int main() {
	Nhan_vien_hoa_hong_dac_biet a;
	Nhan_vien_hoa_hong_dac_biet* ptr=&a;
	
	ptr->Setid("A45687");
	cout << "Ma nhan vien: "<< ptr->Getid()<<endl;
	

	ptr->Setname("Vu Duc X");
	cout<<"Ho va ten: "<<ptr->Getname()<<endl;
	
	ptr->Setid_code("ASDX145");
	cout << "Ma so thue: "<<ptr->Getid_code()<<endl;
	
	ptr->SetLuong(100000,13);

	
	cout << "So tien luong: " << ptr->GetLuong()<<" dong";


	return 0;
}