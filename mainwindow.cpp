#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    saida(0)
{
    ui->setupUi(this);
    ui->pushButtonOrdenar->setEnabled(false);
}

MainWindow::~MainWindow()
{
    if(saida) delete[] saida;
    delete ui;
}

void MainWindow::on_actionAbrir_triggered()
{
    try{
    QString nomeNoDisco = QFileDialog::getOpenFileName(this,"Abrir Arquivo",QDir::currentPath(),"Arquivos Textos (*.csv *.txt)");
    if(nomeNoDisco.isEmpty()) throw QString("Arquivo nao foi selecionado");

    TP2::Persistencia teste(nomeNoDisco);
    saida = teste.carregar_dados();
    ui->tableWidget->setRowCount(saida->return_used());
    this->jogar_na_tela();
    ui->tableWidget->resizeColumnsToContents();
    ui->pushButtonOrdenar->setEnabled(true);
}catch(QString &erro){QMessageBox::information(this,"ERRO",erro);}

}

void MainWindow::jogar_na_tela()
{
    for(int i=0; i < saida->return_used(); i++)
    {
        ui->tableWidget->setItem(i,0,new QTableWidgetItem (saida->get_data(i+1).getCodigo()));
        ui->tableWidget->setItem(i,1,new QTableWidgetItem (saida->get_data(i+1).getNome()));
        ui->tableWidget->setItem(i,2,new QTableWidgetItem (saida->get_data(i+1).getPais()));
        ui->tableWidget->setItem(i,3,new QTableWidgetItem (saida->get_data(i+1).getIdade()));
        ui->tableWidget->setItem(i,4,new QTableWidgetItem (saida->get_data(i+1).getEquipe()));
        ui->tableWidget->setItem(i,5,new QTableWidgetItem (saida->get_data(i+1).getCarro()));
        ui->tableWidget->setItem(i,6,new QTableWidgetItem (QString::number(saida->get_data(i+1).getPontos())));

    }


}

void MainWindow::on_pushButtonOrdenar_clicked()
{   QString aux = ui->comboBox->currentText();
    if(aux=="Codigo")
    {
        TP2::OrdenarPorCodigo objeto(saida);
        objeto.ordenar();
        jogar_na_tela();
    }
    if(aux=="Nome")
    {
        TP2::OrdenarPorNome objeto(saida);
        objeto.ordenar();
        jogar_na_tela();
    }
    if(aux=="País")
    {
        TP2::OrdenarPorPais objeto(saida);
        objeto.ordenar();
        jogar_na_tela();
    }
    if(aux=="Equipe")
    {
        TP2::OrdenarPorEquipe objeto(saida);
        objeto.ordenar();
        jogar_na_tela();
    }
    if(aux=="Carro")
    {
        TP2::OrdenarPorCarro objeto(saida);
        objeto.ordenar();
        jogar_na_tela();
    }
    if(aux=="Pontos")
    {
        TP2::OrdenarPorPontos objeto(saida);
        objeto.ordenar();
        jogar_na_tela();
    }
}
