#include "MyForm.h"

using namespace PaySlipp;

[STAThreadAttribute]

int main() {
	Application::Run(gcnew(MyForm));
	return 0;
}

