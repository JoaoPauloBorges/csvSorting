#include "OrdenarPorEquipe.h"
namespace TP2 {
OrdenarPorEquipe::OrdenarPorEquipe(ArrayList<Piloto> *array):
    TemplateMetodoOrdenacao(array)
{
}

bool OrdenarPorEquipe::eMaior(int a, int b) const
{
    if(array_de_pilotos->get_data(a).getEquipe() > array_de_pilotos->get_data(b).getEquipe())
       return true;
    else{
        if(array_de_pilotos->get_data(a).getEquipe() == array_de_pilotos->get_data(b).getEquipe())
        {
            if(array_de_pilotos->get_data(a).getNome() > array_de_pilotos->get_data(b).getNome())
                return true;
        }
    }
    return false;
}


}//fim namespace
