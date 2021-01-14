#include "zad1.hpp"

#include <vector>

// tutaj funkcja obliczMake
double obliczMake(std::vector<Tagliatelle>& V)
{double M, i=1;
  for (auto it = V.rbegin(); it != V.rend(); ++it)
  M=M+i*it->ileMaki();
  try
  {
    if(M>100)
    throw((int)1);
    if(M>50)
    throw((double)1);
    return M;
  }
  cauch(int a)
  return a;
    cauch(int b)
  return b;
}