#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QFileDialog>
#include<OrdenarPorCarro.h>
#include<OrdenarPorCodigo.h>
#include<OrdenarPorEquipe.h>
#include<OrdenarPorNome.h>
#include<OrdenarPorPais.h>
#include<OrdenarPorPontos.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionAbrir_triggered();
    void jogar_na_tela();

    void on_pushButtonOrdenar_clicked();

private:
    Ui::MainWindow *ui;
    TP2::ArrayList<TP2::Piloto> *saida;
};

#endif // MAINWINDOW_H
