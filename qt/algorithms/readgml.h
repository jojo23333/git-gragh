// Header file for the parser for GML files
//

#ifndef _READGML_H
#define _READGML_H

#include <stdio.h>
#include "network.h"

int read_network(NETWORK *network, FILE *stream);
void free_network(NETWORK *network);

#endif
