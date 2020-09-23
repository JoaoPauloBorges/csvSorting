#include "OrdenarPorPais.h"

namespace TP2 {
OrdenarPorPais::OrdenarPorPais(ArrayList<Piloto> *array):
    TemplateMetodoOrdenacao(array)
{
}

bool OrdenarPorPais::eMaior(int a, int b) const
{
    if(array_de_pilotos->get_data(a).getPais() > array_de_pilotos->get_data(b).getPais())
       return true;
    else{
        if(array_de_pilotos->get_data(a).getPais() == array_de_pilotos->get_data(b).getPais())
        {
            if(array_de_pilotos->get_data(a).getNome() > array_de_pilotos->get_data(b).getNome())
                return true;
        }
    }
    return false;
}


}//fim namespace
