#include <iostream>
#include <string>
class Color{
public:
	virtual std::string getColor() = 0;
};

class Yellow : public Color{
public:
	std::string getColor() override{
		return "Yellow";
	}
};

class Red : public Color {
public:
	std::string getColor() override{
		return "Red";
	}
};


class Bag{
public:
	Bag(Color *color, const std::string &type) : _color(color), _bagType(type){}
	virtual ~Bag(){}
	virtual std::string getName() {
		return _color->getColor() + " Normal bag\n";
	}

protected:
	Color *_color;
	std::string _bagType;
};

class HandBag : public Bag {
public:
	HandBag(Color *color, const std::string &type) : Bag(color, type){} 

	std::string getName() override{
		return _color->getColor() + " " + _bagType + '\n';
	}

};

class Wallet : public Bag {
public:
	Wallet(Color *color, const std::string &type) : Bag(color, type){}

	std::string getName() override {
		return _color->getColor() + " " + _bagType + '\n';
	}
};
int main(int argc, char *arv[]) 
{
	Color *color = new Red();
	Bag *bag = new Wallet(color, "Wallet");
	std::cout << bag->getName();

	delete color;
	delete bag;
	return 0;

}
