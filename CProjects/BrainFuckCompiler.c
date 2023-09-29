#include <stdio.h>

void brainfuckCompiler(const char *code) {
    unsigned char tape[30000] = {0}; // Brainfuck memory tape
    unsigned char *ptr = tape;       // Pointer to current memory cell

    for (int i = 0; code[i] != '\0'; i++) {
        switch (code[i]) {
            case '>': ptr++; break;
            case '<': ptr--; break;
            case '+': (*ptr)++; break;
            case '-': (*ptr)--; break;
            case '.': putchar(*ptr); break;
            case ',': *ptr = getchar(); break;
            case '[':
                if (*ptr == 0) {
                    int loopLevel = 1;
                    while (loopLevel > 0) {
                        i++;
                        if (code[i] == '[') loopLevel++;
                        else if (code[i] == ']') loopLevel--;
                    }
                }
                break;
            case ']':
                if (*ptr != 0) {
                    int loopLevel = 1;
                    while (loopLevel > 0) {
                        i--;
                        if (code[i] == ']') loopLevel++;
                        else if (code[i] == '[') loopLevel--;
                    }
                }
                break;
            default: // Ignore other characters
                break;
        }
    }
}

int main() {
    const char brainfuckCode[] = "+[----->+++<]>+.---.+++++++..+++.[--->+<]>-----.---[->++++<]>-.-----------.-------.+++++++++++++.---------.";

    brainfuckCompiler(brainfuckCode);

    return 0;
}