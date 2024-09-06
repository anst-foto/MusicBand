#ifndef MUSICGROUP_H
#define MUSICGROUP_H

#include <string>
#include <vector>
#include <map>

#include "BandsmanBase.h"

using namespace std;

class MusicBandBase {
private:
    string _name;
    vector<BandsmanBase*> _bands;

protected:
    MusicBandBase(string name) {
        _name = name;
    }

    void addBandsman(BandsmanBase* bandsman) {
        _bands.push_back(bandsman);
    }

public:
    string getName() const {
        return _name;
    }

    vector<BandsmanBase*> getBands() const {
        return _bands;
    }

    /*virtual void play(map<MusicalInstrumentBase*, MusicalPart*> musicParts) = 0;*/
    virtual void play(map<string, MusicalPart*> musicParts) = 0;
};


#endif //MUSICGROUP_H
