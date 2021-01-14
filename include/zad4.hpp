#include "zad1.hpp"

#include <vector>

// tutaj funkcja obliczMake
double obliczMake(const std::vector<Tagliatelle>& V)
{double M,yy; 
int i=1,y;
  for (auto it = V.crbegin(); it != V.crend(); ++it)
  {M=M+it->ileMaki(i);
  i++;
  }
  try
  {
    if(M>100)
    throw(y);
    if(M>50)
    throw(yy);
    return M;
  }
  catch(int a)
  {return a;}
  
    catch(double b)
    {return b;}
 
}