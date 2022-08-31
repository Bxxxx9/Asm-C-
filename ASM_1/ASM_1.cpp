#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;
int main()
{
	SetConsoleTitle("C++ With asm");

	char badr[] = "badr";
	char badr1[] = "This a simpel";
	char badr2[] = "Tutrial";
	char * msgKernal = badr ;
	char* msg = badr1;
	char* msgKernalCap = badr2;

	__asm
	{
		mov eax,msgKernal
		push eax
		call printf
		pop eax
		mov eax,0 // button
		mov ebx,msgKernalCap
		mov ecx,msg
		mov edx,0 // return value to edx

		push eax
		push ebx
		push ecx
		push edx
		call MessageBoxA

		/*pop edx
		pop ecx
		pop ebx
		pop eax*/ // eax is now zero

	}
	return 0;
}
