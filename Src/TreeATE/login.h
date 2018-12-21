﻿///
/// @brief         login the TreeATE dialog
/// @author        David Yin  2018-12 willage.yin@163.com
/// 
/// @license       GNU GPL v3
///
/// Distributed under the GNU GPL v3 License
/// (See accompanying file LICENSE or copy at
/// http://www.gnu.org/licenses/gpl.html)
///

#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include <QLibrary>

namespace Ui {
class login;
}

#define NTATE_LICENSE_TIME

class TALogin;
class login : public QDialog
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = 0);
    ~login();

    void SetHost(const QString &strHost);
    QString m_strUser;

private slots:
    void on_pushButton_Login_clicked();

    void on_pushButton_Cancel_clicked();

    void on_lineEdit_User_returnPressed();

    void on_lineEdit_Pwd_textChanged(const QString &arg1);

private:
    Ui::login *ui;
    TALogin* m_pLogin;
    QLibrary m_lib;
};

#endif // LOGIN_H
