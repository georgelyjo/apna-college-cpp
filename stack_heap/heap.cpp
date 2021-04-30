#include <bits/stdc++.h>
using namespace std;
int main()
{

  int a = 10;
  int *p = new int();
  *p = 10;
  delete(p);

  p=new int[4];


  delete[] p;
  p = NULL;
 return 0;
}
