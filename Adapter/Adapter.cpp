#include <iostream>


class ExecuteInterface{
public:
	virtual ~ExecuteInterface(){}
	virtual void execute() = 0;
};

template<class T>
class ExecuteAdapter : public ExecuteInterface{
public:
	ExecuteAdapter(T* o, void(T::*m)()) : obj(o), method(m) {}
	~ExecuteAdapter() {
		delete obj;
	}

	void execute() override{
		(obj->*method)();
	}
private:
	T *obj;
	void (T::*method)();
};

class Fea{
public:

	void doFea() {
		std::cout << "Fea::doFea\n";
	}
};

class Fly{
public:
	void doFly() {
		std::cout << "Fly::doFly\n";
	}
};

int main()
{
	ExecuteInterface *task1 = new ExecuteAdapter<Fea>(new Fea(), &Fea::doFea);
	ExecuteInterface *task2 = new ExecuteAdapter<Fly>(new Fly(), &Fly::doFly);

	task1->execute();
	task2->execute();

	delete task1;
	delete task2;
	return 0;
}
