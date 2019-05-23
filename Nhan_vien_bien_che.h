#pragma once
class Nhan_vien_bien_che:public Nhan_vien
{
private:
	int Luong =8000000;
public:
	Nhan_vien_bien_che();
	Nhan_vien_bien_che(int );
	void SetLuong(int);
	int GetLuong()const;
	void Print()const;
	~Nhan_vien_bien_che();
};



Nhan_vien_bien_che::Nhan_vien_bien_che():Luong(8000000){}
Nhan_vien_bien_che::Nhan_vien_bien_che(int Luong):Luong(Luong){}
void Nhan_vien_bien_che::SetLuong(int Luong) {
	this->Luong = Luong;
}
int Nhan_vien_bien_che::GetLuong()const {
	return Luong;
}
void Nhan_vien_bien_che::Print()const {
	cout << Luong;
}


Nhan_vien_bien_che::~Nhan_vien_bien_che()
{
}
