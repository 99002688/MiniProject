#include<string>

using namespace std;
class compartment:public Train{
private:
    string compartmenttype;
public:
    virtual void getType();
    compartment();
    //void getType();
};

