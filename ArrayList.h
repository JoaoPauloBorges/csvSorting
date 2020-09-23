#ifndef ARRAYLIST_H
#define ARRAYLIST_H
#include <QString>

namespace TP2{
template< class tipo>
class ArrayList
{
private:
    int used;
    int size;
    tipo *array;

public:
    ArrayList();
    ArrayList (int size);
    int return_size()const{return size;}
    int return_used()const{return used;}
    void increase_size();
    void push_front(tipo data);
    void push_back(tipo data);
    void push_middle(int pos,tipo data);
    void remove_all_data() {used = 0;}
    tipo operator[](int pos);
    QString search_data(tipo data) const;
    tipo get_data(int pos) const;
    bool empty()const{ return !used;}
    tipo remove_pos(int pos);
    QString remove_data(tipo data);
    tipo replace_by_position(int pos, tipo data);

    QString get_list() const;
};

//FIM CABEÇALHOS

#include "ArrayList.h"



template< class tipo>
ArrayList<tipo>::ArrayList():
    used(0),
    size(0),
    array(0)
{
    try{
        array = new tipo[5];
        this->size = 5;
    }catch(std::bad_alloc){throw QString("Bad_Alloc");}
}
template< class tipo>
ArrayList<tipo>::ArrayList(int size):
    used(0),
    size(0),
    array(0)
{
    try{
        if (size <1) throw QString("Tamanho deve ser postivo");
        array = new tipo[size];
        this->size = size;
    }catch(std::bad_alloc){throw QString ("Bad_Alloc");}
}
template< class tipo>
void ArrayList<tipo>::increase_size()
{   if (size>1){
        tipo *aux = new tipo[int(size+size*0.5)];
        for (int i=0; i < size; i++)
            aux[i]=array[i];
        delete[] array;
        array = aux;
        size = int(size+size*0.5);
    }else{
        tipo *aux = new tipo[5];
        for (int i=0; i < size; i++)
            aux[i]=array[i];
        delete array;
        array = aux;
        size = 5;
    }
}
template< class tipo>
void ArrayList<tipo>::push_front(tipo data)
{
    if (!used){
        array[0]=data;
        used++;
    }else{
        if(used>=size)
            this->increase_size();
        for(int i=used;i>0; i--)
            {array[i] = array[i-1];}
        array[0]=data;
        used++;
    }
}
template< class tipo>
void ArrayList<tipo>::push_back(tipo data)
{
        if (used>=size)
            this->increase_size();
        array[used] = data;
        used++;
}
template< class tipo>
void ArrayList<tipo>::push_middle(int pos, tipo data)
{
    if (pos<1) throw QString("Posição deve ser positiva");
    if (pos-1>used) throw QString("Não é posível realizar inserção deixando lacunas entre elementos");
    if (pos==1) this->push_front(data);
    else{
        if (pos-1==used) this->push_back(data);
        else{
         if (used==size) this->increase_size();
         for(int i=used;i>pos-1; i--)
             {array[i] = array[i-1];}
         array[pos-1]= data;
         used++;
        }
    }
}
template< class tipo>
tipo ArrayList<tipo>::operator[](int pos)
{
 tipo aux = this->get_data(pos);
 return aux;
}
template< class tipo>
QString ArrayList<tipo>::search_data( tipo data ) const
{
    if (!used) return QString("Não existem informações na lista");
    QString output="";
    for (int i =0; i < used; i++){
        if (array[i] == data){
        output += QString::number(i+1)+ "  ";
        }
    }
    return output;
}
template< class tipo>
tipo ArrayList<tipo>::get_data(int pos) const
{
    if(pos<1) throw QString("Posição deve ser positiva");
    if(pos>used) throw QString("Posição não criada e/ou não contem informação");
    return array[pos-1];
}
template< class tipo>
tipo ArrayList<tipo>::remove_pos( int pos)
{
    if(pos<1) throw QString("Posição deve ser positiva");
    if(pos>used) throw QString("Posição não criada e/ou não contem informação");
    tipo aux = array[pos-1];
    for(int i=pos-1;i<used; i++)
        {array[i] = array[i+1];}
    used--;
    return aux;
}
template< class tipo>
QString ArrayList<tipo>::remove_data(tipo data)
{   QString output = this->search_data(data);
    for (int i =0; i < used; i++){
        if (array[i] == data){
            this->remove_pos(i+1);
            i--;
        }
    }
    return output;
}
template< class tipo>
tipo ArrayList<tipo>::replace_by_position(int pos,tipo data)
{
    if(pos<1) throw QString("Posição deve ser positiva");
    if(pos>used) throw QString("Posição não criada e/ou não contem informação");
    tipo aux = array[pos-1];
    array[pos-1] = data;
    return aux;
}



template< class tipo>
QString ArrayList<tipo>::get_list() const
{   if (!used) throw QString ("Não é possível retornar a lista, não possui elementos ainda");
    QString output="";
    for (int i=0; i<used;i++)
        output+= QString::number(array[i])+'\t';

    return output ;
}

}//fim namespace

#endif // ARRAYLIST_H
