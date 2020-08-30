#include <iostream>

class StampingEquipment{
public:
	virtual void stampPart() = 0;
};

class Wheels : public StampingEquipment{
public:

	void stampPart(){
		std::cout << "Stamp Wheel" << std::endl;
	}
};

class Hood : public StampingEquipment{
public:
	void stampPart() {
		std::cout << "Stamp Hood" << std::endl;
	}
};

class Door : public StampingEquipment{
public:
	void stampPart() {
		std::cout << "Stamp Door" << std::endl;
	}
};

class EquipmentFactory{
public:
	virtual StampingEquipment* createEquipment() = 0;
};

class WheelsFacotry : public EquipmentFactory{
public:
	StampingEquipment* createEquipment() {
		Wheels * w = new Wheels();
		return w;
	}
};

class Client{
public:
	Client(EquipmentFactory *f) : factory(f){}
	~Client() {
		if (factory != nullptr) {
			delete factory;
		}
	}

	void stampingPart(){
		StampingEquipment *equipment = factory->createEquipment();
		equipment->stampPart();
		delete equipment;
	}
private:
	EquipmentFactory *factory = nullptr;
};

int main()
{
	Client c(new WheelsFacotry());
	c.stampingPart();
    return 0;
}
