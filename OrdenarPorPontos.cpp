#include "OrdenarPorPontos.h"

namespace TP2 {
OrdenarPorPontos::OrdenarPorPontos(ArrayList<Piloto> *array):
    TemplateMetodoOrdenacao(array)
{
}

bool OrdenarPorPontos::eMaior(int a, int b) const
{
    if(array_de_pilotos->get_data(a).getPontos() > array_de_pilotos->get_data(b).getPontos())
        return true;
    if(array_de_pilotos->get_data(a).getPontos() == array_de_pilotos->get_data(b).getPontos())
    {
        if(array_de_pilotos->get_data(a).getNome() > array_de_pilotos->get_data(b).getNome())
            return true;
    }

    return false;

}
}//fim namespace
