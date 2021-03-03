#include "trig.h"

float Q_sinf(float _Angle) {
    int _Quad = (int)(_Angle / M_PI_2) % 4;
	_Angle = _Angle - (M_PI * (int)(_Quad));

    if (_Angle > M_PI_4) {
        float _Sqrt = (M_PI_2 - _Angle);
        _Angle = sqrtf(1.0f - (_Sqrt * _Sqrt));
    }
    return _Angle;
}

