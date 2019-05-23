#pragma once
class Nhan_vien_hoa_hong: public Nhan_vien 
{
private:
	int Luong=100000;
	int So_hop_dong = 1;
public:
	Nhan_vien_hoa_hong();
	Nhan_vien_hoa_hong(int,int);
	void SetLuong(int,int);
	int GetLuong()const;
	void Print()const;
	~Nhan_vien_hoa_hong();
};



Nhan_vien_hoa_hong::Nhan_vien_hoa_hong():Luong(100000),So_hop_dong(1){}
Nhan_vien_hoa_hong::Nhan_vien_hoa_hong(int Luong ,int So_hop_dong) :Luong(Luong) ,So_hop_dong(So_hop_dong) {}
void Nhan_vien_hoa_hong::SetLuong(int Luong,int So_hop_dong) {
	this->Luong =Luong* So_hop_dong;
}
int Nhan_vien_hoa_hong::GetLuong()const{
	return Luong;
}
void Nhan_vien_hoa_hong::Print()const {
	cout << Luong;
}

Nhan_vien_hoa_hong::~Nhan_vien_hoa_hong()
{
}
