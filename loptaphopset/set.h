#include <iostream>
using namespace std;

class set
{
private:
  int *data;
  int n, max;

public:
  set(int sz);
  set(const set &s);
  ~set();
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
};