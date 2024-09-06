#include <iostream>

#include "Duett.h"

using namespace std;

int main() {
    auto duett = new Duett("Duett", "John Does", "Henry");
    cout << duett->getName() << endl;
    auto players = duett->getBands();
    for (auto player : players) {
        cout << player->getName() << endl;
        cout << player->getInstrument()->getName() << endl;
    }

    /*map<MusicalInstrumentBase*, MusicalPart*> duettMap =
    {
        {new Guitar("Fender"), new MusicalPart("part 1")},
        {new Trumpet("Bah"), new MusicalPart("part 2")},
    };
    duett->play(duettMap);*/

    map<string, MusicalPart*> parts =
        {
            {"John Does", new MusicalPart("part 1")},
            {"Henry", new MusicalPart("part 2")}
        };
    duett->play(parts);


    return 0;
}
