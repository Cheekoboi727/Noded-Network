#ifndef ATTRIBUTEDNODE2_H
#define ATTRIBUTEDNODE2_H

#include <string>
using namespace std;

class AttributedNode2
{
    string Profession;
    string CityName;

    public:
    AttributedNode2();
    ~AttributedNode2();
    void setProfession(string profession);
    void setCityName(string cityName);
    string getProfession();
    string getCityName();
};

#endif