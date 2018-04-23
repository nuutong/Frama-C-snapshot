/**************************************************************************/
/*                                                                        */
/*  This file is part of Frama-C.                                         */
/*                                                                        */
/*  Copyright (C) 2007-2018                                               */
/*    CEA (Commissariat à l'énergie atomique et aux énergies              */
/*         alternatives)                                                  */
/*                                                                        */
/*  you can redistribute it and/or modify it under the terms of the GNU   */
/*  Lesser General Public License as published by the Free Software       */
/*  Foundation, version 2.1.                                              */
/*                                                                        */
/*  It is distributed in the hope that it will be useful,                 */
/*  but WITHOUT ANY WARRANTY; without even the implied warranty of        */
/*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         */
/*  GNU Lesser General Public License for more details.                   */
/*                                                                        */
/*  See the GNU Lesser General Public License version 2.1                 */
/*  for more details (enclosed in the file licenses/LGPLv2.1).            */
/*                                                                        */
/**************************************************************************/

#ifndef __FC_DEFINE_INTPTR_T
#define __FC_DEFINE_INTPTR_T
#include "features.h"
__PUSH_FC_STDLIB
#include "__fc_machdep.h"

__BEGIN_DECLS

#ifdef __INTPTR_T
#ifndef __intptr_t_defined
typedef __INTPTR_T intptr_t;
#define INTPTR_MIN __FC_INTPTR_MIN
#define INTPTR_MAX __FC_INTPTR_MAX
#define __intptr_t_defined
#endif
#endif

__END_DECLS

__POP_FC_STDLIB
#endif
