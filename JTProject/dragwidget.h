#ifndef DRAGWIDGET_H
#define DRAGWIDGET_H

#include <QWidget>
#include <QtWidgets>

class QDragEnterEvent;
class QDropEvent;

class DragWidget : public QWidget
{
public:
    DragWidget(QWidget *parent = 0);

protected:
    //void dragEnterEvent(QDragEnterEvent *event) override;
    void dragMoveEvent(QDragMoveEvent *event) override;
    void dropEvent(QDropEvent *event) override;
    void mousePressEvent(QMouseEvent *event) override;

private:
    QLabel *child;
};

#endif // DRAGWIDGET_H
