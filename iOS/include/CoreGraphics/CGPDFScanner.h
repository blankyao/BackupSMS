/* CoreGraphics - CGPDFScanner.h
 * Copyright (c) 2004-2008 Apple Inc.
 * All rights reserved. */

#ifndef CGPDFSCANNER_H_
#define CGPDFSCANNER_H_

typedef struct CGPDFScanner *CGPDFScannerRef;

#include <CoreGraphics/CGPDFContentStream.h>
#include <CoreGraphics/CGPDFOperatorTable.h>

/* Create a scanner. */

CG_EXTERN CGPDFScannerRef CGPDFScannerCreate(CGPDFContentStreamRef cs,
    CGPDFOperatorTableRef table, void *info)
    CG_AVAILABLE_STARTING(__MAC_10_4, __IPHONE_2_0);

/* Retain `scanner'. */

CG_EXTERN CGPDFScannerRef CGPDFScannerRetain(CGPDFScannerRef scanner)
    CG_AVAILABLE_STARTING(__MAC_10_4, __IPHONE_2_0);

/* Release `scanner'. */

CG_EXTERN void CGPDFScannerRelease(CGPDFScannerRef scanner)
    CG_AVAILABLE_STARTING(__MAC_10_4, __IPHONE_2_0);

/* Scan the content stream of `scanner'. Returns true if the entire stream
   was scanned successfully; false if scanning failed for some reason (for
   example, if the stream's data is corrupted). */

CG_EXTERN bool CGPDFScannerScan(CGPDFScannerRef scanner)
    CG_AVAILABLE_STARTING(__MAC_10_4, __IPHONE_2_0);

/* Return the content stream associated with `scanner'. */

CG_EXTERN CGPDFContentStreamRef CGPDFScannerGetContentStream(CGPDFScannerRef
    scanner) CG_AVAILABLE_STARTING(__MAC_10_4, __IPHONE_2_0);

/* Pop an object from the stack of `scanner' and return it in `value'. */

CG_EXTERN bool CGPDFScannerPopObject(CGPDFScannerRef scanner,
    CGPDFObjectRef *value) CG_AVAILABLE_STARTING(__MAC_10_4, __IPHONE_2_0);

/* Pop an object from the stack of `scanner' and, if it's a boolean, return
   it in `value'. Return false if the top of the stack isn't a boolean. */

CG_EXTERN bool CGPDFScannerPopBoolean(CGPDFScannerRef scanner,
    CGPDFBoolean *value) CG_AVAILABLE_STARTING(__MAC_10_4, __IPHONE_2_0);

/* Pop an object from the stack of `scanner' and, if it's an integer, return
   it in `value'. Return false if the top of the stack isn't an integer. */

CG_EXTERN bool CGPDFScannerPopInteger(CGPDFScannerRef scanner,
    CGPDFInteger *value) CG_AVAILABLE_STARTING(__MAC_10_4, __IPHONE_2_0);

/* Pop an object from the stack of `scanner' and, if it's a number, return
   it in `value'. Return false if the top of the stack isn't a number. */

CG_EXTERN bool CGPDFScannerPopNumber(CGPDFScannerRef scanner, CGPDFReal *value)
    CG_AVAILABLE_STARTING(__MAC_10_4, __IPHONE_2_0);

/* Pop an object from the stack of `scanner' and, if it's a name, return it
   in `value'. Return false if the top of the stack isn't a name. */

CG_EXTERN bool CGPDFScannerPopName(CGPDFScannerRef scanner, const char **value)
    CG_AVAILABLE_STARTING(__MAC_10_4, __IPHONE_2_0);

/* Pop an object from the stack of `scanner' and, if it's a string, return
   it in `value'. Return false if the top of the stack isn't a string. */

CG_EXTERN bool CGPDFScannerPopString(CGPDFScannerRef scanner,
    CGPDFStringRef *value) CG_AVAILABLE_STARTING(__MAC_10_4, __IPHONE_2_0);

/* Pop an object from the stack of `scanner' and, if it's an array, return
   it in `value'. Return false if the top of the stack isn't an array. */

CG_EXTERN bool CGPDFScannerPopArray(CGPDFScannerRef scanner,
    CGPDFArrayRef *value) CG_AVAILABLE_STARTING(__MAC_10_4, __IPHONE_2_0);

/* Pop an object from the stack of `scanner' and, if it's a dictionary,
   return it in `value'. Return false if the top of the stack isn't a
   dictionary. */

CG_EXTERN bool CGPDFScannerPopDictionary(CGPDFScannerRef scanner,
    CGPDFDictionaryRef *value)
    CG_AVAILABLE_STARTING(__MAC_10_4, __IPHONE_2_0);

/* Pop an object from the stack of `scanner' and, if it's a stream, return
   it in `value'. Return false if the top of the stack isn't a stream. */

CG_EXTERN bool CGPDFScannerPopStream(CGPDFScannerRef scanner,
    CGPDFStreamRef *value) CG_AVAILABLE_STARTING(__MAC_10_4, __IPHONE_2_0);

#endif	/* CGPDFSCANNER_H_ */
