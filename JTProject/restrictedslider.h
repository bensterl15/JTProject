#ifndef RESTRICTEDSLIDER_H
#define RESTRICTEDSLIDER_H

#include <QSlider>

class RestrictedSlider:public QSlider
{
    Q_OBJECT
public:
    RestrictedSlider(QWidget *parent=0);
    ~RestrictedSlider();
    void setMaxValue(int value);
    void setMinValue(int value);

private slots:
    void restrictMove(int index);

private:
    int _minVal;
    int _maxVal;
};

#endif // RESTRICTEDSLIDER_H
