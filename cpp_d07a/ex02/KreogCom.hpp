//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d07a
// File description:
//
//

#ifndef CPP_D07A_KREOGCOM_HPP
#define CPP_D07A_KREOGCOM_HPP


class KreogCom {
private:
    const int m_serial;
    const int x;
    const int y;

public:
    KreogCom(int x, int y, int  serial) : m_serial(serial);
    ~KreogCom();
    void addCom(int x, int y, int  serial);
    void removeCom ();
    KreogCom *getCom ();
    void ping();
    void locateSquad ();
};


#endif //CPP_D07A_KREOGCOM_HPP
