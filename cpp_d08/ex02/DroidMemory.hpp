//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d08
// File description:
//
//

#ifndef CPP_D08_DROIDMEMORY_HPP
#define CPP_D08_DROIDMEMORY_HPP

#include <iostream>

class DroidMemory {
private:
    std::size_t _FingerPrint;
    std::size_t _exp;

public:
    DroidMemory();
    ~DroidMemory();

    DroidMemory& operator << (const DroidMemory& curr);
    const DroidMemory& operator >> (DroidMemory& curr) const;
    DroidMemory& operator += (const DroidMemory& curr);
    DroidMemory& operator += (std::size_t exp);
    DroidMemory& operator + (const DroidMemory& curr) const;
    DroidMemory& operator + (std::size_t exp) const;

    bool operator == (const DroidMemory& curr)const;
    bool operator != (const DroidMemory& curr)const;
    bool operator > (const DroidMemory& curr)const;
    bool operator >= (const DroidMemory& curr)const;
    bool operator < (const DroidMemory& curr)const;
    bool operator <= (const DroidMemory& curr)const;

    bool operator == (const std::size_t curr)const;
    bool operator != (const std::size_t curr)const;
    bool operator > (const std::size_t curr)const;
    bool operator >= (const std::size_t curr)const;
    bool operator < (const std::size_t curr)const;
    bool operator <= (const std::size_t curr)const;

    std::size_t getFingerPrint()const;
    void setFingerPrint(std::size_t finger);
    std::size_t getExp()const;
    void setExp(std::size_t exp);
};

std::ostream& operator << (std::ostream& s, const DroidMemory& curr);

#endif //CPP_D08_DROIDMEMORY_HPP
