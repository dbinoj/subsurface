#ifndef DIVECOMPUTERMANAGEMENTDIALOG_H
#define DIVECOMPUTERMANAGEMENTDIALOG_H
#include <QDialog>

class QModelIndex;
class DiveComputerModel;
namespace Ui{
	class DiveComputerManagementDialog;
};

class DiveComputerManagementDialog : public QDialog{
Q_OBJECT

public:
    static DiveComputerManagementDialog *instance();
	void update();

public  slots:
	void tryRemove(const QModelIndex& index);

private:
    explicit DiveComputerManagementDialog(QWidget* parent = 0, Qt::WindowFlags f = 0);
    Ui::DiveComputerManagementDialog *ui;
	DiveComputerModel *model;
};

#endif