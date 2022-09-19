#ifndef STARTDIALOG_HUGO_NAUMOV_H
#define STARTDIALOG_HUGO_NAUMOV_H

#include <QWidget>
#include <QPushButton>
#include <QMessageBox>
#include "inputdialog_hugo_naumov.h"    // Почему файлы создаются с нижним регистром??

class StartDialog : public QPushButton
{
    Q_OBJECT

public:
    StartDialog(QWidget* widget = nullptr) : QPushButton("Click it!", widget)
    {
        connect(this, SIGNAL(clicked()), SLOT(slotButtonClicked()));
    }
public slots:
    void slotButtonClicked()
    {
        InputDialog* inputDialog = new InputDialog;
        if(inputDialog->exec() == QDialog::Accepted)

        QMessageBox::information(0, "Information about you: ",
                                 "Name: " + inputDialog->Name() +
                                 "\nSurname: " + inputDialog->Surname());

        delete inputDialog;
    }
};

#endif // STARTDIALOG_HUGO_NAUMOV_H
