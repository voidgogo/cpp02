#include "MyMemoryException.h"

MyMemoryException::MyMemoryException(int ec, DynamicArray* ea)
	:MyException(ec, "메모리 오류", ea)
{
}
