//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d08
// File description:
//
//

#ifndef CPP_D08_DROID_HPP
#define CPP_D08_DROID_HPP

#include <iostream>
#include "DroidMemory.hpp"

class Droid {
private:
    std::string _id;
    size_t _energy;
    const size_t _attack = 25;
    const size_t _toughness = 15;
    std::string *_status;
    DroidMemory *BattleData;

public:
    Droid(std::string serial);
    Droid(const Droid &other);

    void operator=(const Droid& other);
    bool operator==(const Droid& other) const;
    bool operator!=(const Droid& other) const;

    ~Droid();

    std::string getId() const;
    void setId(std::string id);
    std::size_t getEnergy() const;
    void setEnergy(size_t energy);
    std::size_t getAttack() const;
    std::size_t getToughness() const;
    std::string getStatus() const ;
    void setStatus(std::string *status);
    void setBattleData(DroidMemory *BattleData);
    DroidMemory *getBattleData();
};

std::ostream &operator<<(std::ostream &s, const Droid& rhc);
Droid &operator<<(Droid &droid, std::size_t &other);

#endif //CPP_D08_DROID_HPP
