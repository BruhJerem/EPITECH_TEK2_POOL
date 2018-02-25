//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d10
// File description:
//
//

#ifndef CPP_D10_ISPACEMARINE_HPP
#define CPP_D10_ISPACEMARINE_HPP

class  ISpaceMarine
{
public:
    virtual ~ISpaceMarine () {}
    virtual  ISpaceMarine* clone()  const = 0;
    virtual  void  battleCry ()  const = 0;
    virtual  void  rangedAttack ()  const = 0;
    virtual  void  meleeAttack ()  const = 0;
};

#endif //CPP_D10_ISPACEMARINE_HPP
