#ifndef ORDENARPORCARRO_H
#define ORDENARPORCARRO_H
#include<TemplateMetodoOrdenacao.h>


namespace TP2 {
class OrdenarPorCarro: public TemplateMetodoOrdenacao
{
public:
    OrdenarPorCarro(ArrayList<Piloto> *array);
    bool eMaior(int a, int b)const;
};
}//fim namespace

#endif // ORDENARPORCARRO_H
