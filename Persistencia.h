#ifndef PERSISTENCIA_H
#define PERSISTENCIA_H
#include<QString>
#include<fstream>
#include<ArrayList.h>
#include<Piloto.h>
#include<QStringList>
#include<iostream>

namespace TP2{//inicio
class Persistencia
{
private:
    QString nome_no_disco;
public:
    Persistencia(QString nome_no_disco);
    ArrayList<Piloto> *carregar_dados()const;
};
}//fimnamespace

#endif // PERSISTENCIA_H
