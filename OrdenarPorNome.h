#ifndef ORDENARPORNOME_H
#define ORDENARPORNOME_H
#include<TemplateMetodoOrdenacao.h>
namespace TP2 {


class OrdenarPorNome: public TemplateMetodoOrdenacao
{
public:
    OrdenarPorNome(ArrayList<Piloto> *array);
    bool eMaior(int a, int b)const;
};
}//fim namespace

#endif // ORDENARPORNOME_H
