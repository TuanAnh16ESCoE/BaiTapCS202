#ifndef RECTANGLECLASS_H_INCLUDED
#define RECTANGLECLASS_H_INCLUDED

class rectangle{
private:
    double length, width;
public:
    void setlength(double l);
    void setwidth(double w);
    double getWidth();
    double getLength();
    double Area();
};


#endif // RECTANGLECLASS_H_INCLUDED
