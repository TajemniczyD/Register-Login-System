#include <iostream>
#include <string>

std::string username;
std::string password;
std::string currentUsername;
std::string currentPassword;

int choice;

void MainMenu();
void Login();

void Register()
{
	std::cout << "----REGISTER----" << std::endl;
	std::cout << "Enter username " << std::endl;
	std::cin >> username;
	currentUsername = username;
	std::cout << "Enter password " << std::endl;
	std::cin >> password;
	currentPassword = password;

	MainMenu();
}

void Login()
{
	std::cout << "----LOGIN----" << std::endl;
	std::cout << "Enter username " << std::endl;
	std::cin >> username;
	std::cout << "Enter password " << std::endl;
	std::cin >> password;

	if (username == currentUsername && password == currentPassword)
	{
		std::cout << "Succesfully login!" << std::endl;
	}
	else if(username == currentUsername && password != currentPassword)
	{
		std::cout << "Username or password is incorrect..." << std::endl;
	}
	else if (username != currentUsername && password == currentPassword)
	{
		std::cout << "Username or password is incorrect..." << std::endl;
	}
	else
	{
		std::cout << "Account does not exits" << std::endl;
	}

	MainMenu();
}

void MainMenu()
{
	std::cout << "----MAIN MENU----" << std::endl;
	std::cout << "1. Register" << std::endl;
	std::cout << "2. Login" << std::endl;
	std::cout << "3. Exit" << std::endl;

	std::cin >> choice;

	switch (choice)
	{
	case 1:
		Register();
		break;
	case 2:
		Login();
		break;
	case 3:
		std::cout << "Bye" << std::endl;
		system("exit");
		break;
	case 4:
		std::cout << "ERROR::COMMAND::DOES::NOT::EXIST" << std::endl;
		break;
	}
}

int main()
{
	MainMenu();

	return 0;
}