/*                                                                                                      
** EPITECH PROJECT, 2018
** cpp_d06
** File description:
**
*/

#include "KoalaNurse.hpp"
#include "SickKoala.hpp"
#include "KoalaDoctor.hpp"

int main()
{
	srandom(time(NULL));

	KoalaDoctor Doc("Einrich");
	SickKoala Sick("Adolph");

	Doc.diagnose(&Sick);

	Doc.timeCheck();
	Doc.timeCheck();
}