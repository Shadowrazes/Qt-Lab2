#include "inputdialog_hugo_naumov.h"
#include <QLabel>
#include <QLayout>
#include <QString>
#include <QPushButton>

InputDialog::InputDialog(QWidget* widget) : QDialog(widget)
{
    m_txtName = new QLineEdit;
    m_txtSurname = new QLineEdit;

    QLabel* nameLabel = new QLabel("&Name");
    QLabel* surnameLabel = new QLabel("&Surname");

    nameLabel->setBuddy(m_txtName);
    surnameLabel->setBuddy(m_txtSurname);

    QPushButton* cmdOk = new QPushButton("&Ok");
    QPushButton* cmdCancel = new QPushButton("&Cancel");

    connect(cmdOk, SIGNAL(clicked()), SLOT(accept()));
    connect(cmdCancel, SIGNAL(clicked()), SLOT(reject()));

    QGridLayout* topLayout = new QGridLayout;
    topLayout->addWidget(nameLabel, 0, 0);
    topLayout->addWidget(surnameLabel, 1, 0);
    topLayout->addWidget(m_txtName, 0, 1);
    topLayout->addWidget(m_txtSurname, 1, 1);
    topLayout->addWidget(cmdOk, 2, 0);
    topLayout->addWidget(cmdCancel, 2, 1);
    setLayout(topLayout);
}

QString InputDialog::Name() const{
    return m_txtName->text();
}

QString InputDialog::Surname() const{
    return m_txtSurname->text();
}
