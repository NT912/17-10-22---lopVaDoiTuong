#include <iostream>
using namespace std;

class student
{
private:
  string hoten;
  float toan, van;

public:
  student();
  student(string hoten, float toan, float van);
  ~student();

  void setHoten(string hoten);

  string getHoten();

  void setToan(float toan);

  float getToan();

  void setVan(float van);

  float getVan();

  void nhap();

  float diemTrungBinh();

  string xepLoai(float diemTrungBinh);

  void xuat();
};
