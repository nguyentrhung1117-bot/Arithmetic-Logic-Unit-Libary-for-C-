#include "GATE.h"

bool s_switch(bool s)
{
    if (s == 1) return 1;
    else return 0;
}
bool NOT_GATE(bool s)
{
    if (s == 1) return 0;
    else return 1;
}
bool AND_GATE(bool a, bool b)
{
    if (a == 1 && b == 1) return 1;
    else return 0;
}
bool OR_GATE(bool a, bool b)
{
    if (a == 1 || b == 1) return 1;
    else return 0;
}
bool NAND_GATE(bool a, bool b)
{
    if (a == 1 && b == 1) return 0;
    else return 1;
}
bool NOR_GATE(bool a, bool b)
{
    if (a == 1 || b == 1) return 0;
    else return 1;
}
bool XOR_GATE(bool a, bool b)
{
    if (a != b) return 1;
    else return 0;
}
bool XNOR_GATE(bool a, bool b)
{
    if (a != b) return 0;
    else return 1;
}
