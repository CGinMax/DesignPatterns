#include <iostream>

class SwitchImplemetor{
public:
    virtual void SwitchOn() = 0;
    virtual void SwitchOff() = 0;
};

class AbstractSwitch{

public:
    AbstractSwitch(SwitchImplemetor *impletor) : _impl(impletor){}
    virtual void On() {
        _impl->SwitchOn();
    }
    virtual void Off() {
        _impl->SwitchOff();
    }

protected:
    SwitchImplemetor *_impl;
};

// Specilization
class HomeSwitch : public AbstractSwitch{
public:
    HomeSwitch(SwitchImplemetor *impletor) : AbstractSwitch(impletor){}

    void On() override {
        std::cout << "Home Switch\n";
        AbstractSwitch::On();
    }
    void Off() override {
        std::cout << "Home Switch\n";
        AbstractSwitch::Off();
    }
};



class Light : public SwitchImplemetor{

public:
    void SwitchOn() override {
        std::cout << "Light switch on\n";
    }
    void SwitchOff() override {
        std::cout << "Light switch off\n";
    }
};


int main(int argc, char *argv[])
{
    SwitchImplemetor *sw_impltor = new Light();
    AbstractSwitch *ab_switch = new HomeSwitch(sw_impltor);

    ab_switch->On();

    ab_switch->Off();

    delete sw_impltor;
    delete ab_switch;
    return 0;
}
