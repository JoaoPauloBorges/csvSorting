#include "OrdenarPorCodigo.h"
namespace TP2 {

OrdenarPorCodigo::OrdenarPorCodigo(ArrayList<Piloto> *array):
    TemplateMetodoOrdenacao(array)
{
}

bool OrdenarPorCodigo::eMaior(int a, int b) const
{
    if(array_de_pilotos->get_data(a).getCodigo() > array_de_pilotos->get_data(b).getCodigo())
        return true;
    return false;
}
}// fim namespace
