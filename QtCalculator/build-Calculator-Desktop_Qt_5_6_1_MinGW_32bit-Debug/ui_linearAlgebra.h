/********************************************************************************
** Form generated from reading UI file 'linearAlgebra.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LINEARALGEBRA_H
#define UI_LINEARALGEBRA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_linearAlgebra
{
public:
    QGroupBox *MatrixGroupBox;
    QSpinBox *inputRowSpinBox;
    QLabel *label;
    QLabel *label_2;
    QSpinBox *inputColSpinBox;
    QComboBox *inputComboBox;
    QPushButton *inputPushButton;
    QTableWidget *inputTableWidget;
    QPushButton *clearPushButton;
    QGroupBox *resultGroupBox;
    QComboBox *outputComboBox;
    QPushButton *outputPushButton;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *rowLineEdit;
    QLineEdit *colLineEdit;
    QTableWidget *outputTableWidget;
    QGroupBox *functionGroupBox;
    QLabel *label_5;
    QSpinBox *precisionSpinBox;
    QCheckBox *fileInCheckBox;
    QCheckBox *fileOutCheckBox;
    QComboBox *basicFirst_ComboBox;
    QComboBox *basicSecond_ComboBox;
    QComboBox *basicFourth_ComboBox;
    QRadioButton *det_radioButton;
    QRadioButton *rank_radioButton;
    QRadioButton *inver_radioButton;
    QRadioButton *transpose_radioButton;
    QRadioButton *eigenvalue_radioButton;
    QRadioButton *eigenvector_radioButton;
    QPushButton *Calc_pushButton;
    QRadioButton *isOrthogonal_radioButton;
    QRadioButton *homogen_radioButton;
    QRadioButton *inhomogen_radioButton;
    QLabel *label_6;
    QComboBox *basicThird_ComboBox;
    QComboBox *choiceComboBox;
    QLabel *label_7;
    QSpinBox *colWidthSpinBox;
    QLabel *label_8;
    QCheckBox *autoShowResultCheckBox;
    QRadioButton *assign_radioButton;
    QComboBox *assignFirst_ComboBox;
    QComboBox *assignSecond_ComboBox;
    QLabel *label_9;
    QRadioButton *basicCalc_radioButton;
    QRadioButton *adjoint_radioButton;
    QRadioButton *maxEigenValue_radioButton;
    QRadioButton *ladder_radioButton;
    QRadioButton *eigenpolyomial_radioButton;
    QRadioButton *generInver_radioButton;
    QRadioButton *matrixQR_radioButton;
    QCheckBox *autoFillingCheckBox;
    QDoubleSpinBox *autoFillingDoubleSpinBox;
    QFrame *line_2;
    QLabel *label_10;
    QSpinBox *power_SpinBox;
    QRadioButton *power_radioButton;
    QComboBox *powerSecond_ComboBox;
    QComboBox *powerFirst_ComboBox;
    QLabel *label_11;

    void setupUi(QWidget *linearAlgebra)
    {
        if (linearAlgebra->objectName().isEmpty())
            linearAlgebra->setObjectName(QStringLiteral("linearAlgebra"));
        linearAlgebra->resize(675, 434);
        linearAlgebra->setMinimumSize(QSize(675, 434));
        linearAlgebra->setMaximumSize(QSize(675, 434));
        QFont font;
        font.setPointSize(10);
        linearAlgebra->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/services.png"), QSize(), QIcon::Normal, QIcon::Off);
        linearAlgebra->setWindowIcon(icon);
        MatrixGroupBox = new QGroupBox(linearAlgebra);
        MatrixGroupBox->setObjectName(QStringLiteral("MatrixGroupBox"));
        MatrixGroupBox->setGeometry(QRect(0, 0, 351, 260));
        MatrixGroupBox->setFont(font);
        inputRowSpinBox = new QSpinBox(MatrixGroupBox);
        inputRowSpinBox->setObjectName(QStringLiteral("inputRowSpinBox"));
        inputRowSpinBox->setGeometry(QRect(43, 20, 51, 21));
        inputRowSpinBox->setMinimum(1);
        inputRowSpinBox->setMaximum(100);
        label = new QLabel(MatrixGroupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 20, 41, 20));
        label_2 = new QLabel(MatrixGroupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 20, 41, 20));
        inputColSpinBox = new QSpinBox(MatrixGroupBox);
        inputColSpinBox->setObjectName(QStringLiteral("inputColSpinBox"));
        inputColSpinBox->setGeometry(QRect(135, 20, 51, 21));
        inputColSpinBox->setMinimum(1);
        inputColSpinBox->setMaximum(100);
        inputComboBox = new QComboBox(MatrixGroupBox);
        inputComboBox->setObjectName(QStringLiteral("inputComboBox"));
        inputComboBox->setGeometry(QRect(283, 20, 58, 22));
        inputPushButton = new QPushButton(MatrixGroupBox);
        inputPushButton->setObjectName(QStringLiteral("inputPushButton"));
        inputPushButton->setGeometry(QRect(235, 20, 41, 23));
        inputTableWidget = new QTableWidget(MatrixGroupBox);
        if (inputTableWidget->columnCount() < 1)
            inputTableWidget->setColumnCount(1);
        if (inputTableWidget->rowCount() < 1)
            inputTableWidget->setRowCount(1);
        inputTableWidget->setObjectName(QStringLiteral("inputTableWidget"));
        inputTableWidget->setGeometry(QRect(10, 50, 331, 200));
        inputTableWidget->setEditTriggers(QAbstractItemView::AllEditTriggers);
        inputTableWidget->setRowCount(1);
        inputTableWidget->setColumnCount(1);
        clearPushButton = new QPushButton(MatrixGroupBox);
        clearPushButton->setObjectName(QStringLiteral("clearPushButton"));
        clearPushButton->setGeometry(QRect(190, 20, 41, 23));
        QFont font1;
        font1.setPointSize(9);
        clearPushButton->setFont(font1);
        resultGroupBox = new QGroupBox(linearAlgebra);
        resultGroupBox->setObjectName(QStringLiteral("resultGroupBox"));
        resultGroupBox->setGeometry(QRect(350, 0, 325, 260));
        resultGroupBox->setFont(font);
        outputComboBox = new QComboBox(resultGroupBox);
        outputComboBox->setObjectName(QStringLiteral("outputComboBox"));
        outputComboBox->setGeometry(QRect(250, 20, 61, 22));
        outputPushButton = new QPushButton(resultGroupBox);
        outputPushButton->setObjectName(QStringLiteral("outputPushButton"));
        outputPushButton->setGeometry(QRect(190, 20, 51, 23));
        label_3 = new QLabel(resultGroupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 20, 41, 20));
        label_4 = new QLabel(resultGroupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(100, 20, 41, 20));
        rowLineEdit = new QLineEdit(resultGroupBox);
        rowLineEdit->setObjectName(QStringLiteral("rowLineEdit"));
        rowLineEdit->setGeometry(QRect(50, 20, 41, 20));
        rowLineEdit->setReadOnly(true);
        colLineEdit = new QLineEdit(resultGroupBox);
        colLineEdit->setObjectName(QStringLiteral("colLineEdit"));
        colLineEdit->setGeometry(QRect(140, 20, 41, 20));
        colLineEdit->setReadOnly(true);
        outputTableWidget = new QTableWidget(resultGroupBox);
        if (outputTableWidget->columnCount() < 1)
            outputTableWidget->setColumnCount(1);
        if (outputTableWidget->rowCount() < 1)
            outputTableWidget->setRowCount(1);
        outputTableWidget->setObjectName(QStringLiteral("outputTableWidget"));
        outputTableWidget->setGeometry(QRect(5, 50, 311, 200));
        outputTableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        outputTableWidget->setRowCount(1);
        outputTableWidget->setColumnCount(1);
        functionGroupBox = new QGroupBox(linearAlgebra);
        functionGroupBox->setObjectName(QStringLiteral("functionGroupBox"));
        functionGroupBox->setGeometry(QRect(0, 260, 671, 171));
        functionGroupBox->setFont(font);
        label_5 = new QLabel(functionGroupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 20, 41, 16));
        precisionSpinBox = new QSpinBox(functionGroupBox);
        precisionSpinBox->setObjectName(QStringLiteral("precisionSpinBox"));
        precisionSpinBox->setGeometry(QRect(60, 20, 42, 22));
        precisionSpinBox->setMaximum(10);
        precisionSpinBox->setValue(6);
        fileInCheckBox = new QCheckBox(functionGroupBox);
        fileInCheckBox->setObjectName(QStringLiteral("fileInCheckBox"));
        fileInCheckBox->setGeometry(QRect(10, 70, 91, 16));
        fileOutCheckBox = new QCheckBox(functionGroupBox);
        fileOutCheckBox->setObjectName(QStringLiteral("fileOutCheckBox"));
        fileOutCheckBox->setGeometry(QRect(10, 95, 101, 16));
        basicFirst_ComboBox = new QComboBox(functionGroupBox);
        basicFirst_ComboBox->setObjectName(QStringLiteral("basicFirst_ComboBox"));
        basicFirst_ComboBox->setGeometry(QRect(420, 17, 61, 22));
        basicSecond_ComboBox = new QComboBox(functionGroupBox);
        basicSecond_ComboBox->setObjectName(QStringLiteral("basicSecond_ComboBox"));
        basicSecond_ComboBox->setGeometry(QRect(497, 17, 61, 22));
        basicFourth_ComboBox = new QComboBox(functionGroupBox);
        basicFourth_ComboBox->setObjectName(QStringLiteral("basicFourth_ComboBox"));
        basicFourth_ComboBox->setGeometry(QRect(600, 17, 61, 22));
        det_radioButton = new QRadioButton(functionGroupBox);
        det_radioButton->setObjectName(QStringLiteral("det_radioButton"));
        det_radioButton->setGeometry(QRect(130, 90, 101, 16));
        rank_radioButton = new QRadioButton(functionGroupBox);
        rank_radioButton->setObjectName(QStringLiteral("rank_radioButton"));
        rank_radioButton->setGeometry(QRect(130, 70, 91, 16));
        inver_radioButton = new QRadioButton(functionGroupBox);
        inver_radioButton->setObjectName(QStringLiteral("inver_radioButton"));
        inver_radioButton->setGeometry(QRect(270, 70, 121, 16));
        transpose_radioButton = new QRadioButton(functionGroupBox);
        transpose_radioButton->setObjectName(QStringLiteral("transpose_radioButton"));
        transpose_radioButton->setGeometry(QRect(130, 150, 141, 16));
        eigenvalue_radioButton = new QRadioButton(functionGroupBox);
        eigenvalue_radioButton->setObjectName(QStringLiteral("eigenvalue_radioButton"));
        eigenvalue_radioButton->setGeometry(QRect(270, 90, 101, 16));
        eigenvector_radioButton = new QRadioButton(functionGroupBox);
        eigenvector_radioButton->setObjectName(QStringLiteral("eigenvector_radioButton"));
        eigenvector_radioButton->setGeometry(QRect(270, 110, 101, 16));
        Calc_pushButton = new QPushButton(functionGroupBox);
        Calc_pushButton->setObjectName(QStringLiteral("Calc_pushButton"));
        Calc_pushButton->setGeometry(QRect(590, 140, 75, 23));
        isOrthogonal_radioButton = new QRadioButton(functionGroupBox);
        isOrthogonal_radioButton->setObjectName(QStringLiteral("isOrthogonal_radioButton"));
        isOrthogonal_radioButton->setGeometry(QRect(410, 150, 171, 16));
        homogen_radioButton = new QRadioButton(functionGroupBox);
        homogen_radioButton->setObjectName(QStringLiteral("homogen_radioButton"));
        homogen_radioButton->setGeometry(QRect(410, 90, 221, 16));
        inhomogen_radioButton = new QRadioButton(functionGroupBox);
        inhomogen_radioButton->setObjectName(QStringLiteral("inhomogen_radioButton"));
        inhomogen_radioButton->setGeometry(QRect(410, 110, 231, 16));
        label_6 = new QLabel(functionGroupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(485, 17, 16, 20));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        label_6->setFont(font2);
        basicThird_ComboBox = new QComboBox(functionGroupBox);
        basicThird_ComboBox->setObjectName(QStringLiteral("basicThird_ComboBox"));
        basicThird_ComboBox->setGeometry(QRect(563, 17, 31, 22));
        choiceComboBox = new QComboBox(functionGroupBox);
        choiceComboBox->setObjectName(QStringLiteral("choiceComboBox"));
        choiceComboBox->setGeometry(QRect(230, 45, 61, 22));
        label_7 = new QLabel(functionGroupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(133, 45, 91, 20));
        QFont font3;
        font3.setPointSize(11);
        label_7->setFont(font3);
        colWidthSpinBox = new QSpinBox(functionGroupBox);
        colWidthSpinBox->setObjectName(QStringLiteral("colWidthSpinBox"));
        colWidthSpinBox->setGeometry(QRect(60, 42, 42, 22));
        colWidthSpinBox->setMinimum(20);
        colWidthSpinBox->setMaximum(100);
        colWidthSpinBox->setValue(50);
        label_8 = new QLabel(functionGroupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 45, 51, 16));
        autoShowResultCheckBox = new QCheckBox(functionGroupBox);
        autoShowResultCheckBox->setObjectName(QStringLiteral("autoShowResultCheckBox"));
        autoShowResultCheckBox->setGeometry(QRect(10, 120, 101, 16));
        autoShowResultCheckBox->setChecked(true);
        assign_radioButton = new QRadioButton(functionGroupBox);
        assign_radioButton->setObjectName(QStringLiteral("assign_radioButton"));
        assign_radioButton->setGeometry(QRect(130, 20, 71, 16));
        assign_radioButton->setChecked(true);
        assignFirst_ComboBox = new QComboBox(functionGroupBox);
        assignFirst_ComboBox->setObjectName(QStringLiteral("assignFirst_ComboBox"));
        assignFirst_ComboBox->setGeometry(QRect(200, 17, 61, 22));
        assignSecond_ComboBox = new QComboBox(functionGroupBox);
        assignSecond_ComboBox->setObjectName(QStringLiteral("assignSecond_ComboBox"));
        assignSecond_ComboBox->setGeometry(QRect(275, 17, 61, 22));
        label_9 = new QLabel(functionGroupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(255, 17, 21, 20));
        label_9->setFont(font2);
        basicCalc_radioButton = new QRadioButton(functionGroupBox);
        basicCalc_radioButton->setObjectName(QStringLiteral("basicCalc_radioButton"));
        basicCalc_radioButton->setGeometry(QRect(340, 20, 81, 16));
        basicCalc_radioButton->setChecked(false);
        adjoint_radioButton = new QRadioButton(functionGroupBox);
        adjoint_radioButton->setObjectName(QStringLiteral("adjoint_radioButton"));
        adjoint_radioButton->setGeometry(QRect(130, 130, 121, 16));
        maxEigenValue_radioButton = new QRadioButton(functionGroupBox);
        maxEigenValue_radioButton->setObjectName(QStringLiteral("maxEigenValue_radioButton"));
        maxEigenValue_radioButton->setGeometry(QRect(410, 130, 151, 16));
        ladder_radioButton = new QRadioButton(functionGroupBox);
        ladder_radioButton->setObjectName(QStringLiteral("ladder_radioButton"));
        ladder_radioButton->setGeometry(QRect(130, 110, 121, 16));
        eigenpolyomial_radioButton = new QRadioButton(functionGroupBox);
        eigenpolyomial_radioButton->setObjectName(QStringLiteral("eigenpolyomial_radioButton"));
        eigenpolyomial_radioButton->setGeometry(QRect(270, 130, 131, 16));
        generInver_radioButton = new QRadioButton(functionGroupBox);
        generInver_radioButton->setObjectName(QStringLiteral("generInver_radioButton"));
        generInver_radioButton->setGeometry(QRect(410, 70, 231, 16));
        matrixQR_radioButton = new QRadioButton(functionGroupBox);
        matrixQR_radioButton->setObjectName(QStringLiteral("matrixQR_radioButton"));
        matrixQR_radioButton->setGeometry(QRect(270, 150, 141, 16));
        autoFillingCheckBox = new QCheckBox(functionGroupBox);
        autoFillingCheckBox->setObjectName(QStringLiteral("autoFillingCheckBox"));
        autoFillingCheckBox->setGeometry(QRect(10, 147, 51, 16));
        autoFillingCheckBox->setChecked(true);
        autoFillingDoubleSpinBox = new QDoubleSpinBox(functionGroupBox);
        autoFillingDoubleSpinBox->setObjectName(QStringLiteral("autoFillingDoubleSpinBox"));
        autoFillingDoubleSpinBox->setGeometry(QRect(60, 145, 62, 22));
        autoFillingDoubleSpinBox->setMinimum(-100);
        autoFillingDoubleSpinBox->setMaximum(100);
        line_2 = new QFrame(functionGroupBox);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(115, 9, 20, 161));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_10 = new QLabel(functionGroupBox);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(480, 45, 21, 20));
        label_10->setFont(font2);
        power_SpinBox = new QSpinBox(functionGroupBox);
        power_SpinBox->setObjectName(QStringLiteral("power_SpinBox"));
        power_SpinBox->setGeometry(QRect(600, 45, 51, 22));
        power_SpinBox->setMinimum(1);
        power_SpinBox->setMaximum(100);
        power_SpinBox->setValue(2);
        power_radioButton = new QRadioButton(functionGroupBox);
        power_radioButton->setObjectName(QStringLiteral("power_radioButton"));
        power_radioButton->setGeometry(QRect(340, 45, 71, 16));
        power_radioButton->setChecked(false);
        powerSecond_ComboBox = new QComboBox(functionGroupBox);
        powerSecond_ComboBox->setObjectName(QStringLiteral("powerSecond_ComboBox"));
        powerSecond_ComboBox->setGeometry(QRect(500, 45, 61, 22));
        powerFirst_ComboBox = new QComboBox(functionGroupBox);
        powerFirst_ComboBox->setObjectName(QStringLiteral("powerFirst_ComboBox"));
        powerFirst_ComboBox->setGeometry(QRect(420, 45, 61, 22));
        label_11 = new QLabel(functionGroupBox);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(570, 40, 16, 20));
        QFont font4;
        font4.setPointSize(9);
        font4.setBold(false);
        font4.setWeight(50);
        label_11->setFont(font4);
        QWidget::setTabOrder(inputRowSpinBox, inputColSpinBox);
        QWidget::setTabOrder(inputColSpinBox, clearPushButton);
        QWidget::setTabOrder(clearPushButton, inputPushButton);
        QWidget::setTabOrder(inputPushButton, inputComboBox);
        QWidget::setTabOrder(inputComboBox, inputTableWidget);
        QWidget::setTabOrder(inputTableWidget, rowLineEdit);
        QWidget::setTabOrder(rowLineEdit, colLineEdit);
        QWidget::setTabOrder(colLineEdit, outputPushButton);
        QWidget::setTabOrder(outputPushButton, outputComboBox);
        QWidget::setTabOrder(outputComboBox, outputTableWidget);
        QWidget::setTabOrder(outputTableWidget, precisionSpinBox);
        QWidget::setTabOrder(precisionSpinBox, colWidthSpinBox);
        QWidget::setTabOrder(colWidthSpinBox, fileInCheckBox);
        QWidget::setTabOrder(fileInCheckBox, fileOutCheckBox);
        QWidget::setTabOrder(fileOutCheckBox, autoShowResultCheckBox);
        QWidget::setTabOrder(autoShowResultCheckBox, autoFillingCheckBox);
        QWidget::setTabOrder(autoFillingCheckBox, autoFillingDoubleSpinBox);
        QWidget::setTabOrder(autoFillingDoubleSpinBox, assign_radioButton);
        QWidget::setTabOrder(assign_radioButton, assignFirst_ComboBox);
        QWidget::setTabOrder(assignFirst_ComboBox, assignSecond_ComboBox);
        QWidget::setTabOrder(assignSecond_ComboBox, basicCalc_radioButton);
        QWidget::setTabOrder(basicCalc_radioButton, basicFirst_ComboBox);
        QWidget::setTabOrder(basicFirst_ComboBox, basicSecond_ComboBox);
        QWidget::setTabOrder(basicSecond_ComboBox, basicThird_ComboBox);
        QWidget::setTabOrder(basicThird_ComboBox, basicFourth_ComboBox);
        QWidget::setTabOrder(basicFourth_ComboBox, choiceComboBox);
        QWidget::setTabOrder(choiceComboBox, power_radioButton);
        QWidget::setTabOrder(power_radioButton, powerFirst_ComboBox);
        QWidget::setTabOrder(powerFirst_ComboBox, powerSecond_ComboBox);
        QWidget::setTabOrder(powerSecond_ComboBox, power_SpinBox);
        QWidget::setTabOrder(power_SpinBox, rank_radioButton);
        QWidget::setTabOrder(rank_radioButton, det_radioButton);
        QWidget::setTabOrder(det_radioButton, ladder_radioButton);
        QWidget::setTabOrder(ladder_radioButton, adjoint_radioButton);
        QWidget::setTabOrder(adjoint_radioButton, transpose_radioButton);
        QWidget::setTabOrder(transpose_radioButton, inver_radioButton);
        QWidget::setTabOrder(inver_radioButton, eigenvalue_radioButton);
        QWidget::setTabOrder(eigenvalue_radioButton, eigenvector_radioButton);
        QWidget::setTabOrder(eigenvector_radioButton, eigenpolyomial_radioButton);
        QWidget::setTabOrder(eigenpolyomial_radioButton, matrixQR_radioButton);
        QWidget::setTabOrder(matrixQR_radioButton, generInver_radioButton);
        QWidget::setTabOrder(generInver_radioButton, homogen_radioButton);
        QWidget::setTabOrder(homogen_radioButton, inhomogen_radioButton);
        QWidget::setTabOrder(inhomogen_radioButton, maxEigenValue_radioButton);
        QWidget::setTabOrder(maxEigenValue_radioButton, isOrthogonal_radioButton);
        QWidget::setTabOrder(isOrthogonal_radioButton, Calc_pushButton);

        retranslateUi(linearAlgebra);
        QObject::connect(inputRowSpinBox, SIGNAL(valueChanged(int)), linearAlgebra, SLOT(changeRow(int)));
        QObject::connect(inputColSpinBox, SIGNAL(valueChanged(int)), linearAlgebra, SLOT(changeCol(int)));
        QObject::connect(colWidthSpinBox, SIGNAL(valueChanged(int)), linearAlgebra, SLOT(changeColWidth(int)));
        QObject::connect(assignFirst_ComboBox, SIGNAL(activated(int)), assign_radioButton, SLOT(click()));
        QObject::connect(assignSecond_ComboBox, SIGNAL(activated(int)), assign_radioButton, SLOT(click()));
        QObject::connect(basicFirst_ComboBox, SIGNAL(activated(int)), basicCalc_radioButton, SLOT(click()));
        QObject::connect(basicSecond_ComboBox, SIGNAL(activated(int)), basicCalc_radioButton, SLOT(click()));
        QObject::connect(basicThird_ComboBox, SIGNAL(activated(int)), basicCalc_radioButton, SLOT(click()));
        QObject::connect(basicFourth_ComboBox, SIGNAL(activated(int)), basicCalc_radioButton, SLOT(click()));
        QObject::connect(powerFirst_ComboBox, SIGNAL(activated(int)), power_radioButton, SLOT(click()));
        QObject::connect(powerSecond_ComboBox, SIGNAL(activated(int)), power_radioButton, SLOT(click()));
        QObject::connect(power_SpinBox, SIGNAL(valueChanged(int)), power_radioButton, SLOT(click()));

        QMetaObject::connectSlotsByName(linearAlgebra);
    } // setupUi

    void retranslateUi(QWidget *linearAlgebra)
    {
        linearAlgebra->setWindowTitle(QApplication::translate("linearAlgebra", "LinearAlgebra Tool", 0));
        MatrixGroupBox->setTitle(QApplication::translate("linearAlgebra", "Matrix", 0));
        label->setText(QApplication::translate("linearAlgebra", "Row\357\274\232", 0));
        label_2->setText(QApplication::translate("linearAlgebra", "Col\357\274\232", 0));
        inputComboBox->clear();
        inputComboBox->insertItems(0, QStringList()
         << QApplication::translate("linearAlgebra", "Mat A", 0)
         << QApplication::translate("linearAlgebra", "Mat B", 0)
         << QApplication::translate("linearAlgebra", "Mat C", 0)
        );
        inputPushButton->setText(QApplication::translate("linearAlgebra", "Input", 0));
        clearPushButton->setText(QApplication::translate("linearAlgebra", "Clear", 0));
        resultGroupBox->setTitle(QApplication::translate("linearAlgebra", "Result", 0));
        outputComboBox->clear();
        outputComboBox->insertItems(0, QStringList()
         << QApplication::translate("linearAlgebra", "Mat A", 0)
         << QApplication::translate("linearAlgebra", "Mat B", 0)
         << QApplication::translate("linearAlgebra", "Mat C", 0)
         << QApplication::translate("linearAlgebra", "Mat T", 0)
        );
        outputPushButton->setText(QApplication::translate("linearAlgebra", "Output", 0));
        label_3->setText(QApplication::translate("linearAlgebra", "Row\357\274\232", 0));
        label_4->setText(QApplication::translate("linearAlgebra", "Col\357\274\232", 0));
        functionGroupBox->setTitle(QApplication::translate("linearAlgebra", "Function Area", 0));
        label_5->setText(QApplication::translate("linearAlgebra", "Pre\357\274\232", 0));
        fileInCheckBox->setText(QApplication::translate("linearAlgebra", "File Input", 0));
        fileOutCheckBox->setText(QApplication::translate("linearAlgebra", "File Output", 0));
        basicFirst_ComboBox->clear();
        basicFirst_ComboBox->insertItems(0, QStringList()
         << QApplication::translate("linearAlgebra", "Mat A", 0)
         << QApplication::translate("linearAlgebra", "Mat B", 0)
         << QApplication::translate("linearAlgebra", "Mat C", 0)
        );
        basicSecond_ComboBox->clear();
        basicSecond_ComboBox->insertItems(0, QStringList()
         << QApplication::translate("linearAlgebra", "Mat A", 0)
         << QApplication::translate("linearAlgebra", "Mat B", 0)
         << QApplication::translate("linearAlgebra", "Mat C", 0)
        );
        basicFourth_ComboBox->clear();
        basicFourth_ComboBox->insertItems(0, QStringList()
         << QApplication::translate("linearAlgebra", "Mat A", 0)
         << QApplication::translate("linearAlgebra", "Mat B", 0)
         << QApplication::translate("linearAlgebra", "Mat C", 0)
        );
        det_radioButton->setText(QApplication::translate("linearAlgebra", "Determinant", 0));
        rank_radioButton->setText(QApplication::translate("linearAlgebra", "Rank", 0));
        inver_radioButton->setText(QApplication::translate("linearAlgebra", "Inverse Matrix", 0));
        transpose_radioButton->setText(QApplication::translate("linearAlgebra", "Transpose Matrix", 0));
        eigenvalue_radioButton->setText(QApplication::translate("linearAlgebra", "Eigenvalue", 0));
        eigenvector_radioButton->setText(QApplication::translate("linearAlgebra", "Eigenvector", 0));
        Calc_pushButton->setText(QApplication::translate("linearAlgebra", "Calculate", 0));
        isOrthogonal_radioButton->setText(QApplication::translate("linearAlgebra", "Is Orthogonal Matrix", 0));
        homogen_radioButton->setText(QApplication::translate("linearAlgebra", "Homogeneous Linear Equation", 0));
#ifndef QT_NO_TOOLTIP
        inhomogen_radioButton->setToolTip(QApplication::translate("linearAlgebra", "non-Homogeneous Linear Equation", 0));
#endif // QT_NO_TOOLTIP
        inhomogen_radioButton->setText(QApplication::translate("linearAlgebra", "Inhomogeneous Linear Equation", 0));
        label_6->setText(QApplication::translate("linearAlgebra", "=", 0));
        basicThird_ComboBox->clear();
        basicThird_ComboBox->insertItems(0, QStringList()
         << QApplication::translate("linearAlgebra", "+", 0)
         << QApplication::translate("linearAlgebra", "-", 0)
         << QApplication::translate("linearAlgebra", "*", 0)
        );
        choiceComboBox->clear();
        choiceComboBox->insertItems(0, QStringList()
         << QApplication::translate("linearAlgebra", "Mat A", 0)
         << QApplication::translate("linearAlgebra", "Mat B", 0)
         << QApplication::translate("linearAlgebra", "Mat C", 0)
        );
        label_7->setText(QApplication::translate("linearAlgebra", "Choose Mat\357\274\232", 0));
        label_8->setText(QApplication::translate("linearAlgebra", "Width\357\274\232", 0));
        autoShowResultCheckBox->setText(QApplication::translate("linearAlgebra", "Auto Answer", 0));
        assign_radioButton->setText(QApplication::translate("linearAlgebra", "Assign\357\274\232", 0));
        assignFirst_ComboBox->clear();
        assignFirst_ComboBox->insertItems(0, QStringList()
         << QApplication::translate("linearAlgebra", "Mat A", 0)
         << QApplication::translate("linearAlgebra", "Mat B", 0)
         << QApplication::translate("linearAlgebra", "Mat C", 0)
         << QApplication::translate("linearAlgebra", "Mat T", 0)
        );
        assignSecond_ComboBox->clear();
        assignSecond_ComboBox->insertItems(0, QStringList()
         << QApplication::translate("linearAlgebra", "Mat A", 0)
         << QApplication::translate("linearAlgebra", "Mat B", 0)
         << QApplication::translate("linearAlgebra", "Mat C", 0)
         << QApplication::translate("linearAlgebra", "Mat T", 0)
        );
        label_9->setText(QApplication::translate("linearAlgebra", " =", 0));
        basicCalc_radioButton->setText(QApplication::translate("linearAlgebra", "Basic\357\274\232", 0));
        adjoint_radioButton->setText(QApplication::translate("linearAlgebra", "Adjoint Matrix", 0));
        maxEigenValue_radioButton->setText(QApplication::translate("linearAlgebra", "Maximum Eigenvalue", 0));
        ladder_radioButton->setText(QApplication::translate("linearAlgebra", "Ladder Matrix", 0));
        eigenpolyomial_radioButton->setText(QApplication::translate("linearAlgebra", "Eigenpolynomial", 0));
        generInver_radioButton->setText(QApplication::translate("linearAlgebra", "Generalized Inverse Matrix", 0));
        matrixQR_radioButton->setText(QApplication::translate("linearAlgebra", "QR Decomposition", 0));
        autoFillingCheckBox->setText(QApplication::translate("linearAlgebra", "Fill", 0));
        label_10->setText(QApplication::translate("linearAlgebra", " =", 0));
        power_radioButton->setText(QApplication::translate("linearAlgebra", "Power\357\274\232", 0));
        powerSecond_ComboBox->clear();
        powerSecond_ComboBox->insertItems(0, QStringList()
         << QApplication::translate("linearAlgebra", "Mat A", 0)
         << QApplication::translate("linearAlgebra", "Mat B", 0)
         << QApplication::translate("linearAlgebra", "Mat C", 0)
        );
        powerFirst_ComboBox->clear();
        powerFirst_ComboBox->insertItems(0, QStringList()
         << QApplication::translate("linearAlgebra", "Mat A", 0)
         << QApplication::translate("linearAlgebra", "Mat B", 0)
         << QApplication::translate("linearAlgebra", "Mat C", 0)
        );
        label_11->setText(QApplication::translate("linearAlgebra", "\342\210\247", 0));
    } // retranslateUi

};

namespace Ui {
    class linearAlgebra: public Ui_linearAlgebra {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LINEARALGEBRA_H
