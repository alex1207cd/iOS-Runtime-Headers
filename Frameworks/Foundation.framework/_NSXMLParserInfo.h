/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSMutableArray, NSError;



@interface _NSXMLParserInfo : NSObject 
{
    struct _xmlSAXHandler { int (*x1)(); int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); int (*x7)(); int (*x8)(); int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); int (*x13)(); int (*x14)(); int (*x15)(); int (*x16)(); int (*x17)(); int (*x18)(); int (*x19)(); int (*x20)(); int (*x21)(); int (*x22)(); int (*x23)(); int (*x24)(); int (*x25)(); int (*x26)(); int (*x27)(); NSUInteger x28; void *x29; int (*x30)(); int (*x31)(); int (*x32)(); } *saxHandler;
    struct _xmlParserCtxt { struct _xmlSAXHandler {} *x1; void *x2; struct _xmlDoc {} *x3; NSInteger x4; NSInteger x5; char *x6; char *x7; NSInteger x8; NSInteger x9; struct _xmlParserInput {} *x10; NSInteger x11; NSInteger x12; struct _xmlParserInput {} **x13; struct _xmlNode {} *x14; NSInteger x15; NSInteger x16; struct _xmlNode {} **x17; NSInteger x18; struct _xmlParserNodeInfoSeq { 
            unsigned long maximum; 
            unsigned long length; 
            struct _xmlParserNodeInfo {} *buffer; 
        } x19; NSInteger x20; NSInteger x21; NSInteger x22; NSInteger x23; NSInteger x24; NSInteger x25; struct _xmlValidCtxt { 
            void *userData; 
            int (*error)(); 
            int (*warning)(); 
            struct _xmlNode {} *node; 
            NSInteger nodeNr; 
            NSInteger nodeMax; 
            struct _xmlNode {} **nodeTab; 
            NSUInteger finishDtd; 
            struct _xmlDoc {} *doc; 
            NSInteger valid; 
            struct _xmlValidState {} *vstate; 
            NSInteger vstateNr; 
            NSInteger vstateMax; 
            struct _xmlValidState {} *vstateTab; 
            struct _xmlAutomata {} *am; 
            struct _xmlAutomataState {} *state; 
        } x26; NSInteger x27; NSInteger x28; char *x29; char *x30; NSInteger x31; NSInteger x32; char **x33; long x34; long x35; NSInteger x36; NSInteger x37; NSInteger x38; char *x39; char *x40; char *x41; NSInteger *x42; NSInteger x43; NSInteger x44; NSInteger *x45; NSInteger x46; struct _xmlParserInput {} *x47; NSInteger x48; NSInteger x49; NSInteger x50; NSInteger x51; void *x52; NSInteger x53; NSInteger x54; void *x55; NSInteger x56; NSInteger x57; struct _xmlDict {} *x58; char **x59; NSInteger x60; NSInteger x61; char *x62; char *x63; char *x64; NSInteger x65; NSInteger x66; NSInteger x67; char **x68; NSInteger *x69; void **x70; struct _xmlHashTable {} *x71; struct _xmlHashTable {} *x72; NSInteger x73; NSInteger x74; NSInteger x75; NSInteger x76; struct _xmlNode {} *x77; NSInteger x78; struct _xmlAttr {} *x79; struct _xmlError { 
            NSInteger domain; 
            NSInteger code; 
            char *message; 
            NSInteger level; 
            char *file; 
            NSInteger line; 
            char *str1; 
            char *str2; 
            char *str3; 
            NSInteger int1; 
            NSInteger int2; 
            void *ctxt; 
            void *node; 
        } x80; NSInteger x81; } *parserContext;
    NSUInteger parserFlags;
    NSError *error;
    NSMutableArray *namespaces;
    BOOL delegateAborted;
}



@end
