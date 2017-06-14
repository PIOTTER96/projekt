#include "Human.h"

void Human::notify(string action, string arg)
{
    if(action == "death")
	{
        if(arg == _TypyLudzi)
        {
            cout << " *** " << _TypyLudzi << " " << name << " (" << _weight << " kg) sorrows :(" << endl;
        }
	}
}
