#ifndef INPUTTEXTEDIT_H
#define INPUTTEXTEDIT_H

#include <QPlainTextEdit>

class InputTextEdit : public QPlainTextEdit
{
public:
    InputTextEdit(const QString &text, QWidget *parent = nullptr);
protected:
    void keyReleaseEvent(QKeyEvent *event) override;
};

#endif // INPUTTEXTEDIT_H
