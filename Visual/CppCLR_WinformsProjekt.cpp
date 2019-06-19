// CppCLR_WinformsProjekt.cpp: Hauptprojektdatei.

// #include "stdafx.h"
// using namespace System;

//int main(array<System::String ^> ^args)
//{
//    Console::WriteLine(L"Hello World");
//    return 0;
//}
#include "stdafx.h"
#include "Form1.h"
#include "Vector.h"
#include <iostream>
#include "EditareFisier.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace std;

[STAThread]
// int main(array<String^>^ args) { // Kann Fehler nach 'using namespace std;' verursachen
int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew CppCLR_WinformsProjekt::Form1()); // "CppCLR_WinformsProjekt" noch anpassen
	
	Vector *v = new Vector(55);
	EditareFisier d;
	
	return 0;
}