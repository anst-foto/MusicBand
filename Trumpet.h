#ifndef TRUMPET_H
#define TRUMPET_H

#include "MusicalInstrumentBase.h"

class Trumpet : public MusicalInstrumentBase {
public:
    explicit Trumpet(const string &name)
        : MusicalInstrumentBase(name) {}

    string touch() override {
        return "Trumpet";
    }
};


#endif //TRUMPET_H
