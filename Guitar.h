#ifndef GUITAR_H
#define GUITAR_H

#include "MusicalInstrumentBase.h"

class Guitar : public MusicalInstrumentBase {
public:
    explicit Guitar(const string &name)
        : MusicalInstrumentBase(name) {}

    string touch() override {
        return "Guitar";
    }
};


#endif //GUITAR_H
