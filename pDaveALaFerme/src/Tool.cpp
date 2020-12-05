#include "Tool.h"

Tool::Tool(int id, const std::string nom):Item(id, nom)
{
    //ctor
}

Tool::~Tool()
{
    //dtor
}

Tool::Tool(const Tool &tool):Item(tool)
{

}

Tool& Tool::operator=(const Tool& rhs)
{
    if (this != &rhs) {
        Item::operator=(rhs);
    }

    return *this;
}

string Tool::str()const{
    string rtn = Item::str();
    return rtn;
}
