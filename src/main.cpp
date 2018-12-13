#include <stdio.h>

#include "tunes.h"
#include "wwymc.h"
struct note *melody = we_wish_you_melody;
unsigned int length = we_wish_you_length;

struct note note;
void read()
{
	unsigned int current=0;
	while(true) {
		/*wait till ready*/
		note=melody[current];
		current = (current+1)%length;
	}
}

void play()
{
	/*signal for note*/
	while(true){
		sound(note.tone);
		wait(note.duration);
		/*signal for note*/
		sound(0);
		wait(1);
	}
}

int main()
{

}

