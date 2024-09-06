cmake_minimum_required(VERSION 3.29)
project(MusicBand)

set(CMAKE_CXX_STANDARD 20)

add_executable(MusicBand main.cpp
        MusicalInstrumentBase.h
        BandsmanBase.h
        MusicBandBase.h
        MusicalPart.h
        Guitar.h
        Trumpet.h
        GuitarPlayer.h
        TrumpetPlayer.h
        Duett.h)
