#ifndef DUETT_H
#define DUETT_H

#include <iostream>

#include "MusicBandBase.h"
#include "GuitarPlayer.h"
#include "TrumpetPlayer.h"

#include <typeinfo>

class Duett : public MusicBandBase {
public:
    explicit Duett(const string &name, const string& guitarPlayerName, const string& trumpetPlayerName)
        : MusicBandBase(name) {
        addBandsman(new GuitarPlayer(guitarPlayerName));
        addBandsman(new TrumpetPlayer(trumpetPlayerName));
    }

    /*void play(map<MusicalInstrumentBase*, MusicalPart*> musicParts) override {
        for (auto player : getBands()) {
            auto musicalInstrumentPlayerType = typeid(player->getInstrument()).name();

            for (auto part : musicParts) {
                auto musicalInstrumentType = typeid(part.first).name();

                if (musicalInstrumentType != musicalInstrumentPlayerType) continue;

                cout << player->play(part.second) << endl; //BAD CODE
            }
        }
    }*/

    void play(map<string, MusicalPart *> musicParts) override {
        for (auto player : getBands()) {
            cout << player->play(musicParts[player->getName()]) << endl; //BAD CODE
        }
    }
};



#endif //DUETT_H
