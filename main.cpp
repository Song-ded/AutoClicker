#include <iostream>
#include <Windows.h>

char choice;
char press;
bool bState = false;

void menu(bool bState) { // Console INFO
	system("cls");
	std::cout << "Inclide autoclicker v1.1" << std::endl;
	if (bState) {
		std::cout << "Status ON" << std::endl;
	}
	else
	{
		std::cout << "Status OFF" << std::endl;
	}
	
}

void activate() {
	while (true)
	{
		if (GetAsyncKeyState(0x46) & 1) { // Button: F
			bState = !bState;
			menu(bState);
		}
		if (bState && press == 'n')
		{
			if (bState && choice == 'l') { // Pressed
				mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
				mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
				Sleep(5);
			}
			if (bState && choice == 'r')
			{
				mouse_event(MOUSEEVENTF_RIGHTDOWN, 0, 0, 0, 0);
				mouse_event(MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
				Sleep(5);
			}
		}
		if (bState && press == 'y')
		{
			if (choice == 'l')
			{
				mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
				
			}
			if (choice == 'r')
			{
				mouse_event(MOUSEEVENTF_RIGHTDOWN, 0, 0, 0, 0);
				Sleep(5000);
			}
			
		}

		
	}
}

char chopress() {
	system("cls");
	std::cout << "Will the program press the button? (yes(y) or no(n))" << std::endl;
	std::cout << "Enter your choice: ";
	std::cin >> press;
	return press;
}

char cho() {
	system("cls");
	std::cout << "Left button (l), Right button (r)" << std::endl;
	std::cout << "Select press button: ";
	std::cin >> choice;
	return choice;
}

int main() {
	cho();
	

	if (choice == 'r' || choice == 'l')
	{
		chopress();
		if (press == 'y' || press == 'n')
		{
			menu(bState);
			activate();
		}

	}
	else
	{
		cho();
	}

	return 0;
}
