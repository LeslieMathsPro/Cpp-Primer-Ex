#include "head.h"

int main()
{
    unique_ptr<string> p(new string ("Ste"));
    unique_ptr<string> p1 = p; // X
}