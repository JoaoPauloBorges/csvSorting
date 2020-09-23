#ifndef PILOTO_H
#define PILOTO_H
#include<QString>

namespace TP2{//inicio

class Piloto
{
private:
    QString codigo;
    QString nome;
    QString pais;
    QString idade;
    QString equipe;
    QString carro;
    int pontos;

public:
    Piloto();
    QString getCodigo() const {return codigo;}
    void setCodigo(QString codigo) { this->codigo = codigo; }
    QString getNome() const   {      return nome;  }
    void setNome(const QString nome)   { this->nome = nome; }
    QString getPais() const{    return pais;  }
    void setPais(const QString pais) {  this->pais = pais;  }
    QString getIdade() const { return idade; }
    void setIdade(const QString idade) {    this->idade = idade; }
    QString getEquipe() const {  return equipe; }
    void setEquipe(const QString equipe){ this->equipe = equipe;  }
    QString getCarro() const { return carro; }
    void setCarro(const QString carro) { this->carro = carro;}
    int getPontos() const { return pontos;}
    void setPontos(const QString pontos) {   this->pontos = pontos.toInt(); }
};




}//fim namespace
#endif // PILOTO_H
