//                                                                                                      
// EPITECH PROJECT, 2018
// Project
// File description:
//
//

#ifndef PROJECT_WARPSYSTEM_HPP
#define PROJECT_WARPSYSTEM_HPP

namespace WarpSystem
{
    class QuantumReactor {
    private:
	bool _stability;
    public:
	bool  isStable ();
	void  setStability(bool);
	QuantumReactor();
	QuantumReactor(bool);
    };

    class Core {
    private:
	QuantumReactor *_coreReactor;

    public:
	Core(QuantumReactor*);
	QuantumReactor *checkReactor();
	QuantumReactor *getReactor();
    };
}

#endif //PROJECT_WARPSYSTEM_HPP
