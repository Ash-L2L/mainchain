// Copyright (c) 2021 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef MANAGENEWSDIALOG_H
#define MANAGENEWSDIALOG_H

#include <QDialog>

namespace Ui {
class ManageNewsDialog;
}

QT_BEGIN_NAMESPACE
class QMenu;
class QPoint;
QT_END_NAMESPACE

class NewsType;
class NewsTypesTableModel;
class PlatformStyle;

class ManageNewsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ManageNewsDialog(const PlatformStyle *_platformStyle, QWidget *parent = nullptr);
    ~ManageNewsDialog();

    void setNewsTypesModel(NewsTypesTableModel* model);

private Q_SLOTS:
    void on_pushButtonWrite_clicked();
    void on_pushButtonAdd_clicked();
    void on_pushButtonPaste_clicked();
    void on_pushButtonExport_clicked();
    void on_pushButtonImport_clicked();
    void on_pushButtonDefaults_clicked();
    void contextualMenu(const QPoint &);
    void copyShareURL();
    void showQR();
    void removeType();

Q_SIGNALS:
    void NewTypeCreated();

private:
    Ui::ManageNewsDialog *ui;

    QMenu *contextMenu = nullptr;
    NewsTypesTableModel *newsTypesModel = nullptr;
    const PlatformStyle *platformStyle = nullptr;
};

#endif // MANAGENEWSDIALOG_H
