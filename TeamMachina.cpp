#include <string>
#include <iostream>
using namespace std;

string authorMain = "@Kooser6 <Izabama Fernado>";
string authorSecondary = "@Omatamix <Nicholas English>";
string engineName = "TeamMachina <2.0>";
string userInput;

void uci();
void setOption(string option);
void isReady();
void newGame();
void position(string position);
void go();
void quit();
void print();

bool run = true;

int main()
{
    cout << "Awaiting Commands...";
    while (run) {
        getline(cin, userInput);
        if (userInput == "uci")
        {
            uci();
        }
        else if (userInput.rfind("setoption", 0) == 0)
        {
            setOption(userInput);
        }
        else if (userInput.rfind("isready", 0) == 0)
        {
            isReady();
        }
        else if (userInput.rfind("ucinewgame", 0) == 0)
        {
            newGame();
        }
        else if (userInput.rfind("position", 0) == 0)
        {
            position(userInput);
        }
        else if (userInput.rfind("go", 0) == 0)
        {
            go();
        }
        else if (userInput.rfind("quit", 0) == 0)
        {
            quit();
        }
        else if (userInput.rfind("print", 0) == 0)
        {
            print();
        }
    }
    return 0;
}

void uci()
{
    cout << "ID Name " << engineName << endl;
    cout << "ID Author " << authorMain << authorSecondary << endl;

    cout << "uciok" << endl;
}

void setOption(string option)
{
    cout << "Setting options..." << endl;

    cout << "Options set." << endl;
}

void isReady()
{

    cout << "readyok" << endl;
}
void newGame()
{
    cout << "Creating New Game..." << endl;
}

void position(string position)
{
    cout << "Accepting Position..." << endl;
}

void go()
{
    cout << "Going..." << endl;
}

void quit()
{
    cout << "Quiting..." << endl;
    run = false;
}

void print()
{
    cout << "Printing Board..." << endl;
}
