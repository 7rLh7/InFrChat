#include "inputtextedit.h"
#include <QDebug>
InputTextEdit::InputTextEdit(const QString &text, QWidget *parent)
:QPlainTextEdit(text, parent)
{

}
void InputTextEdit::keyReleaseEvent(QKeyEvent *event)
{
    if (event->modifiers() == Qt::ControlModifier) {
        if (event->key() == Qt::Key_Return) {
            qDebug() << "Ctrl+Enter Release send message";
            clear();
        }
    }

    QPlainTextEdit::keyReleaseEvent(event);
}
