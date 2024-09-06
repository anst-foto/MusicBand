#ifndef MUSICALINSTRUMENT_H
#define MUSICALINSTRUMENT_H

#include <string>

using namespace std;


class MusicalInstrumentBase {
private:
    string _name;

protected:
    MusicalInstrumentBase(string name) {
        _name = name;
    }

public:
    string getName() const {
        return _name;
    }

    virtual string touch() = 0;
};


#endif //MUSICALINSTRUMENT_H
