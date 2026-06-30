#include "LedInterface.h"

LedInterface::LedInterface() {
}

void LedInterface::RunSetup() {
  this->initTime = millis();
}

void LedInterface::main(uint32_t currentTime) {
  return; // NeoPixel disabled
}

void LedInterface::setMode(uint8_t new_mode) {
  this->current_mode = new_mode;
}

uint8_t LedInterface::getMode() {
  return this->current_mode;
}

void LedInterface::setColor(int r, int g, int b) {
  return;
}

void LedInterface::sniffLed() {
  return;
}

void LedInterface::attackLed() {
  return;
}

void LedInterface::ledOff() {
  return;
}

void LedInterface::rainbow() {
  return;
}

uint32_t LedInterface::Wheel(byte WheelPos) {
  return 0;
}