#include "MenuFormulario.h"

using namespace aplicacion;

[STAThreadAttribute]
int main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew MenuFormulario()); // Usa el espacio de nombres completo
    return 0;
}
