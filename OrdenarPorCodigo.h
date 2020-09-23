#ifndef ORDENARPORCODIGO_H
#define ORDENARPORCODIGO_H
#include<TemplateMetodoOrdenacao.h>

namespace TP2 {

class OrdenarPorCodigo: public TemplateMetodoOrdenacao
{
public:
    OrdenarPorCodigo(ArrayList<Piloto> *array);
    bool eMaior(int a, int b)const;

};
}//fim namespace

#endif // ORDENARPORCODIGO_H
