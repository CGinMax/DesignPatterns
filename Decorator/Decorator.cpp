#include <iostream>
#include <string>

class Display{
public:
	virtual ~Display(){}
	virtual int getRows() = 0;
	virtual int getColumns() = 0;
	virtual std::string getRowText(int row) = 0;

	virtual void show() {
		for (int i = 0; i < getRows(); i++) {
			std::cout << getRowText(i) << "\n";
		}
	}
};

class StringDisplay : public Display {
public:
	StringDisplay(const std::string &text) : _txt(text) {}
	~StringDisplay() {}
	int getRows() override {
		return 1;
	}

	int getColumns() override {
		return _txt.size();
	}

	std::string getRowText(int row) override{
		if (row == 0) {
			return _txt;
		}
		else {
			return std::string();
		}
	}

private:
	std::string _txt;
};


class Border : public Display{
public:
	Border(Display *d) : _display(d){}
	~Border(){}


protected:
	Display *_display;
};

class SilderBorder : public Border {
public:
	
	SilderBorder(Display *d, char bc = '|') : Border(d), _borderchar(bc){}
	~SilderBorder(){}

	int getRows() override {
		return _display->getRows();
	}

	int getColumns() override {
		return 1 + _display->getColumns() + 1;
	}

	std::string getRowText(int row) override{
		return _borderchar + _display->getRowText(row) + _borderchar;
	}

private:
	char _borderchar;
};

class FullBorder : public Border {
public:
	FullBorder(Display *d) : Border(d) {}
	~FullBorder(){}

	int getRows() override {
		return _display->getRows() + 2;
	}

	int getColumns() override {
		return 1 + _display->getColumns() + 1;
	}

	std::string getRowText(int row) override {
		if (row == 0) {
			return "+" + makeLines() + "+";
		}
		else if (row == this->getRows() - 1) {
			return "+" + makeLines() + "+";
		}
		else {
			return "+" + _display->getRowText(row - 1) + "+";
		}
	}

private:
	std::string makeLines() {
		int txtLength = _display->getColumns();
		std::string lineStr;
		lineStr.resize(txtLength);
		for (int i = 0; i < txtLength; i++) {
			lineStr[i] = '-';
		}

		return lineStr;
	}

};

int main(int argc, char *argv[])
{

	Display *display = new StringDisplay("HelloWorld");

	Border *border1 = new SilderBorder(display, '$');
	border1->show();

	Border *border2 = new FullBorder(display);
	border2->show();

	Border *border3 = new FullBorder(new SilderBorder(new FullBorder(new SilderBorder(display, '#')), '$'));
	border3->show();

	delete display;
	delete border1;
	return 0;
}
