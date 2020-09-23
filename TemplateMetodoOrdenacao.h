#ifndef TEMPLATEMETODOORDENACAO_H
#define TEMPLATEMETODOORDENACAO_H
#include<Persistencia.h>

namespace TP2{//inicio
class TemplateMetodoOrdenacao
{
protected:
    ArrayList<Piloto>* array_de_pilotos;
public:
    TemplateMetodoOrdenacao(ArrayList<Piloto> *array);
    virtual bool eMaior(int a, int b)const = 0;
    void ordenar()const;
};
}//fim

#endif // TEMPLATEMETODOORDENACAO_H
