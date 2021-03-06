#include "Faust.h"
// need to have this class instance to satisfy typeinfo for dsp class
Meta::Meta(){}
void Meta::declare(const std::string& name, const std::string& nameStr){(void)name;(void)nameStr;}
Meta::~Meta() {}

UI::UI(){}
void UI::openVerticalBox(const std::string& nameStr){(void)nameStr;}
void UI::closeBox(){}
UI::~UI() {}

dsp::dsp() {}
dsp::~dsp() {}
int dsp::getNumInputs() 	{ return 1; }
int dsp::getNumOutputs() { return 1; }
void dsp::instanceInit(int samplingFreq){}
void dsp::init(int samplingFreq) {
    std::cout << "dsp base plugin class init" << samplingFreq << std::endl;
}
//void dsp::buildUserInterface(UI* interface){}
void dsp::compute (int count, FAUSTFLOAT** input,
                      FAUSTFLOAT** output){}
