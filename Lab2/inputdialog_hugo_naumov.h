#ifndef INPUTDIALOG_H
#define INPUTDIALOG_H

#include <QDialog>
#include <QLineEdit>

class InputDialog : public QDialog
{
    Q_OBJECT
private:
    QLineEdit* m_txtName = nullptr;
    QLineEdit* m_txtSurname = nullptr;
public:
    InputDialog(QWidget* widget = nullptr);

    QString Name() const;
    QString Surname() const;
};

#endif // INPUTDIALOG_H
