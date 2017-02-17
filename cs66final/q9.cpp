class A
{
public:
    int foo() {return 10};
};



class Child : public A
{
public:
    int foo() { return 42; }
};


//in main

int main()
{
    A a1;
    Child child1;
    cout << child1.foo(); /// would output 42
    cout << a1.foo(); //would output 10
}