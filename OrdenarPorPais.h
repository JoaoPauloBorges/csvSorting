#ifndef ORDENARPORPAIS_H
#define ORDENARPORPAIS_H
#include<TemplateMetodoOrdenacao.h>


namespace TP2{

class OrdenarPorPais: public TemplateMetodoOrdenacao
{
public:
    OrdenarPorPais(ArrayList<Piloto> *array);
    bool eMaior(int a, int b)const;

};
}//fim namespace

#endif // ORDENARPORPAIS_H
