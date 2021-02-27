#include <iostream>
#include "Lista.hpp"


class GrafoLDA
{
private:
   int Vertices;
   Lista<Lista<int>> adj ;

public:
   GrafoLDA(int v);
};

GrafoLDA::GrafoLDA(int V)
{
   this->Vertices=V;
}


