//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d09
// File description:
//
//

#ifndef CPP_D09_EXO_1_H
#define CPP_D09_EXO_1_H

typedef struct s_cthulhu {

    int m_power;
    char *m_name;

}cthulhu_t;

typedef struct s_koala {

    cthulhu_t m_parent;
    char m_isALegend;

}koala_t;

/* thulhu functions */

cthulhu_t *NewCthulhu ();
void PrintPower(cthulhu_t *this);
void Attack(cthulhu_t *this);
void Sleeping(cthulhu_t *this);

/* Koala functions */

koala_t *NewKoala(char *name , char _isALegend);
void Eat(koala_t *this);

#endif //CPP_D09_EXO_1_H
