#include <iostream>
#include <Windows.h>
using namespace std;

enum ProjectSimplifications {
    SYMBOL_MIN_SIZE = 4,
    RERUN = 1,
    NO_RERUN = 0,
    STANDARD_WINDOW_HEIGHT = 25,
    STANDARD_WINDOW_WIDTH = 80,
    NO_INPUT_YET = 0
};
enum KeyCodes {
    KEY_PLUS = VK_OEM_PLUS,
    KEY_MINUS = VK_OEM_MINUS,
    KEY_DOWN_ARROW = VK_DOWN,
    KEY_UP_ARROW = VK_UP,
    KEY_RIGHT_ARROW = VK_RIGHT,
    KEY_LEFT_ARROW = VK_LEFT,
    KEY_ESCAPE = VK_ESCAPE,
    KEY_PRESSED = 0x8000
};
enum ErrorCases {
    NO_ERRORS = 0,
    SIZE_OUT_OF_BOUNDARY,
    SYMBOL_TOO_SMALL,
    MOVE_DOWN_OUT_OF_BOUNDARY,
    MOVE_UP_OUT_OF_BOUNDARY,
    MOVE_RIGHT_OUT_OF_BOUNDARY,
    MOVE_LEFT_OUT_OF_BOUNDARY
};
class SymbolProject {
public:
    SymbolProject(): asciiChar(NO_INPUT_YET), asciiCode(NO_INPUT_YET), size(NO_INPUT_YET), spaceFromLeft(NO_INPUT_YET), spaceFromUp(NO_INPUT_YET), windowWidth(STANDARD_WINDOW_WIDTH), windowHeight(STANDARD_WINDOW_HEIGHT), errorCase(NO_ERRORS), rerunProgram(RERUN) {
    }
    char getInputAscii();
    int startingDimensions();
    void drawSymbol() const;
    void adjustSymbolPosition();
    void WindowSize();
    int getEndLoop() const {
        return rerunProgram;
    }
    int getErrorCase() const {
        return errorCase;
    }
private:
    char asciiChar;
    int asciiCode;
    int size;
    int spaceFromLeft;
    int spaceFromUp;
    int windowWidth;
    int windowHeight;
    int errorCase;
    int rerunProgram;
};
char SymbolProject::getInputAscii() {
    cout << "Enter an ASCII code to get the corresponding character:";
    cin >> asciiCode;
    cout << endl;
    asciiChar = static_cast<char>(asciiCode);
    return asciiChar;
}
int SymbolProject::startingDimensions() {
    cout << "Input the starting dimension:";
    cin >> size;
    cout << endl;
    return size;
}
void SymbolProject::drawSymbol() const {
    for (int row = 0; row < spaceFromUp; ++row) {
        for (int space = 0; space < spaceFromLeft; ++space) {
            cout << " ";
        }
        cout << endl;
    }
    for (int space = 0; space < spaceFromLeft; ++space) {
        cout << " ";
    }
    for (int topRow = 0; topRow < size; ++topRow) {
        cout << asciiChar;
    }
    cout << endl;
    for (int row = 1; row < size; ++row) {
        for (int space = 0; space < spaceFromLeft + row; ++space) {
            if(space == 0) continue;
            else cout << " ";
        }
        cout << asciiChar;
        cout << endl;
    }
    for (int row = 0; row < spaceFromLeft; ++row) {
        cout << " ";
    }
    for (int bottomRow = 0; bottomRow < size; ++bottomRow) {
        cout << asciiChar;
    }
    cout << endl;
}
void SymbolProject::adjustSymbolPosition() {
    errorCase = NO_ERRORS;
    while (true) {
        if (GetAsyncKeyState(KEY_PLUS) & KEY_PRESSED) {
            if (size + spaceFromUp < windowHeight && size + spaceFromLeft < windowWidth) {
                size++;
                break;
            }
            else if(size + spaceFromUp >= windowHeight || size + spaceFromLeft >= windowWidth) {
                errorCase = SIZE_OUT_OF_BOUNDARY;
                break;
            }
        } else if (GetAsyncKeyState(KEY_MINUS) & KEY_PRESSED) {
            if (size > 4) {
                size--;
                break;
            } else {
                errorCase = SYMBOL_TOO_SMALL;
                break;
            }
        } else if (GetAsyncKeyState(KEY_DOWN_ARROW) & KEY_PRESSED) {
            if (spaceFromUp < windowHeight - size) {
                spaceFromUp++;
                break;
            } else if(spaceFromUp >= windowHeight - size) {
                errorCase = MOVE_DOWN_OUT_OF_BOUNDARY;
                break;
            }
        } else if (GetAsyncKeyState(KEY_UP_ARROW) & KEY_PRESSED) {
            if (spaceFromUp > 0) {
                spaceFromUp--;
                break;
            } else {
                errorCase = MOVE_UP_OUT_OF_BOUNDARY;
                break;
            }
        } else if (GetAsyncKeyState(KEY_RIGHT_ARROW) & KEY_PRESSED) {
            if (windowWidth - spaceFromLeft - size > 0) {
                spaceFromLeft++;
                break;
            } else if(windowWidth - spaceFromLeft - size <= 0) {
                errorCase = MOVE_RIGHT_OUT_OF_BOUNDARY;
                break;
            }
        } else if (GetAsyncKeyState(KEY_LEFT_ARROW) & KEY_PRESSED) {
            if (spaceFromLeft > 0) {
                spaceFromLeft--;
                break;
            } else {
                errorCase = MOVE_LEFT_OUT_OF_BOUNDARY;
                break;
            }
        }
        if (GetAsyncKeyState(KEY_ESCAPE) & KEY_PRESSED) {
            rerunProgram = NO_RERUN;
            break;
        }
    }
    switch (errorCase) {
        case SIZE_OUT_OF_BOUNDARY:
            cout << "Cannot change size, out of boundary." << endl;
            break;
        case SYMBOL_TOO_SMALL:
            cout << "Cannot change size, the symbol is too small." << endl;
            break;
        case MOVE_DOWN_OUT_OF_BOUNDARY:
            cout << "Cannot move symbol down, out of boundary." << endl;
            break;
        case MOVE_UP_OUT_OF_BOUNDARY:
            cout << "Cannot move symbol up, out of boundary." << endl;
            break;
        case MOVE_RIGHT_OUT_OF_BOUNDARY:
            cout << "Cannot move symbol right, out of boundary." << endl;
            break;
        case MOVE_LEFT_OUT_OF_BOUNDARY:
            cout << "Cannot move symbol left, out of boundary." << endl;
            break;
        default:
            break;
    } cout << endl;
}
void SymbolProject::WindowSize() {
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    windowWidth = csbi.srWindow.Right - csbi.srWindow.Left + 1;
    windowHeight = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
}
int main() {
    SymbolProject builder;
    builder.getInputAscii();

    int size = builder.startingDimensions();
    while (size < SYMBOL_MIN_SIZE) {
        cout << "Too small, input another dimension." << endl;
        size = builder.startingDimensions();
    }
    cout << "To control the program, use these keys:\n[+] Size up\n[-] Size down\n[>] Move right\n[<] Move left\n[^] Move up\n[v] Move down\n[ESC] End program";
    Sleep(2500);

    while(builder.getEndLoop() == RERUN) {
        system("cls");
        builder.drawSymbol();

        Sleep(100);
        builder.adjustSymbolPosition();
        builder.WindowSize();
        if(builder.getErrorCase() != NO_ERRORS) {
            Sleep(500);
        }
    }
    system("pause");
    return 0;
}
