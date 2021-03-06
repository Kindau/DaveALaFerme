#ifndef TOOL_H
#define TOOL_H
#include "Model/Item/Item.h"


// définis un Item équipable et utilisable par le player
class Tool: public Item
{
    private:

    public:
        Tool(int id, const std::string nom);
        virtual ~Tool();
        Tool(const Tool &tool);
        Tool& operator=(const Tool &tool);
        Tool* clone() const{return new Tool(*this);};

        //void useTool() ;
        virtual string str()const;
        virtual string toolType()const{return "";}

};

#endif // TOOL_H
