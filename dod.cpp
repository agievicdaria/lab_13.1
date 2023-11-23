#include "dod.h"
#include "var.h" // підключили зовнішні оголошення змінних
using namespace nsVar;
void nsDod::dod()
{
    a *= ((2 * n - 1) / (2 * n * x * x + x * x)); // доданок домножується на коефіцієнт рекурентності
    // R = (2 * n - 1) / (2 * n * x * x + x * x);
    // a *= R;
}