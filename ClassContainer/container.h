#ifndef CONTAINER_H
#define CONTAINER_H

#include <string>
#include <list>
#include <memory>

class Container
{
public:
    enum ContainerType {
        ContainerType_NoType = 0,
        ContainerType_Text,
        ContainerType_Table,
        ContainerType_TableCell,
        ContainerType_Image,
        ContainerType_TypesAmount
    };

private:
    ContainerType _type;
    std::list<std::shared_ptr<Container>> _childContainers;

public:
    Container();
    virtual ~Container() = 0;

    inline ContainerType getType() { return _type; }
};


#endif // CONTAINER_H
