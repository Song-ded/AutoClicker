#include <iostream>
#include <Windows.h>

bool bState = false;

void menu(bool bState) { // Console INFO
	system("cls");
	std::cout << "Inclide autoclicker v1.0" << std::endl;
	if (bState) {
		std::cout << "Status ON" << std::endl;
	}
	else
	{
		std::cout << "Status OFF" << std::endl;
	}
	
}

int main() {
	 
	menu(bState);

	while (true)
	{
		if (GetAsyncKeyState(0x46) & 1) { // Button: F
			bState = !bState;
			menu(bState);
		}

		if (bState) { // Pressed
			mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0); 
			mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
		}

		Sleep(10);
	}

	return 0;
}