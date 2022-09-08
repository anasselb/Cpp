

#include <string>
#include <iostream>

struct Data{
    std::string str;
};

uintptr_t serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}


Data* deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data*>(raw));
}

int main()
{
    Data *data = new Data;
    data->str = "anaaass";

    uintptr_t u = serialize(data);
    Data *ndata = deserialize(u);

    std::cout << ndata->str << std::endl;

}