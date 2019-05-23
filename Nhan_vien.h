#pragma once
class Nhan_vien
{
private:
	string id;
	string name;
	string id_code;
public:
	Nhan_vien();
	Nhan_vien(string, string, string);
	void Setid(string id);
	void Setname(string name);
	void Setid_code(string id_code);

	string Getid()const;
	string Getname()const;
	string Getid_code()const;

	void Print()const;
	~Nhan_vien();
};

Nhan_vien::Nhan_vien():id("\0"),name("\0"),id_code("\0"){}
Nhan_vien::Nhan_vien(string id,string name,string id_code){
	this->id = id;
	this->name = name;
	this->id_code = id_code;
}

void Nhan_vien::Setid(string id) {
	this->id=id;
}
void Nhan_vien::Setname(string name) {
	this->name=name;
}
void Nhan_vien::Setid_code(string id_code) {
	this->id_code=id_code;
}

string Nhan_vien::Getid()const {
	return id;
}
string Nhan_vien::Getname()const {
	return name;
}
string Nhan_vien::Getid_code()const {
	return id_code;
}

void Nhan_vien::Print()const {
	cout << id << "\n" << name << "\n" << id_code<<"\n";
}
Nhan_vien::~Nhan_vien(){}
