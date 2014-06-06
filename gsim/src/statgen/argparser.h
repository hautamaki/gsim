//******************************{begin:header}******************************//
//               gsim - GPS/INS measurement simulation system               //
//**************************************************************************//
//
//      Part of the GPS/INS measurement simulation system GSIM
//      https://code.google.com/p/gsim
//
//      Copyright (C) 2013-2014 Jani Hautamaki <jani.hautamaki@hotmail.com>
//
//      Licensed under the terms of GNU General Public License v3.
//
//      You should have received a copy of the GNU General Public License v3
//      along with this program as the file LICENSE.txt; if not, please see
//      http://www.gnu.org/licenses/gpl-3.0.html
//
//********************************{end:header}******************************//

#ifndef ARGPARSER_H
#define ARGPARSER_H

#include "grease/gut_argparser.h"
#include "statgen_config.h"

#ifdef __cplusplus
extern "C" {
#endif

extern int argparser_parse(
    gut_argparser *parser,
    int argc,
    char *argv[],
    statgen_config *config
);

#ifdef __cplusplus
} // extern "C"
#endif

#endif
