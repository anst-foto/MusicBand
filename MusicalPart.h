#ifndef MUSICALPART_H
#define MUSICALPART_H

#include <string>

using namespace std;


class MusicalPart {
private:
    string _name;

public:
    explicit MusicalPart(string name)
        : _name(name) {
    }

    string getName() const {
        return _name;
    }
};



#endif //MUSICALPART_H
