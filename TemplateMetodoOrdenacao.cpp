#include"TemplateMetodoOrdenacao.h"

namespace TP2{//inicio
TemplateMetodoOrdenacao::TemplateMetodoOrdenacao(ArrayList<Piloto> *array):
    array_de_pilotos(array)
{
}

void TemplateMetodoOrdenacao::ordenar()const{
    for (int i = 1; i < array_de_pilotos->return_used(); i++)
    { for (int j = 1; j < array_de_pilotos->return_used(); j++)
        { if (eMaior(j,j+1))
            {  Piloto aux = array_de_pilotos->get_data(j);
               array_de_pilotos->replace_by_position(j,array_de_pilotos->get_data(j+1));
               array_de_pilotos->replace_by_position(j+1,aux);
             }
         }
    }
}

}//fim namespace
