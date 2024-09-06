#ifndef GUITARPLAYER_H
#define GUITARPLAYER_H

#include "BandsmanBase.h"
#include "Guitar.h"

class GuitarPlayer : public BandsmanBase {
public:
    GuitarPlayer(const string &name)
        : BandsmanBase(name, new Guitar("Fender")) { }

};



#endif //GUITARPLAYER_H
