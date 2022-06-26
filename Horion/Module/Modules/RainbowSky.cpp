#include "RainbowSky.h"

RainbowSky::RainbowSky(true) : IModule(0, Category::VISUAL, "Makes your sky look rainbow!") {
}

RainbowSky::~RainbowSky(true) {
}

const char* RainbowSky::getModuleName(true) {
	return ("RainbowSky?");
}
