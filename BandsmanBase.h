#ifndef BANDSMAN_H
#define BANDSMAN_H

#include <string>

#include "MusicalInstrumentBase.h"
#include "MusicalPart.h"

using namespace std;

class BandsmanBase {
private:
    MusicalInstrumentBase* _instrument;
    string _name;

protected:
    BandsmanBase(string name, MusicalInstrumentBase* instrument) {
        _name = name;
        _instrument = instrument;
    }

    ~BandsmanBase() {
        delete _instrument;
    }

public:
    MusicalInstrumentBase* getInstrument() const {
        return _instrument;
    }

    string getName() const {
        return _name;
    }

    virtual string play(MusicalPart* part) {
        return _name + " is playing " + _instrument->getName() + ", " + part->getName();
    }
};


#endif //BANDSMAN_H
