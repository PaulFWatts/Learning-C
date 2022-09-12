// helloworld_gui.c
#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpszCmdline, int nCmdShow)
/* We can also use main() as an entry function. */
//int main()
{
	char text[] = "Hello, World!";

	if ( WriteConsole(GetStdHandle(STD_OUTPUT_HANDLE), text, strlen(text), NULL, NULL) == FALSE )
	{
		if ( AllocConsole() == TRUE )
		{
			WriteConsole(GetStdHandle(STD_OUTPUT_HANDLE), text, strlen(text), NULL, NULL);

			getch();

			FreeConsole();
		}
	}
       else
               getch();
	return 0;
}
