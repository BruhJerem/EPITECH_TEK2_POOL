//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d10
// File description:
//
//

#ifndef CPP_D10_VICTIM_HPP
#define CPP_D10_VICTIM_HPP


class Victim {

protected:
    const std::string _name;

public:
    Victim(const std::string name);
    ~Victim();

    virtual void getPolymorphed()const;

    const std::string getName()const;

};

std::ostream &operator<<(std::ostream &s, const Victim &victim);

#endif //CPP_D10_VICTIM_HPP
