#include "MainPlace.h"
#include <WinUser.h>
#include <Windows.h>
#include <cstdlib>
using namespace TaskManager;
using namespace System;
using namespace System::Windows::Forms;

int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	TaskManager::MainPLace form;
	form.ReadSaveData();
	Application::Run(% form);
	
}