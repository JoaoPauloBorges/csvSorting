#include "Persistencia.h"
namespace  TP2 {// Inicio



Persistencia::Persistencia(QString nome_no_disco):
    nome_no_disco(nome_no_disco)
{
}

ArrayList<Piloto> *Persistencia::carregar_dados() const
{
    try {
        ArrayList<Piloto> *array_de_pilotos = new ArrayList<Piloto>;
        std::ifstream arquivo;
        arquivo.open(nome_no_disco.toStdString().c_str());
        if(!arquivo.is_open()) throw QString("Erro na Abertura do Arquivo");

        std::string linha;
        std::getline(arquivo,linha);
        QString linhaAux;
        QStringList lista;
        Piloto piloto;
        while(!arquivo.eof()){
            linhaAux = QString::fromStdString(linha);
            lista = linhaAux.split(',');
            if(lista.length()!=7) throw QString("Linha do arquivo faltando dados");
            piloto.setCodigo(lista[0]);
            piloto.setNome(lista[1]);
            piloto.setPais(lista[2]);
            piloto.setIdade(lista[3]);
            piloto.setEquipe(lista[4]);
            piloto.setCarro(lista[5]);
            piloto.setPontos(lista[6]);
            array_de_pilotos->push_front(piloto);
            std::getline(arquivo,linha);
        }
        arquivo.close();
        return array_de_pilotos;
    } catch (QString &erro) {
        throw erro;
    }catch(std::bad_alloc&){
        throw QString("ArrayList não alocado");
    }

}


}//fim
