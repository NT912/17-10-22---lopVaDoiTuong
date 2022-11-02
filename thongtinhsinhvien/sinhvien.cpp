 #include "sinhvien.h"

student::student()
{
  this->hoten = "";
  this->toan = this->van = 0;
}

student::student(string hoten, float toan, float van)
{
  this->hoten = hoten;
  this->toan = toan;
  this->van = van;
}

student::~student()
{
  this->hoten = "";
  this->toan = this->van = 0;
}

void student::setHoten(string hoten)
{
  this->hoten = hoten;
}

string student::getHoten()
{
  return this->hoten;
}

void student::setToan(float toan)
{
  this->toan = toan;
}

float student::getToan()
{
  return this->toan;
}

void student::setVan(float van)
{
  this->van = van;
}

float student::getVan()
{
  return this->van;
}

void student::nhap()
{
  cout << "\nNhap ho va ten: ";
  getline(cin, this->hoten);
  cout << "Nhap diem mon Toan: ";
  cin >> this->toan;
  cout << "Nhap diem mon Van: ";
  cin >> this->van;
}

float student::diemTrungBinh()
{
  return (toan + van) / 2;
}

string student::xepLoai(float diemTrungBinh)
{
  string xep;

  if (diemTrungBinh >= 8)
    xep = "Gioi";
  if (diemTrungBinh >= 7 && diemTrungBinh < 8)
    xep = "Kha";
  if (diemTrungBinh >= 5 && diemTrungBinh < 7)
    xep = "Trung binh";
  if (diemTrungBinh < 5)
    xep = "Yeu";

  return xep;
}

void student::xuat()
{
  cout << "\nHo va ten: " << this->hoten << " - Toan: " << this->toan << " - Van: " << this->van << " - Diem trung binh: " << diemTrungBinh() << " - Xep loai: " << xepLoai(diemTrungBinh());
}