#pragma once
#include <iostream>
using namespace std;

class Song {
public:
    string title;
    string artist;
    bool exp; // whether a song is explicit or not
    float danceability;
    float energy;
    float loudness;
    float acousticness;
    float tempo;
    int duration;
    int year;
    float score = 0;
    float percentage = 0;
};
