// Copyright (c) 2021 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef CREATEOPRETURNDIALOG_H
#define CREATEOPRETURNDIALOG_H

#include <QDialog>

class PlatformStyle;

namespace Ui {
class CreateOPReturnDialog;
}

class CreateOPReturnDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CreateOPReturnDialog(const PlatformStyle *_platformStyle, QWidget *parent = nullptr);
    ~CreateOPReturnDialog();

private Q_SLOTS:
    void on_pushButtonCreate_clicked();

private:
    Ui::CreateOPReturnDialog *ui;

    const PlatformStyle *platformStyle = nullptr;

};

#endif // CREATEOPRETURNDIALOG_H
