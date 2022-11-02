#include <iostream>
#include "sinhvien.h"
using namespace std;

int main()
{
  student st1("Tran Huu Nhat Truong", 10, 10);
  student st2 = st1;
  student st3;

  st1.xuat();
  st2.xuat();
  st3.nhap();
  st3.xuat();
  return 0;
}