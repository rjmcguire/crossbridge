// Copyright (c) 2013 Adobe Systems Inc

// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:

// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.

// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//===-- AVM2TargetAsmInfo.cpp - AVM2 asm properties -----------*- C++ -*-===//
//
// This file contains the declarations of the AVM2TargetAsmInfo properties.
//
//===----------------------------------------------------------------------===//

static const char AdobeInternalCode[] __attribute__((used)) = "This File contains Adobe internal code.";

#include "AVM2TargetAsmInfo.h"
#include "AVM2Subtarget.h"

using namespace llvm;

AVM2TargetAsmInfo::AVM2TargetAsmInfo(const Target &T, const StringRef &TT)
{
    CommentString = "//";
    InlineAsmStart = "InlineAsmStart";
    InlineAsmEnd = "InlineAsmEnd";
    GlobalPrefix = "_";
    PrivateGlobalPrefix = "L";
    LCOMMDirectiveAlignmentType = LCOMM::ByteAlignment;
    WeakRefDirective = "/*weak*/";
    AllowPeriodsInName = false;
    AllowQuotesInName = false;
    AllowNameToStartWithDigit = false;
    HasSingleParameterDotFile = false;
    HasDotTypeDotSizeDirective = false;

    ExceptionsType = ExceptionHandling::SjLj;

    SupportsDebugInformation = true;
}
