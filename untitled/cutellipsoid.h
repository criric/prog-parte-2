#ifndef CUTELLIPSOID_H
#define CUTELLIPSOID_H

#include "figurageometrica.h"

class CutEllipsoid : public FiguraGeometrica{
    protected:

        int xcenter, ycenter, zcenter, rx, ry, rz;

        float r, g, b, a;
    public:

        CutEllipsoid(int _xcenter, int _ycenter, int _zcenter, int _rx, int _ry, int _rz);

        ~CutEllipsoid();

        void draw(Sculptor &t);
};

#endif // CUTELLIPSOID_H
