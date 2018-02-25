//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_d06
// File description:
//
//

#ifndef CPP_D06_HOSPITAL_H
#define CPP_D06_HOSPITAL_H

#include "SickKoala.hpp"
#include "KoalaNurse.hpp"
#include "KoalaDoctor.hpp"
#include "SickKoalaList.hpp"
#include "KoalaNurseList.hpp"
#include "KoalaDoctorList.hpp"

class Hospital {
public:
    KoalaNurseList *nurseList;
    KoalaDoctorList *doctorList;
    SickKoalaList *sickKoalaList;

    void addDoctor(KoalaDoctorList*);
    void addNurse(KoalaNurseList*);
    void addSick(SickKoalaList*);
    void run();
    bool areDocAtWork();
};


#endif //CPP_D06_HOSPITAL_H
