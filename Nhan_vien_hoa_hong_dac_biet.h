#pragma once
class Nhan_vien_hoa_hong_dac_biet :public Nhan_vien
{
private:
	int Luong = 100000;
	int So_hop_dong = 1;
public:
	Nhan_vien_hoa_hong_dac_biet();
	Nhan_vien_hoa_hong_dac_biet(int,int);
	void SetLuong(int,int);
	int GetLuong()const;
	void Print()const;
	~Nhan_vien_hoa_hong_dac_biet();
};



Nhan_vien_hoa_hong_dac_biet::Nhan_vien_hoa_hong_dac_biet():Luong(100000), So_hop_dong(1) {}
Nhan_vien_hoa_hong_dac_biet::Nhan_vien_hoa_hong_dac_biet(int Luong,int So_hop_dong){ 
	this->Luong = Luong;
	this->So_hop_dong = So_hop_dong;
}
void Nhan_vien_hoa_hong_dac_biet::SetLuong(int Luong, int So_hop_dong) {
	this->Luong = Luong * So_hop_dong +0.1 ;
}
int Nhan_vien_hoa_hong_dac_biet::GetLuong()const {
	return Luong;
}
void Nhan_vien_hoa_hong_dac_biet::Print()const{
	cout << Luong;

}
Nhan_vien_hoa_hong_dac_biet::~Nhan_vien_hoa_hong_dac_biet()
{
}
