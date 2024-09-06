#ifndef TRUMPETPLAYER_H
#define TRUMPETPLAYER_H

#include "BandsmanBase.h"
#include "Trumpet.h"


class TrumpetPlayer : public BandsmanBase {
public:
    TrumpetPlayer(const string &name)
        : BandsmanBase(name, new Trumpet("Bah")) { }
};

#endif //TRUMPETPLAYER_H
