#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_HtmlFileEditor.h"
#include <QWebEngineView>
#include <QPlainTextEdit>


class HtmlFileEditor : public QMainWindow
{
    Q_OBJECT

public:
    HtmlFileEditor(QWidget *parent = nullptr);
    ~HtmlFileEditor();

private:
    Ui::HtmlFileEditorClass ui;
 
    QPlainTextEdit* textEdit = nullptr;
    QWebEngineView* view = nullptr;
    
};
