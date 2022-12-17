#include "HtmlFileEditor.h"

HtmlFileEditor::HtmlFileEditor(QWidget* parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);


    textEdit = new QPlainTextEdit(this);
    textEdit->setGeometry(20, 20, 350, 350);
    
    
    view = new QWebEngineView(this);
    view->setGeometry (380, 20, 350, 350);
    
    
    QObject::connect(textEdit, &QPlainTextEdit::textChanged, view, [this]()
    {
            QString str;
            str = textEdit->toPlainText();
            view->setHtml(str);
    });
    
}



HtmlFileEditor::~HtmlFileEditor()
{
    delete textEdit;
    delete view;
}
