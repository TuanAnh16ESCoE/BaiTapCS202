#ifndef POINT3D_H_INCLUDED
#define POINT3D_H_INCLUDED

class point3d
{
private:
    double x,y,z;
public:
    point3d(double x,double y, double z);
    double distancefrom(point3d other);
    double distancefromcenter();
    void details();
};


#endif // POINT3D_H_INCLUDED
