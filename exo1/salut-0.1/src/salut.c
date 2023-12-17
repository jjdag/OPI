# include <stdio.h>
# include "bonjour.h"
# include "bonsoir.h"
# include "bonnenuit.h"
# include "heure.h"

int main() {
	int mtn = heure();

	if (mtn>=5 && mtn<17) {
		bonjour();
	}
	else if (mtn>=17 && mtn<20)
		bonsoir();
	} else { bonnenuit(); }

return 0;

}