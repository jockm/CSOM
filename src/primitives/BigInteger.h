#ifndef CORE_BIGINTEGER_H_
#define CORE_BIGINTEGER_H_

/*
 * $Id: BigInteger.h 792 2009-04-06 08:07:33Z michael.haupt $
 *
Copyright (c) 2007 Michael Haupt, Tobias Pape
Software Architecture Group, Hasso Plattner Institute, Potsdam, Germany
http://www.hpi.uni-potsdam.de/swa/

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
  */

#include <vmobjects/OOObject.h>



void  _BigInteger_plus(pVMObject object, pVMFrame frame);
void  _BigInteger_minus(pVMObject object, pVMFrame frame);
void  _BigInteger_star(pVMObject object, pVMFrame frame);
void  _BigInteger_slash(pVMObject object, pVMFrame frame);
void  _BigInteger_percent(pVMObject object, pVMFrame frame);
void  _BigInteger_and(pVMObject object, pVMFrame frame);
void  _BigInteger_equal(pVMObject object, pVMFrame frame);
void  _BigInteger_lessthan(pVMObject object, pVMFrame frame);
void  _BigInteger_asString(pVMObject object, pVMFrame frame);
void  _BigInteger_sqrt(pVMObject object, pVMFrame frame);

#endif // CORE_BIGINTEGER_H_



