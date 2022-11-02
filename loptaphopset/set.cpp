#include "set.h"

set::set(int sz)
{
  data = new int[sz];
  max = sz;
  n = 0;
}
set::set(const set &s)
{
  n = s.n;
  max = s.max;
  data = new int[max];
  for (int i = 0; i < s.n; i++)
    data[i] = s.data[i];
}
set::~set()
{
  delete[] data;
  data = NULL;
}
set &operator+(const set &s, int x)
{
  int i, j;
  for (i = 0; i < s.n; i++)
  {
    if (s.data[i] == x)
      return s;
    if (s.data[i] > x)
      break;
  }

  set s1 = s; // s1(s))
  for (int j = s.n; j > i; j--)
    s1.data[j] = s1.data[j - 1];
  s1.data[i] = x;
  s1.n++;
  return s1;
}
ostream &operator<<(ostream &out, const set &s)
{
  for (int i = 0; i < s.n; i++)
    cout << s.data[i] << " ";
  return out;
}