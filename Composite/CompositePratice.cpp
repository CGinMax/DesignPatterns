#include <iostream>
#include <iterator>
#include <string>
#include <list>
#include <iterator>

class Article{
public:
	virtual float caculation(){};
	virtual void show(){};
};

class Goods : public Article{
public:
	Goods(const std::string &name, int q, float p) : 
	_name(name), _quantity(q), _unitPrice(p){}
	~Goods(){}

	float caculation() override {
		return _unitPrice * static_cast<float>(_quantity);
	}

	void show() override {
		std::cout << _name << _quantity << "个,共" << caculation() << '\n';
	}

private:
	std::string _name;
	int _quantity;
	float _unitPrice;
};

class Bag : public Article {
public:
	Bag(const std::string &name){}
	~Bag(){
		for (Article *article : bags) {
			delete article;
		}
	}

	void add(Article *a) {
		bags.push_back(a);
	}

	void remove(Article *a) {
		bags.remove(a);
	}

	Article* getArticle(int index) {
		if (index >= bags.size() || index < 0) {
			return nullptr;
		}

		auto it = bags.begin();
		std::advance(it, index);
		return *it;

	}

	float caculation() override {
		float totalPrices = 0.0;
		for (auto &article : bags) {
			totalPrices += article->caculation();
		}
		return totalPrices;
	}

	void show() override {
		for (auto &article : bags) {
			article->show();
		}
	}
private:
	std::string _name;
	std::list<Article*> bags;
};

int main(int argc, char *argv[])
{
	Bag *bigBag = new Bag("Big Bag");
	bigBag->add(new Goods("李宁鞋", 1, 198.0));
	bigBag->add(new Goods("红茶", 3, 180.0));

	Bag *smallBag = new Bag("Small Bag");
	smallBag->add(new Goods("地图", 1, 9.9));
	smallBag->add(new Goods("特产", 2, 4.9));

	bigBag->add(smallBag);

	bigBag->show();
	std::cout << bigBag->caculation() << '\n';


	return 0;
}
