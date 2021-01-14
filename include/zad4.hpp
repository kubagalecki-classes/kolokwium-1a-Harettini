#include "zad1.hpp"

#include <vector>

// tutaj funkcja obliczMake
double obliczMake(const std::vector<Tagliatelle>& V)
{double M; 
int i=1;
  for (auto it = V.crbegin(); it != V.crend(); ++it)
  {M=M+it->ileMaki(i);
  i++;
  }
  try
  {
    if(M>100)
    throw(i);
    if(M>50)
    throw(M/2);
    return M;
  }
  catch(const int a)
  {return a;}
  
    catch(const double b)
    {return b;}
 
}