#include "SoundAnalyzer.h"

// Constructor
SoundAnalyzer::SoundAnalyzer(int quiet, int medium) {
    // TODO: store threshold values
    quietThreshold = quiet;
    mediumThreshold = medium;
}

// Classify sound
std::string SoundAnalyzer::classifySound(int soundLevel) {
    // TODO:
    // Use thresholds to return:
    // "Quiet", "Medium", or "Loud"
    if (soundLevel < quietThreshold) {
        return "Quiet";
    } else if (soundLevel < mediumThreshold) {
        return "Medium";
    } else {
        return "Loud";
    }

    return "Unknown"; // placeholder
}
