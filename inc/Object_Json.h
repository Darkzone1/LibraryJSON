
#ifndef _OBJECT_JSON_H_
#define _OBJECT_JSON_H_

#include <cstdlib>
#include <stdio.h>

#ifndef __STRINGJSON
  typedef char *_STRINGJSON;
  typedef unsigned char *_STRINGUJSON;
#define __STRINGJSON
#endif

#ifndef __NUMBERJSON_DEFINED
  typedef int _NUMBERIJSON;
  typedef long _NUMBERLJSON;
  typedef short _NUMBERJSON;
  typedef double _NUMBERDJSON;
  typedef signed int _NUMBERSIJSON;
  typedef signed long _NUMBERSLJSON;
  typedef signed short _NUMBERSSJSON;
  typedef signed double _NUMBERSDJSON;
  typedef unsigned int _NUMBERUIJSON;
  typedef unsigned long _NUMBERULJSON;
  typedef unsigned short _NUMBERUSJSON;
  typedef unsigned double _NUMBERUDJSON;
#define __NUMBERJSON_DEFINED
#endif

#endif

