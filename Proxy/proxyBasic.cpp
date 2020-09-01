#include <iostream>

class Subject{
public:
    virtual void draw() = 0;
    virtual ~Subject();
};

Subject::~Subject(){}

class RealSubject : public Subject{
public:

    RealSubject() : number(0) {}
    
    ~RealSubject(){}
    virtual void draw()
    {
        draw_circle();
        draw_triangle();
    }

    void draw_circle()
    {
        std::cout << "I draw circle ";
        number = 3;
        std::cout << number << std::endl;
    }

    void draw_triangle()
    {
        std::cout << "I draw triangle\n";
    }
private:
    int number;
};

class Proxy : public Subject{
public:
    Proxy(){}
    ~Proxy(){}

    virtual void draw()
    {
        subject->draw();
    }
    void SetSubject(RealSubject *rs)
    {
        subject = rs;
    }

private:
    //RealSubject *m_realsubject;
    Subject *subject;
};

class A{
    public:
    A(){}
    virtual ~A();
    void call(){std::cout << "I am A call\n";}
    virtual void show() = 0;
};
A::~A(){}

class B: public A{
    public:
    B(){}
    ~B(){}
    void show(){
        std::cout << "I am B\n";
    }
};

int main()
{
    RealSubject *real_subject = new RealSubject;
    Proxy *proxy = new Proxy;
    proxy->SetSubject(real_subject);
    proxy->draw();



    delete proxy;
    delete real_subject;

    return 0;
}