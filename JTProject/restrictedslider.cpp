#include "restrictedslider.h"

RestrictedSlider::RestrictedSlider(QWidget * parent):QSlider(parent)
{
    connect(this,SIGNAL(valueChanged(int)),this,SLOT(restrictMove(int)));
    _minVal = 1;
    _maxVal = 64;
}

void RestrictedSlider::setMinValue(int value)
{
    _minVal = value;
}

void RestrictedSlider::setMaxValue(int value)
{
    _maxVal = value;
}

void RestrictedSlider::restrictMove(int index)
{
    if(index < _minVal) this->setSliderPosition(_minVal);
    if(index > _maxVal) this->setSliderPosition(_maxVal);
}

RestrictedSlider::~RestrictedSlider()
{

}
