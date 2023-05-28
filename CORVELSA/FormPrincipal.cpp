#include "FormPrincipal.h"
using namespace CORVELSA;

[STAThreadAttribute]

int main(array<System::String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew FormPrincipal());
	return 0;

}


