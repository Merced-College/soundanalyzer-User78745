#include "SoundSensor.h"
#include <Arduino.h>

// Constructor
SoundSensor::SoundSensor(int sensorPin) : pin(sensorPin) {
    // Constructor body can be empty if no additional setup is needed
}

// Initialize sensor
void SoundSensor::begin() {
    // TODO: set pin mode if needed
    pinMode(pin, INPUT);
}

// Read sound level
int SoundSensor::getSoundLevel() {
    // TODO:
    // - read from analog pin
    // - return the value
    return analogRead(pin);
}
