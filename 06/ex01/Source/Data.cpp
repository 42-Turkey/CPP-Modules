#include "../Include/Data.hpp"

/*
EN:
reinterpret_cast is a type of C++ cast that allows you to interpret a value of 
one type as another type.

It is important to note that reinterpret_cast is a low-level operation and 
should be used with caution, as it can lead to undefined behavior if used improperly.
TR:
reinterpret_cast, bir değerin bir tipe dönüştürülmesi yerine,
bir değerin bitlerinin başka bir tipe yorumlanmasını sağlayan bir C++ dönüştürme türüdür.

Önemli olan, reinterpret_cast'ın düşük seviye bir işlemdir ve
dikkatli bir şekilde kullanılması gerektiğidir,
çünkü yanlış kullanım durumunda tanımsız davranışa neden olabilir.
*/
uintptr_t	serialaze ( Data *ptr ) {
	uintptr_t	tmp = reinterpret_cast<uintptr_t> ( ptr );
	return tmp;
}

Data *deserialaze  ( uintptr_t raw ) {
	Data *tmp = reinterpret_cast<Data *> ( raw );
	return tmp;
}
