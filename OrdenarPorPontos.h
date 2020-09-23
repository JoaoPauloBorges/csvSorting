#ifndef ORDENARPORPONTOS_H
#define ORDENARPORPONTOS_H
#include<TemplateMetodoOrdenacao.h>

namespace TP2 {

class OrdenarPorPontos: public TemplateMetodoOrdenacao
{
public:
    OrdenarPorPontos(ArrayList<Piloto> *array);
    bool eMaior(int a, int b)const;

};
}//fim namespace
#endif // ORDENARPORPONTOS_H
