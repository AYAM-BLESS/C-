//done by Ayamba Bless
//Member initializer
/*Member initializer, the list begins with a colon and them list each variable to be initialized along with
the value for that variable with a comma to separate them*/
class MyClass {
    public:
    MyClass(int a, int b)
    : regVar(a), constVar(b)
    {

    }
    private:
    int regVar;
    const int constVar;
}
