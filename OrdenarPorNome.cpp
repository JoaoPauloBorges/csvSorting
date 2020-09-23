#include "OrdenarPorNome.h"
namespace TP2{

OrdenarPorNome::OrdenarPorNome(ArrayList<Piloto> *array):
    TemplateMetodoOrdenacao(array)
{
}

bool OrdenarPorNome::eMaior(int a, int b) const
{
 if(array_de_pilotos->get_data(a).getNome() > array_de_pilotos->get_data(b).getNome())
     return true;
 return false;
}


}//fim namespace
