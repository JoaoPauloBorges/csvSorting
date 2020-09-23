#include "OrdenarPorCarro.h"
namespace TP2 {

OrdenarPorCarro::OrdenarPorCarro(ArrayList<Piloto> *array):
    TemplateMetodoOrdenacao(array)
{
}
bool OrdenarPorCarro::eMaior(int a, int b) const
{
    if(array_de_pilotos->get_data(a).getCarro() > array_de_pilotos->get_data(b).getCarro())
        return true;
    else{
        if(array_de_pilotos->get_data(a).getCarro()==array_de_pilotos->get_data(b).getCarro())
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
    }
    return false;
}
}
}// fim namespace
