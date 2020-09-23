#ifndef ORDENARPOREQUIPE_H
#define ORDENARPOREQUIPE_H
#include<TemplateMetodoOrdenacao.h>


namespace TP2 {
class OrdenarPorEquipe: public TemplateMetodoOrdenacao
{
public:
    OrdenarPorEquipe(ArrayList<Piloto> *array);
    bool eMaior(int a, int b)const;
};
}//fim namespace
#endif // ORDENARPOREQUIPE_H
