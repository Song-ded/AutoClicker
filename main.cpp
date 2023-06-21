#include <iostream>
#include <Windows.h>
#include <fstream>
#include <string>

using namespace std;

char choice;
char press;
bool bState = false;
int kol = 0;
string kb;

void menu();
void activate();
char chopress();
char cho();
char switched();

void menu(bool bState) { // Console INFO
	system("cls");
	std::cout << "Inclide autoclicker v1.4" << std::endl;
	if (bState) {
		std::cout << "Status ON" << std::endl;
	}
	else {
		std::cout << "Status OFF" << std::endl;
	}
	
}

void activate() {
	while (true)
	{
		if (GetAsyncKeyState(kol) & 1) { // Button: F
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
			if (choice == 'l') {
				mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
			}
			if (choice == 'r') {
				mouse_event(MOUSEEVENTF_RIGHTDOWN, 0, 0, 0, 0);
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

char switched() {
	ifstream file;
	file.open("config.txt");
	getline(file, kb);
	return 0;
}

int main() {
	switched();
	if (kb == "0x01")
	{
		kol = 0x01;
	}
	else if (kb == "0x02") kol = 0x02;
	else if (kb == "0x03") kol = 0x03;
	else if (kb == "0x04") kol = 0x04;
	else if (kb == "0x05") kol = 0x05;
	else if (kb == "0x06") kol = 0x06;
	else if (kb == "0x07") kol = 0x07;
	else if (kb == "0x08") kol = 0x08;
	else if (kb == "0x09") kol = 0x09;
	else if (kb == "0x10") kol = 0x10;
	else if (kb == "0x11") kol = 0x11;
	else if (kb == "0x12") kol = 0x12;
	else if (kb == "0x13") kol = 0x13;
	else if (kb == "0x14") kol = 0x14;
	else if (kb == "0x1B") kol = 0x1B;
	else if (kb == "0x20") kol = 0x20;
	else if (kb == "0x21") kol = 0x21;
	else if (kb == "0x22") kol = 0x22;
	else if (kb == "0x23") kol = 0x23;
	else if (kb == "0x24") kol = 0x24;
	else if (kb == "0x25") kol = 0x25;
	else if (kb == "0x26") kol = 0x26;
	else if (kb == "0x27") kol = 0x27;
	else if (kb == "0x28") kol = 0x28;
	else if (kb == "0x29") kol = 0x29;
	else if (kb == "0x2A") kol = 0x2A;
	else if (kb == "0x2B") kol = 0x2B;
	else if (kb == "0x2C") kol = 0x2C;
	else if (kb == "0x2D") kol = 0x2D;
	else if (kb == "0x2E") kol = 0x2E;
	else if (kb == "0x2F") kol = 0x2F;
	else if (kb == "0x30") kol = 0x30;
	else if (kb == "0x31") kol = 0x31;
	else if (kb == "0x32") kol = 0x32;
	else if (kb == "0x33") kol = 0x33;
	else if (kb == "0x34") kol = 0x34;
	else if (kb == "0x35") kol = 0x35;
	else if (kb == "0x36") kol = 0x36;
	else if (kb == "0x37") kol = 0x37;
	else if (kb == "0x38") kol = 0x38;
	else if (kb == "0x39") kol = 0x39;
	else if (kb == "0x42") kol = 0x42; 
	else if (kb == "0x43") kol = 0x43; 
	else if (kb == "0x44") kol = 0x44; 
	else if (kb == "0x45") kol = 0x45;
	else if (kb == "0x46") kol = 0x46;
	else if (kb == "0x47") kol = 0x47; 
	else if (kb == "0x48") kol = 0x48; 
	else if (kb == "0x49") kol = 0x49;
	else if (kb == "0x4A") kol = 0x4A;
	else if (kb == "0x4B") kol = 0x4B; 
	else if (kb == "0x4C") kol = 0x4C;
	else if (kb == "0x4D") kol = 0x4D;
	else if (kb == "0x4E") kol = 0x4E;
	else if (kb == "0x4F") kol = 0x4F; 
	else if (kb == "0x50") kol = 0x50;
	else if (kb == "0x51") kol = 0x51;
	else if (kb == "0x52") kol = 0x52;
	else if (kb == "0x53") kol = 0x53;
	else if (kb == "0x54") kol = 0x54;
	else if (kb == "0x55") kol = 0x55;
	else if (kb == "0x56") kol = 0x56;
	else if (kb == "0x57") kol = 0x57;
	else if (kb == "0x58") kol = 0x58; 
	else if (kb == "0x59") kol = 0x59;
	else if (kb == "0x5A") kol = 0x5A;
	else if (kb == "0x5B") kol = 0x5B; 
	else if (kb == "0x5C") kol = 0x5C;
	else if (kb == "0x5D") kol = 0x5D; 
	else if (kb == "0x5F") kol = 0x5F; 
	else if (kb == "0x60") kol = 0x60; 
	else if (kb == "0x61") kol = 0x61; 
	else if (kb == "0x62") kol = 0x62;
	else if (kb == "0x63") kol = 0x63;
	else if (kb == "0x64") kol = 0x64; 
	else if (kb == "0x66") kol = 0x66; 
	else if (kb == "0x67") kol = 0x67;
	else if (kb == "0x68") kol = 0x68;
	else if (kb == "0x69") kol = 0x69; 
	else if (kb == "0x6A") kol = 0x6A; 
	else if (kb == "0x6B") kol = 0x6B; 
	else if (kb == "0x6C") kol = 0x6C; 
	else if (kb == "0x6D") kol = 0x6D; 
	else if (kb == "0x6E") kol = 0x6E; 
	else if (kb == "0x6F") kol = 0x6F; 

	if (kol == 0) {
		system("cls");
		cout << "Please! Open config.txt and write a key there in the format 0x\n The link to the spreadsheet has been opened!";
		ShellExecute(0, 0, L"https://song-ded.github.io/codes.html", 0, 0, SW_SHOW);
		return 0;
	}

	cho();


	if (choice == 'r' || choice == 'l')
	{
		chopress();
		if (press == 'y' || press == 'n')
		{
			menu(bState);
			activate();
		}
		else
		{
			system("cls");
			Beep(370, 2000);
			std::cout << "Restart the program and enter valid arguments" << std::endl;
		}

	}
	else
	{
		system("cls");
		Beep(370, 2000);
		std::cout << "Restart the program and enter valid arguments" << std::endl;
	}

	return 0;
}