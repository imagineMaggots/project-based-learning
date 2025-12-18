/**
 * Simple Terminal(?) Text-Editor. 
 * Note: Originally intended to follow a tutorial made for unix-like systems. But i guess i'll have to wing this, as i am working primarily on windows systems~~~! 
 * 
 * Also: I still don't get why you'd need to use make?
 * 
 * Further: Will i even need the tutorial?
 * 
 * To Do:
 * - Follow the tutorial i guess
 * - Understand whats happening
 * - Adjust for windows11
 * - Be a normal human
 * - Proper documentation
 */
// Following the tutorial
#include <unistd.h>

// Adjustments made. Will likely be a bit complicated, as the linux/unix-workflow is simpler and less layered (which is good for development, but sucks if you prefer windows as an end-user)
#include <windows.h> // instead of #include <termios.h>
#include <wincon.h> // to test. might offer all i need for a text-editor/-based-program already?

int main (int argc, char** argv)
{
    // Buffer for character input
    char c;
    // while we're reading anything but q -> continue
    while (read(STDIN_FILENO, &c, 1) == 1 && c != 'q');
    // someone told us to quit
    return 0;
}