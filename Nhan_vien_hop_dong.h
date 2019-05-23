#pragma once
class Nhan_vien_hop_dong:public Nhan_vien
{
private:
	int Luong = 150000;
	int h=1;
public:
	Nhan_vien_hop_dong();
	Nhan_vien_hop_dong(int, int);
	void SetLuong(int  ,int);
	int GetLuong()const;
	void Print()const;
	~Nhan_vien_hop_dong();
};



Nhan_vien_hop_dong::Nhan_vien_hop_dong():Luong(150000),h(1){}
Nhan_vien_hop_dong::Nhan_vien_hop_dong(int Luong,int h) : Luong(Luong), h(h) {}
void Nhan_vien_hop_dong::SetLuong(int Luong, int h) {
	if (h > 40) {
		this->Luong = Luong * h*1.2;
	}
	else {
		this->Luong = Luong * h;
	}
}
int Nhan_vien_hop_dong::GetLuong()const {
	return this->Luong;
}

void Nhan_vien_hop_dong::Print()const {
	cout << Luong ;
}

Nhan_vien_hop_dong::~Nhan_vien_hop_dong()
{
}
