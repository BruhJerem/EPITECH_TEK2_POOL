//                                                                                                      
// EPITECH PROJECT, 2018
// cpp_rush3
// File description:
//
//

#ifndef CPP_RUSH3_MEMORYINFO_HPP
#define CPP_RUSH3_MEMORYINFO_HPP


class MemoryInfo {
public:
    MemoryInfo();
    double getTotalRam()const;
    double getFreeRam()const;
    double getUsedRam()const;
    double getUsedWithoutCacheRam()const;

    double getTotalSwap()const;
    double getFreeSwap()const;
    double getUsedSwap()const;

    void refresh();

private:
    double _totalRam;
    double _freeRam;
    double _usedWithoutCacheRam;
    double _usedRam;

    double _totalSwap;
    double _freeSwap;
    double _usedSwap;
};


#endif //CPP_RUSH3_MEMORYINFO_HPP
